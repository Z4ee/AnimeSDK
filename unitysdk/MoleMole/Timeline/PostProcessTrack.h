#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

class Class_2_4C33489CC9ABFB9D;

#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_METHOD_5_A88C36BE891242D7_OFFSET UNITYSDK_OFFSET(0x126646D0)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK_METHOD_5_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x12664810)
#define MOLEMOLE_TIMELINE_POSTPROCESSTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12664670)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PostProcessTrack_TypeDefinitionIndex = 42017;

	class PostProcessTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean dontResetWhenDestroy; // 0xB0
		::System::Boolean dontResetActive; // 0xB1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Double, ::System::Double> Method_5_A88C36BE891242D7()
		{
			return ((::System::ValueTuple_2<::System::Double, ::System::Double>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_METHOD_5_A88C36BE891242D7_OFFSET))(this);
		}

		::System::Void Method_5_B9EC3F44C1BFC5EF(::Class_2_4C33489CC9ABFB9D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4C33489CC9ABFB9D*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_POSTPROCESSTRACK_METHOD_5_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
		}
	};
}
