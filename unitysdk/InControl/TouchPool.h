#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace InControl { class Touch; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define INCONTROL_TOUCHPOOL_FINDORCREATETOUCH_OFFSET UNITYSDK_OFFSET(0x180426B0)
#define INCONTROL_TOUCHPOOL_FINDTOUCH_OFFSET UNITYSDK_OFFSET(0x18043250)
#define INCONTROL_TOUCHPOOL_FREEENDEDTOUCHES_OFFSET UNITYSDK_OFFSET(0x18042580)
#define INCONTROL_TOUCHPOOL_FREETOUCH_OFFSET UNITYSDK_OFFSET(0x18044800)
#define INCONTROL_TOUCHPOOL_NEWTOUCH_OFFSET UNITYSDK_OFFSET(0x18044760)
#define INCONTROL_TOUCHPOOL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18042570)
#define INCONTROL_TOUCHPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x180445C0)

namespace InControl
{
	inline static constexpr unsigned int TouchPool_TypeDefinitionIndex = 37927;

	class TouchPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::InControl::Touch*>* freeTouches; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::InControl::Touch*>* Touches; // 0x18
		::System::Collections::Generic::List_1<::InControl::Touch*>* usedTouches; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL__CTOR_1_OFFSET))(this);
		}

		::InControl::Touch* FindOrCreateTouch(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL_FINDORCREATETOUCH_OFFSET))(this, a1);
		}

		::InControl::Touch* FindTouch(::System::Int32 a1)
		{
			return ((::InControl::Touch*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL_FINDTOUCH_OFFSET))(this, a1);
		}

		::InControl::Touch* NewTouch()
		{
			return ((::InControl::Touch*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL_NEWTOUCH_OFFSET))(this);
		}

		::System::Void FreeTouch(::InControl::Touch* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::Touch*))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL_FREETOUCH_OFFSET))(this, a1);
		}

		::System::Void FreeEndedTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHPOOL_FREEENDEDTOUCHES_OFFSET))(this);
		}
	};
}
