#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1165;
class Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_11;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5175A8A362457A24_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACC59C0)
#define CLASS_1_5175A8A362457A24_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xACC4C00)
#define CLASS_1_5175A8A362457A24_METHOD_1_D5526020BD3CD9F3_OFFSET UNITYSDK_OFFSET(0xACC5A60)
#define CLASS_1_5175A8A362457A24__CTOR_OFFSET UNITYSDK_OFFSET(0xACC4B60)

inline static constexpr unsigned int Class_1_5175A8A362457A24_TypeDefinitionIndex = 71890;

class Class_1_5175A8A362457A24 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_5175A8A362457A24_Class_3_50D343C44D28BEFB_11*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1165* Method_1_D5526020BD3CD9F3(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
	{
		return ((::Class_0_16E4307DCC419505_1165*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5175A8A362457A24_METHOD_1_D5526020BD3CD9F3_OFFSET))(this, a1);
	}
};
