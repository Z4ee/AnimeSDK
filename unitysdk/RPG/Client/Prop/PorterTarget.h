#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2679F01039F3FC24;
namespace RPG::Client::Prop { class PorterItem; }
namespace RPG::Client::Prop { class PorterPuzzle; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xDCF7CA0)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xDCF7CF0)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_729AA4D1DEC0970C_OFFSET UNITYSDK_OFFSET(0xDCF7000)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_95AA3C6CB470ECEA_OFFSET UNITYSDK_OFFSET(0xDCF6880)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDCF7560)
#define RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0xDCF67C0)
#define RPG_CLIENT_PROP_PORTERTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xDCF7D90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterTarget_TypeDefinitionIndex = 78304;

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

		::System::Void Method_1_729AA4D1DEC0970C(::RPG::Client::Prop::PorterPuzzle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PorterPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_729AA4D1DEC0970C_OFFSET))(this, a1);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_95AA3C6CB470ECEA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_95AA3C6CB470ECEA_OFFSET))(this, a1);
		}

		::System::Void Method_1_EDE104A2956E181A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_EDE104A2956E181A_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_1_62593EE2FE331D20()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PORTERTARGET_METHOD_1_62593EE2FE331D20_OFFSET))(this);
		}
	};
}
