#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorUnionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_FCE4459AF91B41A6_METHOD_1_26673E92130292D2_OFFSET UNITYSDK_OFFSET(0x169B0A50)
#define CLASS_1_FCE4459AF91B41A6_METHOD_1_5E67BB9EA2A5221D_OFFSET UNITYSDK_OFFSET(0x169B0740)
#define CLASS_1_FCE4459AF91B41A6_METHOD_1_A2FBD3D90C76C316_OFFSET UNITYSDK_OFFSET(0x169B0800)
#define CLASS_1_FCE4459AF91B41A6_METHOD_1_E13125F0CEE0B38E_OFFSET UNITYSDK_OFFSET(0x169B06A0)
#define CLASS_1_FCE4459AF91B41A6_METHOD_1_E66D51F189A139B4_OFFSET UNITYSDK_OFFSET(0x169B08C0)
#define CLASS_1_FCE4459AF91B41A6__CTOR_OFFSET UNITYSDK_OFFSET(0x169B0B40)

inline static constexpr unsigned int Class_1_FCE4459AF91B41A6_TypeDefinitionIndex = 73438;

class Class_1_FCE4459AF91B41A6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_E13125F0CEE0B38E(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6_METHOD_1_E13125F0CEE0B38E_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_5E67BB9EA2A5221D(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*& a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6_METHOD_1_5E67BB9EA2A5221D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A2FBD3D90C76C316(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6_METHOD_1_A2FBD3D90C76C316_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E66D51F189A139B4(::Class_0_16E4307DCC419505_280* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_280*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6_METHOD_1_E66D51F189A139B4_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_26673E92130292D2(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_FCE4459AF91B41A6_METHOD_1_26673E92130292D2_OFFSET))(a1, a2);
	}
};
