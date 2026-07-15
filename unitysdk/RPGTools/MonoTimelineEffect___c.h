#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define RPGTOOLS_MONOTIMELINEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D66A90)
#define RPGTOOLS_MONOTIMELINEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19D66AC0)
#define RPGTOOLS_MONOTIMELINEEFFECT___C__ONENABALEPOSM_B__47_0_OFFSET UNITYSDK_OFFSET(0x19D66AD0)

namespace RPGTools
{
	inline static constexpr unsigned int MonoTimelineEffect___c_TypeDefinitionIndex = 46015;

	class MonoTimelineEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::UnityEngine::Renderer*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MonoTimelineEffect___c_TypeDefinitionIndex)->GetStaticField(0x6B230);
		}
		static ::RPGTools::MonoTimelineEffect___c** StaticGet___9()
		{
			return (::RPGTools::MonoTimelineEffect___c**)Il2CppClass::FromTypeDefinitionIndex(MonoTimelineEffect___c_TypeDefinitionIndex)->GetStaticField(0x6B238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnabalePOSM_b__47_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPGTOOLS_MONOTIMELINEEFFECT___C__ONENABALEPOSM_B__47_0_OFFSET))(this, a1);
		}
	};
}
