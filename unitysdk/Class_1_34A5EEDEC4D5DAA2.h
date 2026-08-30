#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TriggerPerformanceMask; }
namespace System { class String; }

#define CLASS_1_34A5EEDEC4D5DAA2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A65730)

inline static constexpr unsigned int Class_1_34A5EEDEC4D5DAA2_TypeDefinitionIndex = 62101;

class Class_1_34A5EEDEC4D5DAA2 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* AKMPDOOGAFJ; // 0x10
	::System::String* JFABDOKNDBI; // 0x18
	::RPG::GameCore::TriggerPerformanceMask* HGHDDOHMDCD; // 0x20
	::RPG::GameCore::ELevelPerformanceType DNGFHOEACBI; // 0x28
	::System::UInt32 GMKMJEMFPMM; // 0x2C
	::System::UInt32 EAFODJMALIP; // 0x30
	::System::UInt32 JLOJAFPOEDI; // 0x34
	::System::UInt32 HJDJCKJCAKH; // 0x38
	::System::UInt32 DAGNPMDMCIN; // 0x3C
	::System::UInt32 CFDCEEMIOCO; // 0x40
	::System::UInt32 HGECONBFCML; // 0x44
	::System::UInt32 PIEBDEMEOPL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34A5EEDEC4D5DAA2__CTOR_OFFSET))(this);
	}
};
