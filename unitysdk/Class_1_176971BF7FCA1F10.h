#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }
namespace System { class String; }

#define CLASS_1_176971BF7FCA1F10_METHOD_1_5B6F4FA53B026029_OFFSET UNITYSDK_OFFSET(0x156BB890)
#define CLASS_1_176971BF7FCA1F10_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x156BB9C0)
#define CLASS_1_176971BF7FCA1F10_METHOD_1_DC3C77768424E516_OFFSET UNITYSDK_OFFSET(0x156BB840)
#define CLASS_1_176971BF7FCA1F10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156BB830)
#define CLASS_1_176971BF7FCA1F10__CTOR_OFFSET UNITYSDK_OFFSET(0x156BB7D0)

inline static constexpr unsigned int Class_1_176971BF7FCA1F10_TypeDefinitionIndex = 56707;

class Class_1_176971BF7FCA1F10 : public ::System::Object
{
public:
	::System::String* GGINDEBOODJ; // 0x10
	::RPG::GameCore::ComplexSkillAIFactorGroup* MOINFBGHNFO; // 0x18
	::System::Int32 NKEPLEIDNEP; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_176971BF7FCA1F10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::ComplexSkillAIFactorGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIFactorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_176971BF7FCA1F10__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC3C77768424E516(::RPG::GameCore::ComplexSkillAIFactorGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ComplexSkillAIFactorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_176971BF7FCA1F10_METHOD_1_DC3C77768424E516_OFFSET))(this, a1);
	}

	::RPG::GameCore::ComplexSkillAIFactorGroup* Method_1_5B6F4FA53B026029()
	{
		return ((::RPG::GameCore::ComplexSkillAIFactorGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_176971BF7FCA1F10_METHOD_1_5B6F4FA53B026029_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_176971BF7FCA1F10_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
