#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_E8972CDB20ABFBE4;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x13877D00)
#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_A467DFE7862A0D44_OFFSET UNITYSDK_OFFSET(0x138777F0)
#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x13877760)
#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_C7E8C9D37CBB3C94_OFFSET UNITYSDK_OFFSET(0x13877F00)
#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_C95C72C01AAA34B5_OFFSET UNITYSDK_OFFSET(0x13877590)
#define CLASS_1_24C7DBE81C8DCCB7_METHOD_1_F3056E6B09294016_OFFSET UNITYSDK_OFFSET(0x13877880)
#define CLASS_1_24C7DBE81C8DCCB7_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x13876DF0)
#define CLASS_1_24C7DBE81C8DCCB7_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x13877230)
#define CLASS_1_24C7DBE81C8DCCB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x13878170)
#define CLASS_1_24C7DBE81C8DCCB7__CTOR_OFFSET UNITYSDK_OFFSET(0x13878030)

inline static constexpr unsigned int Class_1_24C7DBE81C8DCCB7_TypeDefinitionIndex = 68401;

class Class_1_24C7DBE81C8DCCB7 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_24C7DBE81C8DCCB7_TypeDefinitionIndex)->GetStaticField(0x12D20);
	}
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x10
	::RPG::GameCore::GameWorld* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_E8972CDB20ABFBE4*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7__CCTOR_OFFSET))();
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_C95C72C01AAA34B5(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_C95C72C01AAA34B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_A467DFE7862A0D44(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_A467DFE7862A0D44_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3056E6B09294016(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_F3056E6B09294016_OFFSET))(this, a1);
	}

	::System::Void Method_1_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7E8C9D37CBB3C94(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_24C7DBE81C8DCCB7_METHOD_1_C7E8C9D37CBB3C94_OFFSET))(this, a1, a2);
	}
};
