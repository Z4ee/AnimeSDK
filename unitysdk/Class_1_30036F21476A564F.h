#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1338;
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_30036F21476A564F_METHOD_1_4F5E0DF84F756FD9_OFFSET UNITYSDK_OFFSET(0x18CE5EE0)
#define CLASS_1_30036F21476A564F_METHOD_1_DAEF76F7D475AC40_OFFSET UNITYSDK_OFFSET(0x18CE59F0)
#define CLASS_1_30036F21476A564F__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE6220)

inline static constexpr unsigned int Class_1_30036F21476A564F_TypeDefinitionIndex = 78918;

class Class_1_30036F21476A564F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30036F21476A564F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DAEF76F7D475AC40(::Class_0_16E4307DCC419505_1338* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_30036F21476A564F_METHOD_1_DAEF76F7D475AC40_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4F5E0DF84F756FD9(::Class_0_16E4307DCC419505_1338* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::RPG::GameCore::LittleGameAbilityAttributeType a3, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1338*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::RPG::GameCore::LittleGameAbilityAttributeType, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_30036F21476A564F_METHOD_1_4F5E0DF84F756FD9_OFFSET))(this, a1, a2, a3, a4);
	}
};
