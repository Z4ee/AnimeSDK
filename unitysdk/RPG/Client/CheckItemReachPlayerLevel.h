#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xCAE7F30)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_GET_TARGETPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0xCAE8150)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCAE80A0)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCAE7F10)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xCAE7FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemReachPlayerLevel_TypeDefinitionIndex = 60024;

	class CheckItemReachPlayerLevel : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetPlayerLevel_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 get_TargetPlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_GET_TARGETPLAYERLEVEL_OFFSET))(this);
		}
	};
}
