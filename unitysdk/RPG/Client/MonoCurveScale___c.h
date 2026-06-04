#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOCURVESCALE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC06BD70)
#define RPG_CLIENT_MONOCURVESCALE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC06BDB0)
#define RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_0_OFFSET UNITYSDK_OFFSET(0xC06BDC0)
#define RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_1_OFFSET UNITYSDK_OFFSET(0xC06BE20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveScale___c_TypeDefinitionIndex = 66407;

	class MonoCurveScale___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::UnityEngine::Keyframe>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveScale___c_TypeDefinitionIndex)->GetStaticField(0x5FFD0);
		}
		static ::RPG::Client::MonoCurveScale___c** StaticGet___9()
		{
			return (::RPG::Client::MonoCurveScale___c**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveScale___c_TypeDefinitionIndex)->GetStaticField(0x5FFD8);
		}
		static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__10_1()
		{
			return (::System::Comparison_1<::UnityEngine::Keyframe>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveScale___c_TypeDefinitionIndex)->GetStaticField(0x5FFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenerateReverseCurve_b__10_0(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GenerateReverseCurve_b__10_1(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVESCALE___C__GENERATEREVERSECURVE_B__10_1_OFFSET))(this, a1, a2);
		}
	};
}
