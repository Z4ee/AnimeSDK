#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISubType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_73D621BDD90E61A7;
class Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_70697F531F566942_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x17D4DE40)
#define CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x17D4DE90)
#define CLASS_1_70697F531F566942_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17D4DF50)

inline static constexpr unsigned int Class_1_70697F531F566942_1_TypeDefinitionIndex = 54599;

class Class_1_70697F531F566942_1 : public ::System::Object
{
public:
	::System::String* ALKLHOEJBBP; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x18
	::RPG::GameCore::GameEntity* EBGONEJCGFE; // 0x20
	::Class_1_73D621BDD90E61A7* PPJKAGKAGLL; // 0x28
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x30
	::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* BOIAANJCIMP; // 0x38
	::RPG::GameCore::FixPoint MMPDIJMEIPK; // 0x40
	::System::Int32 NIFIJJPBABD; // 0x48
	::RPG::GameCore::ComplexSkillAISubType EPFHBGNGBBK; // 0x4C
	::System::Int32 GNPIMBBICED; // 0x50
	::System::Boolean MDJBHMFHFIK; // 0x54
	::System::Boolean PJFJMCFEENM; // 0x55
	::System::Boolean COKALPNEEGN; // 0x56
	::System::Boolean BEFOILKMCCE; // 0x57
	::RPG::GameCore::FixPoint NPMACGNINKA; // 0x58

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
