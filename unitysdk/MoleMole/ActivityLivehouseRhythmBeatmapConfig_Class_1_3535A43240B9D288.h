#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EventRange; }
namespace System { class String; }

#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_3535A43240B9D288_METHOD_1_59984695E04F84CC_OFFSET UNITYSDK_OFFSET(0x1482F8D0)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_3535A43240B9D288__CTOR_OFFSET UNITYSDK_OFFSET(0x1482F8C0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityLivehouseRhythmBeatmapConfig_Class_1_3535A43240B9D288_TypeDefinitionIndex = 76573;

	class ActivityLivehouseRhythmBeatmapConfig_Class_1_3535A43240B9D288 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_3535A43240B9D288__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_59984695E04F84CC(::MoleMole::EventRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_CLASS_1_3535A43240B9D288_METHOD_1_59984695E04F84CC_OFFSET))(this, a1);
		}
	};
}
