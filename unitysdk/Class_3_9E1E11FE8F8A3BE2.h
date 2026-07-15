#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_9E1E11FE8F8A3BE2_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1B567630)
#define CLASS_3_9E1E11FE8F8A3BE2_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1B5675E0)
#define CLASS_3_9E1E11FE8F8A3BE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B567620)

inline static constexpr unsigned int Class_3_9E1E11FE8F8A3BE2_TypeDefinitionIndex = 23256;

class Class_3_9E1E11FE8F8A3BE2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E1E11FE8F8A3BE2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9E1E11FE8F8A3BE2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9E1E11FE8F8A3BE2*&))((::PBYTE)hIl2Cpp + CLASS_3_9E1E11FE8F8A3BE2_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9E1E11FE8F8A3BE2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9E1E11FE8F8A3BE2*))((::PBYTE)hIl2Cpp + CLASS_3_9E1E11FE8F8A3BE2_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
