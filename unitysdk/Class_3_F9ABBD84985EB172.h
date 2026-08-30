#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_F9ABBD84985EB172_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1C8C73C0)
#define CLASS_3_F9ABBD84985EB172_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1C8C7380)
#define CLASS_3_F9ABBD84985EB172__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C73B0)

inline static constexpr unsigned int Class_3_F9ABBD84985EB172_TypeDefinitionIndex = 23876;

class Class_3_F9ABBD84985EB172 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* EFPGDCJCLBL; // 0x18
	::RPG::GameCore::TeamType HJJKMPOCPOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9ABBD84985EB172__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F9ABBD84985EB172*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F9ABBD84985EB172*&))((::PBYTE)hIl2Cpp + CLASS_3_F9ABBD84985EB172_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F9ABBD84985EB172* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F9ABBD84985EB172*))((::PBYTE)hIl2Cpp + CLASS_3_F9ABBD84985EB172_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
