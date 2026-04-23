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

#define CLASS_1_F8F1752DCDE35E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE6564D0)
#define CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xE6564B0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_0BC5386E06CF8A2C_OFFSET UNITYSDK_OFFSET(0xE6558E0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0xE655D70)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_1806079A447FCB36_OFFSET UNITYSDK_OFFSET(0xE655630)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xE656110)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0xE656F40)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xE655A50)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE656460)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_41222BE43C0D6E56_OFFSET UNITYSDK_OFFSET(0xE655FF0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0xE655EB0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xE655F50)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5757B3ADFA1F6ECF_OFFSET UNITYSDK_OFFSET(0xE656730)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_1_OFFSET UNITYSDK_OFFSET(0xE656210)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_2_OFFSET UNITYSDK_OFFSET(0xE6559B0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xE655870)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0xE656530)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xE656400)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xE6563A0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_1_OFFSET UNITYSDK_OFFSET(0xE656280)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0xE655E40)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xE6562F0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xE656090)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0xE6565B0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE656F90)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE656F00)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0xE656FE0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE657690)
#define CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xE6564C0)
#define CLASS_1_F8F1752DCDE35E35__CCTOR_OFFSET UNITYSDK_OFFSET(0xE6576A0)
#define CLASS_1_F8F1752DCDE35E35__CTOR_OFFSET UNITYSDK_OFFSET(0xE655590)

inline static constexpr unsigned int Class_1_F8F1752DCDE35E35_TypeDefinitionIndex = 48385;

class Class_1_F8F1752DCDE35E35 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8F1752DCDE35E35_TypeDefinitionIndex)->GetStaticField(0x34C0);
	}
	::RPG::GameCore::GameEntity* Field_1_11; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_12; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_14; // 0x20
	::RPG::GameCore::GameEntity* Field_1_16; // 0x28
	::RPG::GameCore::AdventureCharacterController* Field_1_18; // 0x30
	::Class_2_A0580152EB393340* Field_1_13; // 0x38
	::Class_2_523C55AEA55804D8* Field_1_15; // 0x40
	::RPG::GameCore::TransformComponent* Field_1_17; // 0x48
	::System::Single Field_1_7; // 0x50
	::System::Boolean Field_1_20; // 0x54
	::System::Boolean Field_1_5; // 0x55
	::System::Boolean Field_1_24; // 0x56
	::System::Boolean Field_1_9; // 0x57
	::System::Boolean Field_1_23; // 0x58
	::System::Single Field_1_8; // 0x5C
	::System::Single Field_1_4; // 0x60
	::RPG::GameCore::CharacterMotionFlag Field_1_21; // 0x64
	::System::Single Field_1_3; // 0x68
	::System::Boolean _InSpecialState_k__BackingField; // 0x6C
	::System::Boolean Field_1_6; // 0x6D
	::System::Boolean Field_1_1; // 0x6E
	::System::Boolean Field_1_25; // 0x6F
	::System::Single Field_1_2; // 0x70
	::RPG::GameCore::FollowState Field_1_19; // 0x74
	::System::Single Field_1_22; // 0x78

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

	::System::Void Method_1_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_OFFSET))(this);
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

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_1_OFFSET))(this);
	}

	::System::Void Method_1_82E78E5C348471FD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_1_OFFSET))(this);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BC5386E06CF8A2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_0BC5386E06CF8A2C_OFFSET))(this);
	}

	::System::Void Method_1_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD578FCE9CF19D4_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_2_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_InSpecialState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET))(this);
	}

	::System::Void set_InSpecialState(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET))(this, value);
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
