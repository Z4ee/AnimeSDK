#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x15990E00)
#define CLASS_2_F9D2DAC0C372386C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15990C60)
#define CLASS_2_F9D2DAC0C372386C__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15990CC0)
#define CLASS_2_F9D2DAC0C372386C__CTOR_OFFSET UNITYSDK_OFFSET(0x15990C10)
#define CLASS_2_F9D2DAC0C372386C__RESOLVE_OFFSET UNITYSDK_OFFSET(0x15990CE0)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_TypeDefinitionIndex = 56526;

class Class_2_F9D2DAC0C372386C : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::ComplexSkillAIFactorGroup*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::ComplexSkillAIFactorGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIFactorGroup*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::ComplexSkillAIFactorGroup* _Resolve()
	{
		return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_UNRESOLVE_OFFSET))(this);
	}
};
