#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/QTEData_FailActionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QTEUIData; }
namespace RPGTools::Timeline { class QTEMissionCustomValue; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_QTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD04BF70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int QTEData_TypeDefinitionIndex = 45551;

	class QTEData : public ::System::Object
	{
	public:
		::System::String* QTEName; // 0x10
		::RPGTools::Timeline::QTEData_FailActionType FailAction; // 0x18
		::System::Single Timescale; // 0x1C
		::RPG::Client::QTEUIData* UIData; // 0x20
		::System::Boolean SetMissionCustomValue; // 0x28
		::RPGTools::Timeline::QTEMissionCustomValue* MCV; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_QTEDATA__CTOR_OFFSET))(this);
		}
	};
}
