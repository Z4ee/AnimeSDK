#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorExcludeConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_162EB72A663718C6_OFFSET UNITYSDK_OFFSET(0x149B3000)
#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_1DFF066DC0845ED7_OFFSET UNITYSDK_OFFSET(0x149B30C0)
#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_26673E92130292D2_OFFSET UNITYSDK_OFFSET(0x149B3160)
#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_B7721EE06037E961_OFFSET UNITYSDK_OFFSET(0x149B33F0)
#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_E52E8B4220036889_OFFSET UNITYSDK_OFFSET(0x149B3250)
#define CLASS_1_1E31BCB6D5AA211D_METHOD_1_E650B8F0DC9FA008_OFFSET UNITYSDK_OFFSET(0x149B2DE0)
#define CLASS_1_1E31BCB6D5AA211D__CTOR_OFFSET UNITYSDK_OFFSET(0x149B34E0)

inline static constexpr unsigned int Class_1_1E31BCB6D5AA211D_TypeDefinitionIndex = 73432;

class Class_1_1E31BCB6D5AA211D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_E650B8F0DC9FA008(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_E650B8F0DC9FA008_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_162EB72A663718C6(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_162EB72A663718C6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_1DFF066DC0845ED7(::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_1DFF066DC0845ED7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E52E8B4220036889(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_E52E8B4220036889_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_26673E92130292D2(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_26673E92130292D2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B7721EE06037E961(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_1E31BCB6D5AA211D_METHOD_1_B7721EE06037E961_OFFSET))(a1, a2);
	}
};
