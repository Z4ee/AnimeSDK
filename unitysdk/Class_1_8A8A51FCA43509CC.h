#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B76C9DBDAECC6C19_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_8A8A51FCA43509CC_METHOD_1_58C663BE0A0C4DAE_OFFSET UNITYSDK_OFFSET(0x1800EE30)
#define CLASS_1_8A8A51FCA43509CC_METHOD_1_7F6B8F96E2D82F8D_OFFSET UNITYSDK_OFFSET(0x1800F450)

inline static constexpr unsigned int Class_1_8A8A51FCA43509CC_TypeDefinitionIndex = 48360;

class Class_1_8A8A51FCA43509CC : public ::System::Object
{
public:
	static ::System::Boolean Method_1_58C663BE0A0C4DAE(::UnityEngine::Timeline::TrackAsset* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + CLASS_1_8A8A51FCA43509CC_METHOD_1_58C663BE0A0C4DAE_OFFSET))(a1);
	}

	static ::Struct_2_B76C9DBDAECC6C19_1 Method_1_7F6B8F96E2D82F8D(::UnityEngine::Playables::Playable a1)
	{
		return ((::Struct_2_B76C9DBDAECC6C19_1(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_8A8A51FCA43509CC_METHOD_1_7F6B8F96E2D82F8D_OFFSET))(a1);
	}
};
