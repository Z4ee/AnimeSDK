#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1C30CE192ABE4C54;
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityCoolDown; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_1_CF649B030ECE0968__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40D070)

inline static constexpr unsigned int Class_1_CF649B030ECE0968_TypeDefinitionIndex = 41271;

class Class_1_CF649B030ECE0968 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* OLJCAJMFJPO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityCoolDown*>* BGBHAEAPIBP; // 0x18
	::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* FPNOGCIHKLG; // 0x20
	::Class_1_1C30CE192ABE4C54* KFKGOMIMNLD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NKCLBBFDEEI; // 0x30
	::System::Single FNHKOMIHOLF; // 0x38
	::System::Single IBMIMOHECGC; // 0x3C
	::System::Single GCCDIAODEJP; // 0x40
	::System::Single DICIDOOEMOK; // 0x44
	::System::Single HDBNIPDGIHC; // 0x48
	::System::Single MHJLHGDCANC; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF649B030ECE0968__CTOR_OFFSET))(this);
	}
};
