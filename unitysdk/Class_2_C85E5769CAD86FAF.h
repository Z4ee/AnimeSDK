#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_2_C85E5769CAD86FAF_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xBE2A3E0)
#define CLASS_2_C85E5769CAD86FAF_SET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xBE2A3F0)
#define CLASS_2_C85E5769CAD86FAF_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0xBE2A390)
#define CLASS_2_C85E5769CAD86FAF__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBE2A1B0)
#define CLASS_2_C85E5769CAD86FAF__CTOR_2_OFFSET UNITYSDK_OFFSET(0xBE2A210)
#define CLASS_2_C85E5769CAD86FAF__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2A160)
#define CLASS_2_C85E5769CAD86FAF__RESOLVE_OFFSET UNITYSDK_OFFSET(0xBE2A230)

inline static constexpr unsigned int Class_2_C85E5769CAD86FAF_TypeDefinitionIndex = 56520;

class Class_2_C85E5769CAD86FAF : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::TurnBasedModifierConfig*>
{
public:
	::Il2CppArray<::System::String*>* _Dependency_k__BackingField; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedModifierConfig* _Resolve()
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF_UNRESOLVE_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* get_Dependency()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF_GET_DEPENDENCY_OFFSET))(this);
	}

	::System::Void set_Dependency(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C85E5769CAD86FAF_SET_DEPENDENCY_OFFSET))(this, a1);
	}
};
