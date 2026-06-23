#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_PATHSECTIONASSETSO_SECTIONPATHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A82D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathSectionAssetSO_SectionPathData_TypeDefinitionIndex = 43800;

	class PathSectionAssetSO_SectionPathData : public ::System::Object
	{
	public:
		::System::Int32 sectionID; // 0x10
		::System::String* graphAssetPath; // 0x18
		::System::String* stateAssetPath; // 0x20
		::System::String* carPlateAssetPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHSECTIONASSETSO_SECTIONPATHDATA__CTOR_OFFSET))(this);
		}
	};
}
