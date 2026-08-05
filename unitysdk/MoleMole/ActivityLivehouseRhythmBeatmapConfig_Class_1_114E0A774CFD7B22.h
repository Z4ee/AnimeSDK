#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Note; }
namespace System { class String; }

#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_114E0A774CFD7B22_METHOD_1_41DE812D555AA4E7_OFFSET UNITYSDK_OFFSET(0x150D8440)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_114E0A774CFD7B22__CTOR_OFFSET UNITYSDK_OFFSET(0x150D8430)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityLivehouseRhythmBeatmapConfig_Class_1_114E0A774CFD7B22_TypeDefinitionIndex = 76572;

	class ActivityLivehouseRhythmBeatmapConfig_Class_1_114E0A774CFD7B22 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_114E0A774CFD7B22__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_41DE812D555AA4E7(::MoleMole::Note* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Note*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_114E0A774CFD7B22_METHOD_1_41DE812D555AA4E7_OFFSET))(this, a1);
		}
	};
}
