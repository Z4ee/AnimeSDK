#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_BA25C773E88BA4BE;
class Class_2_A0580152EB393340;
class Class_2_F15F6264C4987650;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_20C279B49A195787_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13907E10)
#define CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x13908940)
#define CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x13908240)
#define CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x139080A0)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13908040)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13909550)
#define CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET UNITYSDK_OFFSET(0x139096E0)
#define CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x13909650)
#define CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13909430)
#define CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x139094D0)
#define CLASS_1_20C279B49A195787_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x13909A60)
#define CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x139095D0)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x139096A0)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139093D0)
#define CLASS_1_20C279B49A195787_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x13909A70)
#define CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET UNITYSDK_OFFSET(0x13909190)
#define CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x13907E50)
#define CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x139081F0)
#define CLASS_1_20C279B49A195787__CCTOR_OFFSET UNITYSDK_OFFSET(0x13909A90)
#define CLASS_1_20C279B49A195787__CTOR_OFFSET UNITYSDK_OFFSET(0x13907B70)

inline static constexpr unsigned int Class_1_20C279B49A195787_TypeDefinitionIndex = 60039;

class Class_1_20C279B49A195787 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0x13B00);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0x13B04);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0x13B08);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0x13B0C);
	}
	// static const ::System::Single Field_1_4; // 0x0
	::RPG::GameCore::CharacterModelComponent* Field_1_5; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_6; // 0x18
	::Class_1_3EB6D13BCFBCDBBC* Field_1_7; // 0x20
	::Class_2_F15F6264C4987650* Field_1_8; // 0x28
	::RPG::GameCore::CharacterModelComponent* Field_1_9; // 0x30
	::Class_2_A0580152EB393340* Field_1_10; // 0x38
	::RPG::GameCore::AdventureCharacterController* Field_1_11; // 0x40
	::Class_1_BA25C773E88BA4BE* Field_1_12; // 0x48
	::RPG::GameCore::GameEntity* Field_1_13; // 0x50
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_14; // 0x58
	::RPG::GameCore::GameEntity* Field_1_15; // 0x60
	::System::Single Field_1_16; // 0x68
	::System::Single Field_1_17; // 0x6C
	::UnityEngine::Vector3 Field_1_18; // 0x70
	::System::Single Field_1_19; // 0x7C
	::System::Boolean Field_1_20; // 0x80
	::System::Boolean Field_1_21; // 0x81
	::System::Single Field_1_22; // 0x84
	::RPG::GameCore::CharacterMotionFlag Field_1_23; // 0x88
	::UnityEngine::Vector3 Field_1_24; // 0x8C
	::System::Int32 Field_1_25; // 0x98
	::System::Int32 Field_1_26; // 0x9C
	::System::Single Field_1_27; // 0xA0
	::UnityEngine::Vector3 Field_1_28; // 0xA4

	::System::Void _ctor(::Class_1_3EB6D13BCFBCDBBC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EB6D13BCFBCDBBC*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A5DD54A2675889F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_96F674FB9A99092A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_5595F7B248936921(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F984B00E5903EAAE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
