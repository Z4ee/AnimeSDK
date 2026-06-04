#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace RPGTools::Timeline { class BindingData; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_7567F69AD4D8B65E_METHOD_1_41989BF6A6D59D2F_OFFSET UNITYSDK_OFFSET(0xAFB7CA0)
#define CLASS_1_7567F69AD4D8B65E_METHOD_1_8343361E124806DE_OFFSET UNITYSDK_OFFSET(0xAFB7D60)
#define CLASS_1_7567F69AD4D8B65E_METHOD_1_DF6C54AB1D0BD307_OFFSET UNITYSDK_OFFSET(0xAFB8000)
#define CLASS_1_7567F69AD4D8B65E_METHOD_1_F564E7CBA369BFC9_OFFSET UNITYSDK_OFFSET(0xAFB7F40)
#define CLASS_1_7567F69AD4D8B65E_METHOD_1_FC8AB40855D45587_OFFSET UNITYSDK_OFFSET(0xAFB7AB0)

inline static constexpr unsigned int Class_1_7567F69AD4D8B65E_TypeDefinitionIndex = 45780;

class Class_1_7567F69AD4D8B65E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_FC8AB40855D45587(::UnityEngine::Timeline::TrackAsset* a1, ::RPGTools::Timeline::BindInfo& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_7567F69AD4D8B65E_METHOD_1_FC8AB40855D45587_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_41989BF6A6D59D2F(::UnityEngine::Timeline::TimelineAsset* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::System::String*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_7567F69AD4D8B65E_METHOD_1_41989BF6A6D59D2F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_8343361E124806DE(::RPGTools::Timeline::BindingData* a1, ::System::String* a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::System::String*, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_7567F69AD4D8B65E_METHOD_1_8343361E124806DE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F564E7CBA369BFC9(::UnityEngine::Timeline::TimelineAsset* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_7567F69AD4D8B65E_METHOD_1_F564E7CBA369BFC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DF6C54AB1D0BD307(::RPGTools::Timeline::BindingData* a1, ::UnityEngine::PropertyName a2, ::RPGTools::Timeline::BindInfo& a3)
	{
		return ((::System::Boolean(*)(::RPGTools::Timeline::BindingData*, ::UnityEngine::PropertyName, ::RPGTools::Timeline::BindInfo&))((::PBYTE)hIl2Cpp + CLASS_1_7567F69AD4D8B65E_METHOD_1_DF6C54AB1D0BD307_OFFSET))(a1, a2, a3);
	}
};
