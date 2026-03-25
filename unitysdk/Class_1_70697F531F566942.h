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

#define CLASS_1_70697F531F566942_CLEAR_OFFSET UNITYSDK_OFFSET(0x11844680)
#define CLASS_1_70697F531F566942_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x118446D0)
#define CLASS_1_70697F531F566942__CTOR_OFFSET UNITYSDK_OFFSET(0x11844790)

inline static constexpr unsigned int Class_1_70697F531F566942_TypeDefinitionIndex = 43466;

class Class_1_70697F531F566942 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* Field_1_3; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::String* Field_1_10; // 0x28
	::Class_2_E1F0F77725E0ADF0_Class_1_2EAC2DB4DA0A99A1* Field_1_13; // 0x30
	::Class_1_73D621BDD90E61A7* Field_1_14; // 0x38
	::System::Boolean Field_1_8; // 0x40
	::System::Boolean Field_1_11; // 0x41
	::System::Boolean Field_1_5; // 0x42
	::System::Boolean Field_1_6; // 0x43
	::RPG::GameCore::ComplexSkillAISubType Field_1_0; // 0x44
	::RPG::GameCore::FixPoint Field_1_9; // 0x48
	::System::Int32 Field_1_1; // 0x50
	::System::Int32 Field_1_12; // 0x54
	::RPG::GameCore::FixPoint Field_1_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_70697F531F566942* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_70697F531F566942_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
