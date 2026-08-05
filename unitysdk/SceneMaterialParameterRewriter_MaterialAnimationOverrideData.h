#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SceneMaterialParameterRewriter_MaterialAnimationOverrideElement;
class SceneMaterialParameterRewriter_TargetElement;

#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_APPLY_OFFSET UNITYSDK_OFFSET(0x1DDF4C80)
#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_CLEARMPB_OFFSET UNITYSDK_OFFSET(0x1DDF4D20)
#define SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF4DC0)

inline static constexpr unsigned int SceneMaterialParameterRewriter_MaterialAnimationOverrideData_TypeDefinitionIndex = 27000;

class SceneMaterialParameterRewriter_MaterialAnimationOverrideData : public ::System::Object
{
public:
	::Il2CppArray<::SceneMaterialParameterRewriter_TargetElement*>* renderList; // 0x10
	::Il2CppArray<::SceneMaterialParameterRewriter_MaterialAnimationOverrideElement*>* propertyList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA__CTOR_OFFSET))(this);
	}

	::System::Void Apply()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_APPLY_OFFSET))(this);
	}

	::System::Void ClearMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEMATERIALPARAMETERREWRITER_MATERIALANIMATIONOVERRIDEDATA_CLEARMPB_OFFSET))(this);
	}
};
