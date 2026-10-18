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

#define CLASS_1_70697F531F566942_1_CLEAR_OFFSET UNITYSDK_OFFSET(0xBFA7DA0)
#define CLASS_1_70697F531F566942_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xBFA7DF0)
#define CLASS_1_70697F531F566942_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBFA7EA0)

inline static constexpr unsigned int Class_1_70697F531F566942_1_TypeDefinitionIndex = 54385;

class Class_1_70697F531F566942_1 : public ::System::Object
{
public:
	::System::String* ALKLHOEJBBP; // 0x10
	::RPG::GameCore::GameEntity* EBGONEJCGFE; // 0x18
	::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	::Class_2_B078978DCA0CA7A4_Class_1_9D2500B7447E67F1* BOIAANJCIMP; // 0x28
	::Class_1_73D621BDD90E61A7* PPJKAGKAGLL; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MDFDDPNLEEA; // 0x38
	::System::Int32 GNPIMBBICED; // 0x40
	::System::Boolean COKALPNEEGN; // 0x44
	::System::Boolean BEFOILKMCCE; // 0x45
	::System::Boolean MDJBHMFHFIK; // 0x46
	::System::Boolean PJFJMCFEENM; // 0x47
	::RPG::GameCore::FixPoint NPMACGNINKA; // 0x48
	::RPG::GameCore::ComplexSkillAISubType EPFHBGNGBBK; // 0x50
	::System::Int32 NIFIJJPBABD; // 0x54
	::RPG::GameCore::FixPoint MMPDIJMEIPK; // 0x58

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
