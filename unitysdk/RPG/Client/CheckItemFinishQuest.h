#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMFINISHQUEST_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x9F88D70)
#define RPG_CLIENT_CHECKITEMFINISHQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F88EB0)
#define RPG_CLIENT_CHECKITEMFINISHQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x9F88D50)
#define RPG_CLIENT_CHECKITEMFINISHQUEST__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x9F88E00)
#define RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x9F88F60)
#define RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F89040)
#define RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x9F88FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemFinishQuest_TypeDefinitionIndex = 55246;

	class CheckItemFinishQuest : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetQuestID; // 0x10

		::System::Void _ctor(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST__CTOR_OFFSET))(this, param);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST_TOSTRING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy__DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMFINISHQUEST___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
