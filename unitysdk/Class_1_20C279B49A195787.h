#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_BA25C773E88BA4BE;
class Class_2_00007E9796694121;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_20C279B49A195787_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F2ABA0)
#define CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x18F2B6E0)
#define CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x18F2AFE0)
#define CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18F2AE40)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18F2ADE0)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18F2C2F0)
#define CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET UNITYSDK_OFFSET(0x18F2C470)
#define CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x18F2C3E0)
#define CLASS_1_20C279B49A195787_METHOD_1_614288621F812149_OFFSET UNITYSDK_OFFSET(0x18F2C800)
#define CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F2C1D0)
#define CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x18F2C270)
#define CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x18F2C370)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18F2C430)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F2C170)
#define CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET UNITYSDK_OFFSET(0x18F2BF30)
#define CLASS_1_20C279B49A195787_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x18F2C840)
#define CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x18F2ABE0)
#define CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x18F2AF90)
#define CLASS_1_20C279B49A195787__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F2C8A0)
#define CLASS_1_20C279B49A195787__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2A920)

inline static constexpr unsigned int Class_1_20C279B49A195787_TypeDefinitionIndex = 64305;

class Class_1_20C279B49A195787 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_BHNIHEMCEIN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xCF30);
	}
	static ::System::Int32* StaticGet_IFLNJLFCHOM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xCF34);
	}
	static ::System::Int32* StaticGet_KNAJNCAJONK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xCF38);
	}
	static ::System::Int32* StaticGet_BODAIEJJDLI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xCF3C);
	}
	// static const ::System::Single NCGJNLDBCNJ; // 0x0
	::Class_2_A0580152EB393340* JFMDCAIDMHJ; // 0x10
	::Class_2_00007E9796694121* BILCDPGDIGM; // 0x18
	::RPG::GameCore::CharacterModelComponent* LBNNBDGEPBN; // 0x20
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x28
	::RPG::GameCore::CharacterModelComponent* FFPNKJOPAIL; // 0x30
	::Class_1_BA25C773E88BA4BE* GBLEMMBAAOK; // 0x38
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x40
	::Class_1_3EB6D13BCFBCDBBC* MHAEBFAEFCG; // 0x48
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x50
	::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x58
	::RPG::GameCore::GameEntity* KIHMIJNKGFD; // 0x60
	::System::Int32 HAKEBJOFIGO; // 0x68
	::System::Single MDFMHJPFAKE; // 0x6C
	::UnityEngine::Vector3 BEDPGAOCOHG; // 0x70
	::System::Single NGAEMPHCOAI; // 0x7C
	::UnityEngine::Vector3 BGJECKILABB; // 0x80
	::UnityEngine::Vector3 CNNEIOBCINA; // 0x8C
	::System::Single CMHDFEJAFHG; // 0x98
	::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x9C
	::System::Single BPLPMMOBBHJ; // 0xA0
	::System::Single FHGBIJOBOFD; // 0xA4
	::System::Boolean LCMGMEJNIAP; // 0xA8
	::System::Boolean OMKOFBEPCAB; // 0xA9
	::System::Int32 BIHNCOMDMEC; // 0xAC

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

	::RPG::GameCore::GameEntity* Method_1_614288621F812149()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_614288621F812149_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_FA662896843C137A_OFFSET))(this);
	}
};
