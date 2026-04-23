#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73D621BDD90E61A7;
class Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x975D3B0)
#define CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x975D400)
#define CLASS_1_70697F531F566942_1__CTOR_OFFSET UNITYSDK_OFFSET(0x975D4C0)

inline static constexpr unsigned int Class_1_70697F531F566942_1_TypeDefinitionIndex = 50163;

class Class_1_70697F531F566942_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x10
	::System::String* Field_1_10; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Field_1_13; // 0x28
	::Class_1_73D621BDD90E61A7* Field_1_14; // 0x30
	::RPG::GameCore::GameEntity* Field_1_2; // 0x38
	::System::Int32 Field_1_1; // 0x40
	::RPG::GameCore::ComplexSkillAISubType Field_1_0; // 0x44
	::RPG::GameCore::FixPoint Field_1_9; // 0x48
	::System::Boolean Field_1_6; // 0x50
	::System::Boolean Field_1_5; // 0x51
	::System::Boolean Field_1_11; // 0x52
	::System::Boolean Field_1_8; // 0x53
	::System::Int32 Field_1_12; // 0x54
	::RPG::GameCore::FixPoint Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942_1*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
