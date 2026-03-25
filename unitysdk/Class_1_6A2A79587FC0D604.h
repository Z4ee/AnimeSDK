#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A2A79587FC0D604_METHOD_1_92C6D5BD32ADBDED_OFFSET UNITYSDK_OFFSET(0x99CF2A0)
#define CLASS_1_6A2A79587FC0D604_METHOD_1_A9F929263783B0A7_OFFSET UNITYSDK_OFFSET(0x99CEA50)
#define CLASS_1_6A2A79587FC0D604__CTOR_OFFSET UNITYSDK_OFFSET(0x99CF670)

inline static constexpr unsigned int Class_1_6A2A79587FC0D604_TypeDefinitionIndex = 54229;

class Class_1_6A2A79587FC0D604 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesSkill*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A2A79587FC0D604__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>* Method_1_A9F929263783B0A7()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkillPhase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A2A79587FC0D604_METHOD_1_A9F929263783B0A7_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>* Method_1_92C6D5BD32ADBDED(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesSkill*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A2A79587FC0D604_METHOD_1_92C6D5BD32ADBDED_OFFSET))(this, a1);
	}
};
