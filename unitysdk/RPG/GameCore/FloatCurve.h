#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WrapMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloatCurveKeyframe; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_FLOATCURVE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17212F90)
#define RPG_GAMECORE_FLOATCURVE_GET_CACHEDANIMCURVE_OFFSET UNITYSDK_OFFSET(0x17213380)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_1D86C4DD96C4B551_OFFSET UNITYSDK_OFFSET(0x172135C0)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_28633EAD2621903E_OFFSET UNITYSDK_OFFSET(0x172133D0)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_6115B8FF6F2F3006_OFFSET UNITYSDK_OFFSET(0x172138C0)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_65C44E317041EBAA_OFFSET UNITYSDK_OFFSET(0x17213410)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x17213880)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_8A6035CCBA726F8F_OFFSET UNITYSDK_OFFSET(0x17213320)
#define RPG_GAMECORE_FLOATCURVE_METHOD_2_D80DF33D8BFF493D_OFFSET UNITYSDK_OFFSET(0x171FE880)
#define RPG_GAMECORE_FLOATCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x17212F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurve_TypeDefinitionIndex = 14954;

	class FloatCurve : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FloatCurveKeyframe*>* Keys; // 0x10
		::RPG::GameCore::WrapMode PreWrapMode; // 0x18
		::RPG::GameCore::WrapMode PostWrapMode; // 0x1C
		::UnityEngine::AnimationCurve* _CachedAnimCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D80DF33D8BFF493D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatCurve*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatCurve*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_D80DF33D8BFF493D_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_EQUALS_OFFSET))(this, a1);
		}

		static ::UnityEngine::AnimationCurve* Method_2_8A6035CCBA726F8F(::RPG::GameCore::FloatCurve* a1)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_8A6035CCBA726F8F_OFFSET))(a1);
		}

		::UnityEngine::AnimationCurve* Method_2_28633EAD2621903E()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_28633EAD2621903E_OFFSET))(this);
		}

		::System::Void Method_2_65C44E317041EBAA(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_65C44E317041EBAA_OFFSET))(this, a1);
		}

		::System::Void Method_2_1D86C4DD96C4B551(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_1D86C4DD96C4B551_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FloatCurve* Method_2_6115B8FF6F2F3006(::UnityEngine::AnimationCurve* a1)
		{
			return ((::RPG::GameCore::FloatCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_6115B8FF6F2F3006_OFFSET))(a1);
		}

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_CachedAnimCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVE_GET_CACHEDANIMCURVE_OFFSET))(this);
		}
	};
}
