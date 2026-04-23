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

#define CLASS_1_C618AD5E7AEAF928_METHOD_1_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0x125673D0)
#define CLASS_1_C618AD5E7AEAF928_METHOD_1_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x12566F40)
#define CLASS_1_C618AD5E7AEAF928_METHOD_1_A467DFE7862A0D44_OFFSET UNITYSDK_OFFSET(0x12566EB0)
#define CLASS_1_C618AD5E7AEAF928_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12566E20)
#define CLASS_1_C618AD5E7AEAF928_METHOD_1_BC4CE5586582FBE1_OFFSET UNITYSDK_OFFSET(0x12566C60)
#define CLASS_1_C618AD5E7AEAF928_METHOD_1_C7E8C9D37CBB3C94_OFFSET UNITYSDK_OFFSET(0x125675D0)
#define CLASS_1_C618AD5E7AEAF928_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x125664C0)
#define CLASS_1_C618AD5E7AEAF928_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x12566920)
#define CLASS_1_C618AD5E7AEAF928__CCTOR_OFFSET UNITYSDK_OFFSET(0x12567850)
#define CLASS_1_C618AD5E7AEAF928__CTOR_OFFSET UNITYSDK_OFFSET(0x12567710)

inline static constexpr unsigned int Class_1_C618AD5E7AEAF928_TypeDefinitionIndex = 67449;

class Class_1_C618AD5E7AEAF928 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C618AD5E7AEAF928_TypeDefinitionIndex)->GetStaticField(0x5480);
	}
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x10
	::RPG::GameCore::GameWorld* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_E8972CDB20ABFBE4*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928__CCTOR_OFFSET))();
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_BC4CE5586582FBE1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_BC4CE5586582FBE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_A467DFE7862A0D44(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_A467DFE7862A0D44_OFFSET))(this, a1);
	}

	::System::Void Method_1_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	::System::Void Method_1_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7E8C9D37CBB3C94(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_C618AD5E7AEAF928_METHOD_1_C7E8C9D37CBB3C94_OFFSET))(this, a1, a2);
	}
};
