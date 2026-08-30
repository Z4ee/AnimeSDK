#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963.h"

namespace System { class Object; }

#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CLASS_2_76AB80E999558A94_CLONE_OFFSET UNITYSDK_OFFSET(0x16842EB0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CLASS_2_76AB80E999558A94__CTOR_OFFSET UNITYSDK_OFFSET(0x16842E60)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94_TypeDefinitionIndex = 52316;

	class BGCurvePCG_MeshGeneratorBase_Class_2_76AB80E999558A94 : public ::Class_1_F0BC55524B5D6A07_Class_1_E7B1DF5735A03963
	{
	public:
		::System::Single HLPIIANJHLN; // 0x50
		::System::Single KJJLMBOOIMG; // 0x54
		::System::Single BJOCBPFKJDP; // 0x58
		::System::Single EJKGJKBDMMJ; // 0x5C
		::System::Single OLLPMCIJNPD; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CLASS_2_76AB80E999558A94__CTOR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CLASS_2_76AB80E999558A94_CLONE_OFFSET))(this);
		}
	};
}
