#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_D95A52EE58A402D1;
class Class_2_751108DFDC405F93;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_20C279B49A195787_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AD9CD0)
#define CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x11ADA810)
#define CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x11ADA100)
#define CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11AD9F60)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x11AD9F00)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11ADB440)
#define CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET UNITYSDK_OFFSET(0x11ADB5D0)
#define CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x11ADB540)
#define CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11ADB310)
#define CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x11ADB3C0)
#define CLASS_1_20C279B49A195787_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x11ADB950)
#define CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11ADB4C0)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11ADB590)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11ADB2B0)
#define CLASS_1_20C279B49A195787_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x11ADB960)
#define CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET UNITYSDK_OFFSET(0x11ADB070)
#define CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x11AD9D10)
#define CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x11ADA0B0)
#define CLASS_1_20C279B49A195787__CCTOR_OFFSET UNITYSDK_OFFSET(0x11ADB980)
#define CLASS_1_20C279B49A195787__CTOR_OFFSET UNITYSDK_OFFSET(0x11AD99D0)

inline static constexpr unsigned int Class_1_20C279B49A195787_TypeDefinitionIndex = 59109;

class Class_1_20C279B49A195787 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xF450);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xF454);
	}
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xF458);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xF45C);
	}
	// static const ::System::Single Field_1_24; // 0x0
	::RPG::GameCore::TransformComponent* Field_1_6; // 0x10
	::Class_1_D95A52EE58A402D1* Field_1_12; // 0x18
	::RPG::GameCore::CharacterModelComponent* Field_1_11; // 0x20
	::RPG::GameCore::GameEntity* Field_1_1; // 0x28
	::Class_2_751108DFDC405F93* Field_1_9; // 0x30
	::RPG::GameCore::AdventureCharacterController* Field_1_7; // 0x38
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_13; // 0x40
	::RPG::GameCore::GameEntity* Field_1_0; // 0x48
	::Class_1_3EB6D13BCFBCDBBC* Field_1_2; // 0x50
	::RPG::GameCore::CharacterModelComponent* Field_1_10; // 0x58
	::Class_2_A0580152EB393340* Field_1_8; // 0x60
	::UnityEngine::Vector3 Field_1_15; // 0x68
	::System::Single Field_1_5; // 0x74
	::System::Single Field_1_21; // 0x78
	::System::Single Field_1_18; // 0x7C
	::System::Int32 Field_1_23; // 0x80
	::System::Single Field_1_22; // 0x84
	::System::Single Field_1_4; // 0x88
	::System::Boolean Field_1_19; // 0x8C
	::System::Boolean Field_1_20; // 0x8D
	::System::Int32 Field_1_3; // 0x90
	::UnityEngine::Vector3 Field_1_14; // 0x94
	::RPG::GameCore::CharacterMotionFlag Field_1_17; // 0xA0
	::UnityEngine::Vector3 Field_1_16; // 0xA4

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
