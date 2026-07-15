#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_E6C4BA4C142021B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F2F140)
#define CLASS_1_E6C4BA4C142021B7_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x18F2F120)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x18F2EE30)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x18F2EB80)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_2E58B43123215F9C_OFFSET UNITYSDK_OFFSET(0x18F2DA60)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_1_OFFSET UNITYSDK_OFFSET(0x18F2ECF0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x18F2DD20)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x18F2FC70)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18F2F0D0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_41222BE43C0D6E56_OFFSET UNITYSDK_OFFSET(0x18F2EA00)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_1_OFFSET UNITYSDK_OFFSET(0x18F2ED90)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x18F2E7D0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_5757B3ADFA1F6ECF_OFFSET UNITYSDK_OFFSET(0x18F2F420)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0x18F2E030)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0x18F2E560)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x18F2DDC0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x18F2F200)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x18F2E110)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x18F2E870)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x18F2EAA0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x18F2F010)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x18F2EF50)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x18F2F280)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18F2FCC0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F2FC30)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0x18F2FD10)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18F303B0)
#define CLASS_1_E6C4BA4C142021B7_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0x18F2E950)
#define CLASS_1_E6C4BA4C142021B7_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x18F2F130)
#define CLASS_1_E6C4BA4C142021B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F303C0)
#define CLASS_1_E6C4BA4C142021B7__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2D9C0)

inline static constexpr unsigned int Class_1_E6C4BA4C142021B7_TypeDefinitionIndex = 50024;

class Class_1_E6C4BA4C142021B7 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E6C4BA4C142021B7_TypeDefinitionIndex)->GetStaticField(0xF7A0);
	}
	::Class_2_523C55AEA55804D8* Field_1_1; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_2; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_3; // 0x20
	::Class_2_A0580152EB393340* Field_1_4; // 0x28
	::RPG::GameCore::GameEntity* Field_1_5; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_1_6; // 0x38
	::RPG::GameCore::TransformComponent* Field_1_7; // 0x40
	::RPG::GameCore::GameEntity* Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::System::Boolean Field_1_11; // 0x55
	::System::Boolean Field_1_12; // 0x56
	::System::Single Field_1_13; // 0x58
	::RPG::GameCore::CharacterMotionFlag Field_1_14; // 0x5C
	::System::Boolean Field_1_15; // 0x60
	::System::Boolean Field_1_16; // 0x61
	::System::Boolean _InSpecialState_k__BackingField; // 0x62
	::System::Boolean Field_1_18; // 0x63
	::System::Single Field_1_19; // 0x64
	::System::Boolean Field_1_20; // 0x68
	::System::Boolean Field_1_21; // 0x69
	::RPG::GameCore::FollowState Field_1_22; // 0x6C
	::System::Single Field_1_23; // 0x70
	::System::Single Field_1_24; // 0x74
	::System::Single Field_1_25; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7__CCTOR_OFFSET))();
	}

	::System::Void Method_1_2E58B43123215F9C(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_2E58B43123215F9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_41222BE43C0D6E56(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_41222BE43C0D6E56_OFFSET))(this, a1);
	}

	::System::Void Method_1_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3B2051C60621D523_1_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_510C3C62CAC002C3_1_OFFSET))(this);
	}

	::System::Void Method_1_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_022B0D58A3077BF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_71456C0B214E6DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_71456C0B214E6DAC_OFFSET))(this);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_8F6A1B72899F4EA4_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_InSpecialState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_GET_INSPECIALSTATE_OFFSET))(this);
	}

	::System::Void set_InSpecialState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_SET_INSPECIALSTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5757B3ADFA1F6ECF(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_5757B3ADFA1F6ECF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_CEDFBBF689E64233(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_CEDFBBF689E64233_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6C4BA4C142021B7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
