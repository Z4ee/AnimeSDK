#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CLASS_2_A52371CEAF138ED3_METHOD_2_33823A8218EEBE19_OFFSET UNITYSDK_OFFSET(0x10C56F30)
#define CLASS_2_A52371CEAF138ED3_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x10C56D90)
#define CLASS_2_A52371CEAF138ED3_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10C56D30)
#define CLASS_2_A52371CEAF138ED3__CTOR_OFFSET UNITYSDK_OFFSET(0x10C570E0)
#define CLASS_2_A52371CEAF138ED3___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10C570F0)

inline static constexpr unsigned int Class_2_A52371CEAF138ED3_TypeDefinitionIndex = 39564;

class Class_2_A52371CEAF138ED3 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A52371CEAF138ED3__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A52371CEAF138ED3_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_33823A8218EEBE19(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*))((::PBYTE)hIl2Cpp + CLASS_2_A52371CEAF138ED3_METHOD_2_33823A8218EEBE19_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A52371CEAF138ED3_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_A52371CEAF138ED3___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
