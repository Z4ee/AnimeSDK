#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MaterialInfo; }

#define MOLEMOLE_TIMELINE_MATERIALRECORDERHELPER_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1BA42630)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialRecorderHelper_TypeDefinitionIndex = 30650;

	class MaterialRecorderHelper : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::MaterialInfo* CopyFrom(::MoleMole::Timeline::MaterialInfo* materialInfo, ::MoleMole::Timeline::MaterialInfo* copyMaterialInfo)
		{
			return ((::MoleMole::Timeline::MaterialInfo*(*)(::MoleMole::Timeline::MaterialInfo*, ::MoleMole::Timeline::MaterialInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALRECORDERHELPER_COPYFROM_OFFSET))(materialInfo, copyMaterialInfo);
		}
	};
}
