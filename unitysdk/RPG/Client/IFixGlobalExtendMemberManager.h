#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARACTIONS_OFFSET UNITYSDK_OFFSET(0x1795D560)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1795D630)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARFIELDS_OFFSET UNITYSDK_OFFSET(0x1795CEB0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1795C610)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_GETFIELD_OFFSET UNITYSDK_OFFSET(0x1795C9C0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_GET__INSTANCE_OFFSET UNITYSDK_OFFSET(0x1795D7E0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_HASACTION_OFFSET UNITYSDK_OFFSET(0x1795D2E0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_HASFIELD_OFFSET UNITYSDK_OFFSET(0x1795CCA0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1795C790)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_INVOKEACTION_OFFSET UNITYSDK_OFFSET(0x1795D0E0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_REMOVEACTION_OFFSET UNITYSDK_OFFSET(0x1795D480)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_REMOVEFIELD_OFFSET UNITYSDK_OFFSET(0x1795CDD0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_SETACTION_OFFSET UNITYSDK_OFFSET(0x1795CF80)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_SETFIELD_OFFSET UNITYSDK_OFFSET(0x1795C830)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_TRYGETFIELD_OFFSET UNITYSDK_OFFSET(0x1795CB20)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__CLEARALLINTERNAL_OFFSET UNITYSDK_OFFSET(0x1795C6A0)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1795D810)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__ISVALIDKEY_OFFSET UNITYSDK_OFFSET(0x1795C960)
#define RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__ONIFIXPATCHAPPLIEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1795D6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int IFixGlobalExtendMemberManager_TypeDefinitionIndex = 58557;

	class IFixGlobalExtendMemberManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* _Actions; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _Fields; // 0x18
		::System::Boolean _IsNotifyHandlerRegistered; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_INIT_OFFSET))(this);
		}

		static ::System::Void SetField(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_SETFIELD_OFFSET))(a1, a2);
		}

		static ::System::Object* GetField(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_GETFIELD_OFFSET))(a1);
		}

		static ::System::Boolean TryGetField(::System::String* a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_TRYGETFIELD_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasField(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_HASFIELD_OFFSET))(a1);
		}

		static ::System::Boolean RemoveField(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_REMOVEFIELD_OFFSET))(a1);
		}

		static ::System::Void ClearFields()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARFIELDS_OFFSET))();
		}

		static ::System::Void SetAction(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_SETACTION_OFFSET))(a1, a2);
		}

		static ::System::Boolean InvokeAction(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_INVOKEACTION_OFFSET))(a1);
		}

		static ::System::Boolean HasAction(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_HASACTION_OFFSET))(a1);
		}

		static ::System::Boolean RemoveAction(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_REMOVEACTION_OFFSET))(a1);
		}

		static ::System::Void ClearActions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARACTIONS_OFFSET))();
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_CLEARALL_OFFSET))();
		}

		static ::System::Boolean _IsValidKey(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__ISVALIDKEY_OFFSET))(a1, a2);
		}

		::System::Void _OnIFixPatchAppliedNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__ONIFIXPATCHAPPLIEDNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _ClearAllInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER__CLEARALLINTERNAL_OFFSET))(this);
		}

		static ::RPG::Client::IFixGlobalExtendMemberManager* get__Instance()
		{
			return ((::RPG::Client::IFixGlobalExtendMemberManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_IFIXGLOBALEXTENDMEMBERMANAGER_GET__INSTANCE_OFFSET))();
		}
	};
}
