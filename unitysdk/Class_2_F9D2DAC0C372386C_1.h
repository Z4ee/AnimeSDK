#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xBEF9B90)
#define CLASS_2_F9D2DAC0C372386C_1_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0xBEF9B40)
#define CLASS_2_F9D2DAC0C372386C_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBEF9970)
#define CLASS_2_F9D2DAC0C372386C_1__CTOR_2_OFFSET UNITYSDK_OFFSET(0xBEF99D0)
#define CLASS_2_F9D2DAC0C372386C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF9920)
#define CLASS_2_F9D2DAC0C372386C_1__RESOLVE_OFFSET UNITYSDK_OFFSET(0xBEF99F0)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_1_TypeDefinitionIndex = 56521;

class Class_2_F9D2DAC0C372386C_1 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::TurnBasedAbilityConfig*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::TurnBasedAbilityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedAbilityConfig* _Resolve()
	{
		return ((::RPG::GameCore::TurnBasedAbilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1_UNRESOLVE_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
