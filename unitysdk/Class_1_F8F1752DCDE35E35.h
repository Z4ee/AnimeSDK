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

#define CLASS_1_F8F1752DCDE35E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA610070)
#define CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xA610050)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_1806079A447FCB36_OFFSET UNITYSDK_OFFSET(0xA60ECD0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_1DDD10252C795DC3_1_OFFSET UNITYSDK_OFFSET(0xA60F6B0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0xA60EFC0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA60FC40)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3B2051C60621D523_1_OFFSET UNITYSDK_OFFSET(0xA60FD50)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xA60EF20)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xA610B40)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA610000)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_41222BE43C0D6E56_OFFSET UNITYSDK_OFFSET(0xA60FB20)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5757B3ADFA1F6ECF_OFFSET UNITYSDK_OFFSET(0xA6102F0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_6B4A3A1B5816B81E_OFFSET UNITYSDK_OFFSET(0xA60F200)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xA6100D0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xA60FFA0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA60FF40)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xA60F2E0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xA60FE90)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA60FBC0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_B036E5806AE655F4_OFFSET UNITYSDK_OFFSET(0xA60F990)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0xA610150)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA610B90)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA610B00)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0xA610BE0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA611280)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_1_OFFSET UNITYSDK_OFFSET(0xA60FA70)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_2_OFFSET UNITYSDK_OFFSET(0xA60FDF0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xA60F8F0)
#define CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xA610060)
#define CLASS_1_F8F1752DCDE35E35__CCTOR_OFFSET UNITYSDK_OFFSET(0xA611290)
#define CLASS_1_F8F1752DCDE35E35__CTOR_OFFSET UNITYSDK_OFFSET(0xA60EC30)

inline static constexpr unsigned int Class_1_F8F1752DCDE35E35_TypeDefinitionIndex = 49011;

class Class_1_F8F1752DCDE35E35 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8F1752DCDE35E35_TypeDefinitionIndex)->GetStaticField(0x13E30);
	}
	::RPG::GameCore::AdventureCharacterController* Field_1_1; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x28
	::RPG::GameCore::TransformComponent* Field_1_5; // 0x30
	::Class_2_A0580152EB393340* Field_1_6; // 0x38
	::RPG::GameCore::GameEntity* Field_1_7; // 0x40
	::Class_2_523C55AEA55804D8* Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x50
	::RPG::GameCore::CharacterMotionFlag Field_1_10; // 0x54
	::RPG::GameCore::FollowState Field_1_11; // 0x58
	::System::Single Field_1_12; // 0x5C
	::System::Single Field_1_13; // 0x60
	::System::Single Field_1_14; // 0x64
	::System::Boolean Field_1_15; // 0x68
	::System::Boolean Field_1_16; // 0x69
	::System::Boolean Field_1_17; // 0x6A
	::System::Boolean Field_1_18; // 0x6B
	::System::Single Field_1_19; // 0x6C
	::System::Boolean Field_1_20; // 0x70
	::System::Boolean Field_1_21; // 0x71
	::System::Boolean Field_1_22; // 0x72
	::System::Boolean Field_1_23; // 0x73
	::System::Boolean _InSpecialState_k__BackingField; // 0x74
	::System::Single Field_1_25; // 0x78

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1806079A447FCB36(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_1806079A447FCB36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3B2051C60621D523_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_OFFSET))(this);
	}

	::System::Void Method_1_41222BE43C0D6E56(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_41222BE43C0D6E56_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_1_OFFSET))(this);
	}

	::System::Void Method_1_3B2051C60621D523_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3B2051C60621D523_1_OFFSET))(this);
	}

	::System::Void Method_1_F944CC0CE8B3E57A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_F944CC0CE8B3E57A_2_OFFSET))(this);
	}

	::System::Void Method_1_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1DDD10252C795DC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_1DDD10252C795DC3_OFFSET))(this);
	}

	::System::Void Method_1_1DDD10252C795DC3_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_1DDD10252C795DC3_1_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B4A3A1B5816B81E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_6B4A3A1B5816B81E_OFFSET))(this);
	}

	::System::Void Method_1_B036E5806AE655F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_B036E5806AE655F4_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_InSpecialState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET))(this);
	}

	::System::Void set_InSpecialState(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5757B3ADFA1F6ECF(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5757B3ADFA1F6ECF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_CEDFBBF689E64233(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CEDFBBF689E64233_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
