#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PorterItem; }
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_00C5E99C9B0EC08D_OFFSET UNITYSDK_OFFSET(0xAEA6AA0)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAEA8050)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_514DADE30A6B3A71_OFFSET UNITYSDK_OFFSET(0xAEA68B0)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_6E896AACE3F012D5_OFFSET UNITYSDK_OFFSET(0xAEA7260)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAEA7820)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xAEA80A0)
#define RPG_CLIENT_PROP_PORTERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA8140)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterTarget_TypeDefinitionIndex = 72271;

	class PorterTarget : public ::System::Object
	{
	public:
		::System::Int32 ID; // 0x10
		::UnityEngine::GameObject* Item; // 0x18
		::System::String* InteractText; // 0x20
		::System::Int32 InitPorterItemIndex; // 0x28
		::System::Int32 ItemInteractIndex; // 0x2C
		::System::Boolean IsNeedGroupMatch; // 0x30
		::RPG::Client::Prop::PorterItem* CurPorterItem; // 0x38
		::RPG::Client::Prop::PorterPuzzle* _OwnerRef; // 0x40
		::Class_2_2679F01039F3FC24* _UITriggerProxy; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6E896AACE3F012D5(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_6E896AACE3F012D5_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_00C5E99C9B0EC08D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_00C5E99C9B0EC08D_OFFSET))(this, a1);
		}

		::System::Void Method_1_514DADE30A6B3A71(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_514DADE30A6B3A71_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_ED65AE7582736594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_ED65AE7582736594_OFFSET))(this);
		}
	};
}
