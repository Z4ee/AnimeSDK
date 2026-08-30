#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierLifeStepMoment.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_4CC224F2AF337042_METHOD_3_469ECD10EF199C13_OFFSET UNITYSDK_OFFSET(0x1D672C30)
#define CLASS_3_4CC224F2AF337042_METHOD_3_9E3D0C5F7C38F16C_OFFSET UNITYSDK_OFFSET(0x1D672BF0)
#define CLASS_3_4CC224F2AF337042__CTOR_OFFSET UNITYSDK_OFFSET(0x1D672C20)

inline static constexpr unsigned int Class_3_4CC224F2AF337042_TypeDefinitionIndex = 23440;

class Class_3_4CC224F2AF337042 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::ModifierLifeStepMoment GNLDHNBHMOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CC224F2AF337042__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9E3D0C5F7C38F16C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4CC224F2AF337042*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4CC224F2AF337042*&))((::PBYTE)hIl2Cpp + CLASS_3_4CC224F2AF337042_METHOD_3_9E3D0C5F7C38F16C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_469ECD10EF199C13(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4CC224F2AF337042* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4CC224F2AF337042*))((::PBYTE)hIl2Cpp + CLASS_3_4CC224F2AF337042_METHOD_3_469ECD10EF199C13_OFFSET))(a1, a2);
	}
};
