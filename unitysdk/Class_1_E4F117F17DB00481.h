#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace RPGTools::Timeline { class BindingData; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_E4F117F17DB00481_METHOD_1_8343361E124806DE_OFFSET UNITYSDK_OFFSET(0x9369620)
#define CLASS_1_E4F117F17DB00481_METHOD_1_8C5E59ADF3872254_OFFSET UNITYSDK_OFFSET(0x9369560)
#define CLASS_1_E4F117F17DB00481_METHOD_1_8CC8C8DE40810118_OFFSET UNITYSDK_OFFSET(0x9369390)
#define CLASS_1_E4F117F17DB00481_METHOD_1_9300692B1BF9EC3E_OFFSET UNITYSDK_OFFSET(0x9369810)
#define CLASS_1_E4F117F17DB00481_METHOD_1_DF6C54AB1D0BD307_OFFSET UNITYSDK_OFFSET(0x93698D0)

inline static constexpr unsigned int Class_1_E4F117F17DB00481_TypeDefinitionIndex = 45223;

class Class_1_E4F117F17DB00481 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_8CC8C8DE40810118(::UnityEngine::Timeline::TrackAsset* a1, ::RPGTools::Timeline::BindInfo& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E4F117F17DB00481_METHOD_1_8CC8C8DE40810118_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8C5E59ADF3872254(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E4F117F17DB00481_METHOD_1_8C5E59ADF3872254_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8343361E124806DE(::RPGTools::Timeline::BindingData* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::System::String*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E4F117F17DB00481_METHOD_1_8343361E124806DE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9300692B1BF9EC3E(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E4F117F17DB00481_METHOD_1_9300692B1BF9EC3E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DF6C54AB1D0BD307(::RPGTools::Timeline::BindingData* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E4F117F17DB00481_METHOD_1_DF6C54AB1D0BD307_OFFSET))(a1, a2, a3);
	}
};
