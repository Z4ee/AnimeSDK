#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/DSEType.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/ECommonAITag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_107;
class Class_1_827373C1CEDFE355;
class Class_1_95BA09BAE479F559;
class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62A2E0F90AA975E8_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x12AFE390)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_11768227A0CFD594_OFFSET UNITYSDK_OFFSET(0x12AFFD20)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_24690D0323B08392_OFFSET UNITYSDK_OFFSET(0x12AFED10)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_2556464F28AE5FCF_OFFSET UNITYSDK_OFFSET(0x12AFFBF0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_2AC78B4311008571_OFFSET UNITYSDK_OFFSET(0x12B00BD0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_49B6599D43746EF3_OFFSET UNITYSDK_OFFSET(0x12AFE7D0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_4C9D8AF9F38F7A68_OFFSET UNITYSDK_OFFSET(0x12AFE990)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_531140FAC24F7EF6_OFFSET UNITYSDK_OFFSET(0x12AFFAE0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_6DB76CB9F20F8E78_OFFSET UNITYSDK_OFFSET(0x12AFE670)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7349A519C9AB23D3_OFFSET UNITYSDK_OFFSET(0x12B00320)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7382C639C9605C7A_OFFSET UNITYSDK_OFFSET(0x12B00220)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_77F5BC9AE0C3DD4D_OFFSET UNITYSDK_OFFSET(0x12AFE3B0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7D004A0C5FE967A7_OFFSET UNITYSDK_OFFSET(0x12AFE4D0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7D3C4CC4CFAFA9C3_OFFSET UNITYSDK_OFFSET(0x12AFFDF0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7E6A5A2412A0D0CC_OFFSET UNITYSDK_OFFSET(0x12B00D00)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_7EB99032E8D95352_OFFSET UNITYSDK_OFFSET(0x12B006F0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_817C4B96A541BB5B_OFFSET UNITYSDK_OFFSET(0x12B01090)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_92FF771553017942_OFFSET UNITYSDK_OFFSET(0x12B00470)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_ACD491F2AA07DA8D_OFFSET UNITYSDK_OFFSET(0x12AFE5B0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_C09A6AA8583408E4_OFFSET UNITYSDK_OFFSET(0x12AFF480)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_C5BA28AF7D17FACF_OFFSET UNITYSDK_OFFSET(0x12AFF2A0)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_D5FFD309A8F5CD6E_OFFSET UNITYSDK_OFFSET(0x12AFE450)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_DAF7EC8DE73A1D3B_OFFSET UNITYSDK_OFFSET(0x12B00170)
#define CLASS_1_62A2E0F90AA975E8_METHOD_1_F3FD847AB17E2602_OFFSET UNITYSDK_OFFSET(0x12B000E0)
#define CLASS_1_62A2E0F90AA975E8_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x12AFE3A0)

inline static constexpr unsigned int Class_1_62A2E0F90AA975E8_TypeDefinitionIndex = 50124;

class Class_1_62A2E0F90AA975E8 : public ::System::Object
{
public:
	static ::Class_1_95BA09BAE479F559** StaticGet__GlobalVars_k__BackingField()
	{
		return (::Class_1_95BA09BAE479F559**)Il2CppClass::FromTypeDefinitionIndex(Class_1_62A2E0F90AA975E8_TypeDefinitionIndex)->GetStaticField(0x49570);
	}
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_10 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_11 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_12 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_13 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_14 = 0xE; // 0x0
	// static const ::System::Int32 Field_1_15 = 0xF; // 0x0
	// static const ::System::Int32 Field_1_16 = 0x10; // 0x0
	// static const ::System::Int32 Field_1_17 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_18 = 0x12; // 0x0
	// static const ::System::Int32 Field_1_19 = 0x13; // 0x0
	// static const ::System::Int32 Field_1_20 = 0x14; // 0x0

	static ::Class_1_95BA09BAE479F559* get_GlobalVars()
	{
		return ((::Class_1_95BA09BAE479F559*(*)())((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_GET_GLOBALVARS_OFFSET))();
	}

	static ::System::Void set_GlobalVars(::Class_1_95BA09BAE479F559* value)
	{
		return ((::System::Void(*)(::Class_1_95BA09BAE479F559*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_SET_GLOBALVARS_OFFSET))(value);
	}

	static ::System::Int32 Method_1_77F5BC9AE0C3DD4D(::Class_1_BD800F5B29A08E1F* a1, ::System::String* a2)
	{
		return ((::System::Int32(*)(::Class_1_BD800F5B29A08E1F*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_77F5BC9AE0C3DD4D_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SkillConfig* Method_1_D5FFD309A8F5CD6E(::Class_1_BD800F5B29A08E1F* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillConfig*(*)(::Class_1_BD800F5B29A08E1F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_D5FFD309A8F5CD6E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::SkillData* Method_1_7D004A0C5FE967A7(::Class_1_BD800F5B29A08E1F* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::SkillData*(*)(::Class_1_BD800F5B29A08E1F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7D004A0C5FE967A7_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_ACD491F2AA07DA8D(::Class_1_BD800F5B29A08E1F* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::Class_1_BD800F5B29A08E1F*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_ACD491F2AA07DA8D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_6DB76CB9F20F8E78(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_6DB76CB9F20F8E78_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_49B6599D43746EF3(::Class_1_BD800F5B29A08E1F* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::Class_1_BD800F5B29A08E1F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_49B6599D43746EF3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4C9D8AF9F38F7A68(::Class_1_BD800F5B29A08E1F* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_1_BD800F5B29A08E1F*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_4C9D8AF9F38F7A68_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntity* Method_1_24690D0323B08392(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::Class_1_827373C1CEDFE355* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::Class_1_827373C1CEDFE355*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_24690D0323B08392_OFFSET))(a1, a2);
	}

	static ::Class_1_43BD383C98B4C0C5_107* Method_1_C5BA28AF7D17FACF(::RPG::GameCore::DSEType a1, ::RPG::GameCore::AIDecisionBaseConfig* a2, ::RPG::GameCore::TaskContext* a3)
	{
		return ((::Class_1_43BD383C98B4C0C5_107*(*)(::RPG::GameCore::DSEType, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_C5BA28AF7D17FACF_OFFSET))(a1, a2, a3);
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

	static ::RPG::GameCore::FixPoint Method_1_7D3C4CC4CFAFA9C3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ECommonAITag a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7D3C4CC4CFAFA9C3_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_F3FD847AB17E2602(::RPG::GameCore::ECommonAITag a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_F3FD847AB17E2602_OFFSET))(a1);
	}

	static ::RPG::GameCore::ECommonAITag Method_1_DAF7EC8DE73A1D3B(::System::String* a1)
	{
		return ((::RPG::GameCore::ECommonAITag(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_DAF7EC8DE73A1D3B_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_7382C639C9605C7A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7382C639C9605C7A_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_7349A519C9AB23D3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7349A519C9AB23D3_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_92FF771553017942(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_92FF771553017942_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_7EB99032E8D95352(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7EB99032E8D95352_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_2AC78B4311008571(::RPG::GameCore::SkillData* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_2AC78B4311008571_OFFSET))(a1);
	}

	static ::RPG::GameCore::FixPoint Method_1_7E6A5A2412A0D0CC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_7E6A5A2412A0D0CC_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_817C4B96A541BB5B(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_62A2E0F90AA975E8_METHOD_1_817C4B96A541BB5B_OFFSET))(a1);
	}
};
