#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/DSEType.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/ECommonAITag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_43B0AF86156D9901;
class Class_1_43BD383C98B4C0C5_129;
class Class_1_95BA09BAE479F559;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62A2E0F90AA975E8_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x161044A0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_0AC78D53F16B918F_OFFSET UNITYSDK_OFFSET(0x16104730)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_0E83ADA30E768672_OFFSET UNITYSDK_OFFSET(0x16106AB0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_11768227A0CFD594_OFFSET UNITYSDK_OFFSET(0x16105C00)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_1AFCA07456061371_OFFSET UNITYSDK_OFFSET(0x161045E0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_2556464F28AE5FCF_OFFSET UNITYSDK_OFFSET(0x16105AD0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_2D42A8A66B0B5CAF_OFFSET UNITYSDK_OFFSET(0x161063D0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_32F2DC80B650E806_OFFSET UNITYSDK_OFFSET(0x16104EB0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_37B534E9A6B65F1A_OFFSET UNITYSDK_OFFSET(0x16106460)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_49B6599D43746EF3_OFFSET UNITYSDK_OFFSET(0x16104950)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_531140FAC24F7EF6_OFFSET UNITYSDK_OFFSET(0x161059C0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_614C06682C378630_OFFSET UNITYSDK_OFFSET(0x16104560)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_66A6628F04F693CC_OFFSET UNITYSDK_OFFSET(0x161062D0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_6DA3290167557807_OFFSET UNITYSDK_OFFSET(0x161060E0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_77F5BC9AE0C3DD4D_OFFSET UNITYSDK_OFFSET(0x161044C0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_89415EFAAE75F920_OFFSET UNITYSDK_OFFSET(0x16105CD0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_91B7658D0D051656_OFFSET UNITYSDK_OFFSET(0x16105E10)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_ACD491F2AA07DA8D_OFFSET UNITYSDK_OFFSET(0x16104670)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_BE8626E1B23D2428_OFFSET UNITYSDK_OFFSET(0x16106140)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_C09A6AA8583408E4_OFFSET UNITYSDK_OFFSET(0x16105360)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_C5BA28AF7D17FACF_OFFSET UNITYSDK_OFFSET(0x161052B0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_DAF7EC8DE73A1D3B_OFFSET UNITYSDK_OFFSET(0x16105F00)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_E93BBA5971C1824F_OFFSET UNITYSDK_OFFSET(0x16105FB0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_FA8637272DA77591_OFFSET UNITYSDK_OFFSET(0x16104B60)
#define CLASS_1_62A2E0F90AA975E8_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x161044B0)

inline static constexpr unsigned int Class_1_62A2E0F90AA975E8_TypeDefinitionIndex = 54557;

class Class_1_62A2E0F90AA975E8 : public ::System::Object
{
public:
	static ::Class_1_95BA09BAE479F559** StaticGet__GlobalVars_k__BackingField()
	{
		return (::Class_1_95BA09BAE479F559**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62A2E0F90AA975E8_TypeDefinitionIndex)->GetStaticField(0x15E80);
	}
	// static const ::System::Int32 PMIOOMFMFBH = 0x0; // 0x0
	// static const ::System::Int32 AOBBEFCCMHJ = 0x1; // 0x0
	// static const ::System::Int32 KILCGPPBJHK = 0x2; // 0x0
	// static const ::System::Int32 IHEJFHNLPNM = 0x3; // 0x0
	// static const ::System::Int32 MPIMBHHINHE = 0x4; // 0x0
	// static const ::System::Int32 MDBEPEMCLAD = 0x5; // 0x0
	// static const ::System::Int32 PODBKDOKDKM = 0x6; // 0x0
	// static const ::System::Int32 AENKPLMFCFJ = 0x7; // 0x0
	// static const ::System::Int32 HPBLFLNPPBL = 0x8; // 0x0
	// static const ::System::Int32 LGGAHHOMJKD = 0x9; // 0x0
	// static const ::System::Int32 PIADDIBHDAA = 0xA; // 0x0
	// static const ::System::Int32 HHKCFCAHJIB = 0xB; // 0x0
	// static const ::System::Int32 DHILAOHCCNI = 0xC; // 0x0
	// static const ::System::Int32 IEKPLLNKHKD = 0xD; // 0x0
	// static const ::System::Int32 JMGDJFMMFAN = 0xE; // 0x0
	// static const ::System::Int32 KPNAJIFLALI = 0xF; // 0x0
	// static const ::System::Int32 POKBBAOFAMP = 0x10; // 0x0
	// static const ::System::Int32 BEPPMHONHAN = 0x11; // 0x0
	// static const ::System::Int32 MFGGNNAKBKD = 0x12; // 0x0
	// static const ::System::Int32 PHHIMCGOLNE = 0x13; // 0x0
	// static const ::System::Int32 CGLCICDGKGB = 0x14; // 0x0

	static ::Class_1_95BA09BAE479F559* get_GlobalVars()
	{
		return ((::Class_1_95BA09BAE479F559*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_GET_GLOBALVARS_OFFSET))();
	}

	static ::System::Void set_GlobalVars(::Class_1_95BA09BAE479F559* a1)
	{
		return ((::System::Void(*)(::Class_1_95BA09BAE479F559*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_SET_GLOBALVARS_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_77F5BC9AE0C3DD4D(::Class_1_AC66714FF5876767* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Class_1_AC66714FF5876767*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_77F5BC9AE0C3DD4D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SkillConfig* Method_1_614C06682C378630(::Class_1_AC66714FF5876767* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::Class_1_AC66714FF5876767*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_614C06682C378630_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SkillData* Method_1_1AFCA07456061371(::Class_1_AC66714FF5876767* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::Class_1_AC66714FF5876767*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_1AFCA07456061371_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_ACD491F2AA07DA8D(::Class_1_AC66714FF5876767* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_1_AC66714FF5876767*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_ACD491F2AA07DA8D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_0AC78D53F16B918F(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_0AC78D53F16B918F_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_49B6599D43746EF3(::Class_1_AC66714FF5876767* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Class_1_AC66714FF5876767*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_49B6599D43746EF3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FA8637272DA77591(::Class_1_AC66714FF5876767* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_AC66714FF5876767*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_FA8637272DA77591_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntity* Method_1_32F2DC80B650E806(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::Class_1_43B0AF86156D9901* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_43B0AF86156D9901*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_32F2DC80B650E806_OFFSET))(a1, a2);
	}

	static ::Class_1_43BD383C98B4C0C5_129* Method_1_C5BA28AF7D17FACF(::RPG::GameCore::DSEType a1, ::RPG::GameCore::AIDecisionBaseConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_129*(*)(::RPG::GameCore::DSEType, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_C5BA28AF7D17FACF_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C09A6AA8583408E4(::RPG::GameCore::TransformComponent* a1, ::System::Single a2, ::RPG::MVector3& a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TransformComponent*, ::System::Single, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_C09A6AA8583408E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_531140FAC24F7EF6(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Single(*)(::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_531140FAC24F7EF6_OFFSET))(a1);
	}

	static ::System::Void Method_1_2556464F28AE5FCF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_2556464F28AE5FCF_OFFSET))(a1);
	}

	static ::RPG::GameCore::ECharacterNavSteerMode Method_1_11768227A0CFD594(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterMotionFlag a2)
	{
		return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_11768227A0CFD594_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_89415EFAAE75F920(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ECommonAITag a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_89415EFAAE75F920_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_91B7658D0D051656(::RPG::GameCore::ECommonAITag a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_91B7658D0D051656_OFFSET))(a1);
	}

	static ::RPG::GameCore::ECommonAITag Method_1_DAF7EC8DE73A1D3B(::System::String* a1)
	{
		return ((::RPG::GameCore::ECommonAITag(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_DAF7EC8DE73A1D3B_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_E93BBA5971C1824F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_E93BBA5971C1824F_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_6DA3290167557807(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_6DA3290167557807_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_BE8626E1B23D2428(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_BE8626E1B23D2428_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_66A6628F04F693CC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_66A6628F04F693CC_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2D42A8A66B0B5CAF(::RPG::GameCore::SkillData* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_2D42A8A66B0B5CAF_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_37B534E9A6B65F1A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_37B534E9A6B65F1A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0E83ADA30E768672(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_0E83ADA30E768672_OFFSET))(a1);
	}
};
