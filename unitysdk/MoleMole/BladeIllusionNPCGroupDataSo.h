#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BladeIllusionNPCInfo.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

#define MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO__CTOR_OFFSET UNITYSDK_OFFSET(0xECE6F90)

namespace MoleMole
{
	inline static constexpr unsigned int BladeIllusionNPCGroupDataSo_TypeDefinitionIndex = 76951;

	class BladeIllusionNPCGroupDataSo : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>* npcGroupDataHigh; // 0x58
		::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>* npcGroupDataMedium; // 0x60
		::Il2CppArray<::MoleMole::BladeIllusionNPCInfo>* npcGroupDataLow; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BLADEILLUSIONNPCGROUPDATASO__CTOR_OFFSET))(this);
		}
	};
}
