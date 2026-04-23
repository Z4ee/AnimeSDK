#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }

#define CLASS_1_301EA7BDC3DA5B24_METHOD_1_A661A5233B13C332_OFFSET UNITYSDK_OFFSET(0x124C4220)
#define CLASS_1_301EA7BDC3DA5B24__CTOR_OFFSET UNITYSDK_OFFSET(0x124C42E0)

inline static constexpr unsigned int Class_1_301EA7BDC3DA5B24_TypeDefinitionIndex = 69451;

class Class_1_301EA7BDC3DA5B24 : public ::System::Object
{
public:
	::RPG::Client::TextID Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_301EA7BDC3DA5B24__CTOR_OFFSET))(this);
	}

	static ::Class_1_301EA7BDC3DA5B24* Method_1_A661A5233B13C332(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
	{
		return ((::Class_1_301EA7BDC3DA5B24*(*)(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + CLASS_1_301EA7BDC3DA5B24_METHOD_1_A661A5233B13C332_OFFSET))(a1);
	}
};
