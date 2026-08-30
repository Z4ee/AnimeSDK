#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_CHECKWITHAVATARID_OFFSET UNITYSDK_OFFSET(0x1B93AF20)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1B93AE90)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B93B080)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93ADC0)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1B93AFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemReachAvatarLevel_TypeDefinitionIndex = 60023;

	class CheckItemReachAvatarLevel : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _AvatarID; // 0x10
		::System::Boolean _IsParamValid; // 0x14
		::System::UInt32 _TargetLevel; // 0x18

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean CheckWithAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_CHECKWITHAVATARID_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_TOSTRING_OFFSET))(this);
		}
	};
}
