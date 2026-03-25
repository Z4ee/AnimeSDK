#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931BFE0)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_GET_TARGETPLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x931C200)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931C150)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x931BFC0)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931C0A0)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931C210)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931C2F0)
#define RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931C280)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemReachPlayerLevel_TypeDefinitionIndex = 48504;

	class CheckItemReachPlayerLevel : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetPlayerLevel_k__BackingField; // 0x10

		::System::Void _ctor(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL__CTOR_OFFSET))(this, param);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
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

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy__DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHPLAYERLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
