#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_CHECKWITHAVATARID_OFFSET UNITYSDK_OFFSET(0x931BB30)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931BAA0)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931BDC0)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x931B9C0)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931BC80)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET UNITYSDK_OFFSET(0x931BEA0)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x931BF80)
#define RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x931BF10)

namespace RPG::Client
{
	inline static constexpr unsigned int CheckItemReachAvatarLevel_TypeDefinitionIndex = 48503;

	class CheckItemReachAvatarLevel : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 _AvatarID; // 0x10
		::System::UInt32 _TargetLevel; // 0x14
		::System::Boolean _IsParamValid; // 0x18

		::System::Void _ctor(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__CTOR_OFFSET))(this, param);
		}

		::System::Void FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_FILLNOTIFYTYPESTO_OFFSET))(this, buffer);
		}

		::System::Boolean CheckWithAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_CHECKWITHAVATARID_OFFSET))(this, avatarID);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL_TOSTRING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_FillNotifyTypesTo(::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::NotifyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY_FILLNOTIFYTYPESTO_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy__DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHECKITEMREACHAVATARLEVEL___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
