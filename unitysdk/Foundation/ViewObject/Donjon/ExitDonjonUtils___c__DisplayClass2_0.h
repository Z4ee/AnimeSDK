#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_4;
class Class_3_025FF4981524A424_370;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10590A70)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET UNITYSDK_OFFSET(0x10590A80)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass2_0_TypeDefinitionIndex = 67967;

	class ExitDonjonUtils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* onResultContextPrepared; // 0x10
		::System::Threading::CancellationToken ct; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestBigSceneDungeonEnd_b__0(::Class_3_025FF4981524A424_370* rsp, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* ntfs)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_025FF4981524A424_370*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS2_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET))(this, rsp, ntfs);
		}
	};
}
