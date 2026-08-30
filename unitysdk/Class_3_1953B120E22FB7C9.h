#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_1953B120E22FB7C9_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D5C7380)
#define CLASS_3_1953B120E22FB7C9_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1D5C7340)
#define CLASS_3_1953B120E22FB7C9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7370)

inline static constexpr unsigned int Class_3_1953B120E22FB7C9_TypeDefinitionIndex = 22458;

class Class_3_1953B120E22FB7C9 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* IPOJMHGKIEH; // 0x18
	::RPG::GameCore::ControlSkillType GFNJJEFJKPD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1953B120E22FB7C9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1953B120E22FB7C9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1953B120E22FB7C9*&))((::PBYTE)hIl2Cpp + CLASS_3_1953B120E22FB7C9_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1953B120E22FB7C9* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1953B120E22FB7C9*))((::PBYTE)hIl2Cpp + CLASS_3_1953B120E22FB7C9_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
