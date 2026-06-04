#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingGameInstance; }
namespace RPG::GameCore { class SwordTrainingEffectRow; }

#define CLASS_1_4B186D523BCFE76E_METHOD_1_7DAF841E8207A943_1_OFFSET UNITYSDK_OFFSET(0x144235F0)
#define CLASS_1_4B186D523BCFE76E_METHOD_1_7DAF841E8207A943_OFFSET UNITYSDK_OFFSET(0x14423550)
#define CLASS_1_4B186D523BCFE76E__CTOR_OFFSET UNITYSDK_OFFSET(0x14423510)

inline static constexpr unsigned int Class_1_4B186D523BCFE76E_TypeDefinitionIndex = 69899;

class Class_1_4B186D523BCFE76E : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::SwordTrainingEffectRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_4B186D523BCFE76E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DAF841E8207A943(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_4B186D523BCFE76E_METHOD_1_7DAF841E8207A943_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DAF841E8207A943_1(::RPG::Client::SwordTrainingGameInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + CLASS_1_4B186D523BCFE76E_METHOD_1_7DAF841E8207A943_1_OFFSET))(this, a1);
	}
};
