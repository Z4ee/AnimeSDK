#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73D621BDD90E61A7;
class Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xACDDCC0)
#define CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xACDDD10)
#define CLASS_1_70697F531F566942_1__CTOR_OFFSET UNITYSDK_OFFSET(0xACDDDD0)

inline static constexpr unsigned int Class_1_70697F531F566942_1_TypeDefinitionIndex = 50830;

class Class_1_70697F531F566942_1 : public ::System::Object
{
public:
	::Class_2_074660E1B46C96C1_Class_1_9D2500B7447E67F1* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_1_73D621BDD90E61A7* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x30
	::RPG::GameCore::GameEntity* Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::ComplexSkillAISubType Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x4C
	::System::Boolean Field_1_9; // 0x4D
	::System::Boolean Field_1_10; // 0x4E
	::System::Boolean Field_1_11; // 0x4F
	::System::Int32 Field_1_12; // 0x50
	::System::Int32 Field_1_13; // 0x54
	::RPG::GameCore::FixPoint Field_1_14; // 0x58

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
