#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMCLOSEQUEST_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x1B93A4B0)
#define RPG_CLIENT_CHECKITEMCLOSEQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B93A5F0)
#define RPG_CLIENT_CHECKITEMCLOSEQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B93A490)
#define RPG_CLIENT_CHECKITEMCLOSEQUEST__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x1B93A540)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemCloseQuest_TypeDefinitionIndex = 60012;

	class CheckItemCloseQuest : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _TargetQuestID; // 0x10

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMCLOSEQUEST__CTOR_OFFSET))(this, a1);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMCLOSEQUEST_FILLNOTIFYTYPESTO_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMCLOSEQUEST__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMCLOSEQUEST_TOSTRING_OFFSET))(this);
		}
	};
}
