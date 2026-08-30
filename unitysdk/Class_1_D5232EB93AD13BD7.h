#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorIntersectConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D5232EB93AD13BD7_METHOD_1_21F0100E2EA40F0D_OFFSET UNITYSDK_OFFSET(0xD232DA0)
#define CLASS_1_D5232EB93AD13BD7_METHOD_1_86FFC10820A47ABE_OFFSET UNITYSDK_OFFSET(0xD232C40)
#define CLASS_1_D5232EB93AD13BD7_METHOD_1_CEAE3F09229296C3_OFFSET UNITYSDK_OFFSET(0xD232CE0)
#define CLASS_1_D5232EB93AD13BD7__CTOR_OFFSET UNITYSDK_OFFSET(0xD2330A0)

inline static constexpr unsigned int Class_1_D5232EB93AD13BD7_TypeDefinitionIndex = 76913;

class Class_1_D5232EB93AD13BD7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5232EB93AD13BD7__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_86FFC10820A47ABE(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D5232EB93AD13BD7_METHOD_1_86FFC10820A47ABE_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_CEAE3F09229296C3(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D5232EB93AD13BD7_METHOD_1_CEAE3F09229296C3_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_21F0100E2EA40F0D(::Class_0_16E4307DCC419505_255* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::Class_0_16E4307DCC419505_255*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D5232EB93AD13BD7_METHOD_1_21F0100E2EA40F0D_OFFSET))(a1, a2);
	}
};
