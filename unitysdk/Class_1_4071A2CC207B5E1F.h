#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System { class String; }

#define CLASS_1_4071A2CC207B5E1F_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xAC1F770)
#define CLASS_1_4071A2CC207B5E1F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC1F6D0)
#define CLASS_1_4071A2CC207B5E1F_METHOD_1_E2E1E267B00F9A3A_OFFSET UNITYSDK_OFFSET(0xAC1F720)
#define CLASS_1_4071A2CC207B5E1F_METHOD_1_F982AFC8B115D594_OFFSET UNITYSDK_OFFSET(0xAC1F570)
#define CLASS_1_4071A2CC207B5E1F__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAC1F560)
#define CLASS_1_4071A2CC207B5E1F__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1F500)

inline static constexpr unsigned int Class_1_4071A2CC207B5E1F_TypeDefinitionIndex = 52770;

class Class_1_4071A2CC207B5E1F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedAbilityConfig* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TurnBasedAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedAbilityConfig* Method_1_F982AFC8B115D594()
	{
		return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F_METHOD_1_F982AFC8B115D594_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E2E1E267B00F9A3A(::RPG::GameCore::TurnBasedAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F_METHOD_1_E2E1E267B00F9A3A_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4071A2CC207B5E1F_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
