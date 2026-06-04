#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DACE4D21D4FC5F48;
class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class AssemNPC; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class LevelCrowdMemberBakedInfo; }
namespace RPG::GameCore { class LevelCrowdMemberInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B4575D4416857720_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA5D4A70)
#define CLASS_1_B4575D4416857720_METHOD_1_032AAF1CA9C9CE58_OFFSET UNITYSDK_OFFSET(0xA5D6FD0)
#define CLASS_1_B4575D4416857720_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0xA5D5ED0)
#define CLASS_1_B4575D4416857720_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA5D4A90)
#define CLASS_1_B4575D4416857720_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA5D7950)
#define CLASS_1_B4575D4416857720_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xA5D6F70)
#define CLASS_1_B4575D4416857720_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xA5D4AD0)
#define CLASS_1_B4575D4416857720_METHOD_1_336547DCD124E72C_OFFSET UNITYSDK_OFFSET(0xA5D58D0)
#define CLASS_1_B4575D4416857720_METHOD_1_3D3BE5657B306B8B_OFFSET UNITYSDK_OFFSET(0xA5D62C0)
#define CLASS_1_B4575D4416857720_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0xA5D6090)
#define CLASS_1_B4575D4416857720_METHOD_1_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xA5D73C0)
#define CLASS_1_B4575D4416857720_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xA5D6960)
#define CLASS_1_B4575D4416857720_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xA5D5540)
#define CLASS_1_B4575D4416857720_METHOD_1_6FD97A9395ABD2C7_OFFSET UNITYSDK_OFFSET(0xA5D5060)
#define CLASS_1_B4575D4416857720_METHOD_1_79AFB9815B5E6F97_OFFSET UNITYSDK_OFFSET(0xA5D63F0)
#define CLASS_1_B4575D4416857720_METHOD_1_7AD83F95F2B1071C_OFFSET UNITYSDK_OFFSET(0xA5D67E0)
#define CLASS_1_B4575D4416857720_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA5D5790)
#define CLASS_1_B4575D4416857720_METHOD_1_A1ADC999CFACEB89_1_OFFSET UNITYSDK_OFFSET(0xA5D5FA0)
#define CLASS_1_B4575D4416857720_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xA5D5800)
#define CLASS_1_B4575D4416857720_METHOD_1_A52062643A2DBAD8_OFFSET UNITYSDK_OFFSET(0xA5D65F0)
#define CLASS_1_B4575D4416857720_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA5D61B0)
#define CLASS_1_B4575D4416857720_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xA5D4A60)
#define CLASS_1_B4575D4416857720_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA5D56E0)
#define CLASS_1_B4575D4416857720_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xA5D4DD0)
#define CLASS_1_B4575D4416857720_METHOD_1_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0xA5D5660)
#define CLASS_1_B4575D4416857720_METHOD_1_C710CD5E05DACF48_OFFSET UNITYSDK_OFFSET(0xA5D6560)
#define CLASS_1_B4575D4416857720_METHOD_1_CB22CB86B1EB91A3_OFFSET UNITYSDK_OFFSET(0xA5D5240)
#define CLASS_1_B4575D4416857720_METHOD_1_D3E6856A33FE128F_OFFSET UNITYSDK_OFFSET(0xA5D6250)
#define CLASS_1_B4575D4416857720_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0xA5D4AC0)
#define CLASS_1_B4575D4416857720_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA5D4AB0)
#define CLASS_1_B4575D4416857720_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xA5D6390)
#define CLASS_1_B4575D4416857720_SET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA5D4A80)
#define CLASS_1_B4575D4416857720__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D4AE0)
#define CLASS_1_B4575D4416857720__UNLOADENTITY_B__32_0_OFFSET UNITYSDK_OFFSET(0xA5D79F0)

inline static constexpr unsigned int Class_1_B4575D4416857720_TypeDefinitionIndex = 64743;

class Class_1_B4575D4416857720 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::UnityEngine::CapsuleCollider* Field_1_1; // 0x10
	::RPG::GameCore::LevelCrowdMemberBakedInfo* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_3; // 0x20
	::RPG::GameCore::FreeStyleComponent* Field_1_4; // 0x28
	::RPG::GameCore::GameEntity* Field_1_5; // 0x30
	::RPG::GameCore::LevelCrowdInfo* Field_1_6; // 0x38
	::Il2CppArray<::UnityEngine::CapsuleCollider*>* Field_1_7; // 0x40
	::RPG::Client::AssemNPC* Field_1_8; // 0x48
	::RPG::GameCore::TransformComponent* Field_1_9; // 0x50
	::RPG::GameCore::LevelCrowdMemberInfo* Field_1_10; // 0x58
	::Class_2_36A4EB0E077FE274* Field_1_11; // 0x60
	::System::String* _UniqueName_k__BackingField; // 0x68
	::Class_1_DACE4D21D4FC5F48* Field_1_13; // 0x70
	::UnityEngine::Quaternion Field_1_14; // 0x78
	::System::UInt32 Field_1_15; // 0x88
	::System::Boolean Field_1_16; // 0x8C
	::System::Boolean Field_1_17; // 0x8D
	::UnityEngine::Vector3 Field_1_18; // 0x90
	::System::Boolean Field_1_19; // 0x9C
	::System::Boolean Field_1_20; // 0x9D
	::System::Boolean Field_1_21; // 0x9E
	::System::Boolean Field_1_22; // 0x9F
	::UnityEngine::Bounds Field_1_23; // 0xA0

	::System::Void _ctor(::Class_1_DACE4D21D4FC5F48* a1, ::RPG::GameCore::LevelCrowdInfo* a2, ::RPG::GameCore::LevelCrowdMemberInfo* a3, ::RPG::GameCore::LevelCrowdMemberBakedInfo* a4, ::RPG::Client::AssemNPC* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DACE4D21D4FC5F48*, ::RPG::GameCore::LevelCrowdInfo*, ::RPG::GameCore::LevelCrowdMemberInfo*, ::RPG::GameCore::LevelCrowdMemberBakedInfo*, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Void set_UniqueName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_SET_UNIQUENAME_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_1_DACE4D21D4FC5F48* Method_1_24748FC20F375725()
	{
		return ((::Class_1_DACE4D21D4FC5F48*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_6FD97A9395ABD2C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_6FD97A9395ABD2C7_OFFSET))(this);
	}

	::System::Void Method_1_CB22CB86B1EB91A3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_CB22CB86B1EB91A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_1_C436A2848092EB88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_C436A2848092EB88_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_A1ADC999CFACEB89_1_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_336547DCD124E72C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_336547DCD124E72C_OFFSET))(this);
	}

	::System::Void Method_1_3D3BE5657B306B8B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_3D3BE5657B306B8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_79AFB9815B5E6F97(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_79AFB9815B5E6F97_OFFSET))(this, a1);
	}

	::System::Void Method_1_C710CD5E05DACF48(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_C710CD5E05DACF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_A52062643A2DBAD8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_A52062643A2DBAD8_OFFSET))(this, a1);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean Method_1_7AD83F95F2B1071C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_7AD83F95F2B1071C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_032AAF1CA9C9CE58(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_032AAF1CA9C9CE58_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3E6856A33FE128F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_D3E6856A33FE128F_OFFSET))(this, a1);
	}

	::System::Void Method_1_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _UnLoadEntity_b__32_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4575D4416857720__UNLOADENTITY_B__32_0_OFFSET))(this);
	}
};
