#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_716F9FCFF12A109B.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define CLASS_1_4AF800FB66D2976E_METHOD_1_8C369A801747F6E6_OFFSET UNITYSDK_OFFSET(0x13F0EDC0)

inline static constexpr unsigned int Class_1_4AF800FB66D2976E_TypeDefinitionIndex = 39889;

class Class_1_4AF800FB66D2976E : public ::System::Object
{
public:
	static ::MoleMole::Timeline::ZNet::ZNetGroupTrack* Method_1_8C369A801747F6E6(::UnityEngine::Timeline::TimelineAsset* a1, ::Enum_3_716F9FCFF12A109B a2)
	{
		return ((::MoleMole::Timeline::ZNet::ZNetGroupTrack*(*)(::UnityEngine::Timeline::TimelineAsset*, ::Enum_3_716F9FCFF12A109B))((::PBYTE)hIl2Cpp + CLASS_1_4AF800FB66D2976E_METHOD_1_8C369A801747F6E6_OFFSET))(a1, a2);
	}
};
