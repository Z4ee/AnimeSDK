#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB5A1D40)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5A1EB0)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xB5A1D20)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB5A1E00)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0xB5A1F60)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5A2020)
#define RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0xB5A1FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemBelowPlayerLevel_TypeDefinitionIndex = 55972;

	class CheckItemBelowPlayerLevel : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetPlayerLevel; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL_TOSTRING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy__DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMBELOWPLAYERLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
