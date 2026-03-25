#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/UnityEngine/Keyframe.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLOATCURVEKEYFRAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x17213180)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_B10C0CBE85DBEC26_OFFSET UNITYSDK_OFFSET(0x172138A0)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_EC794351DF892425_OFFSET UNITYSDK_OFFSET(0x17213900)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_F3EEE9A84E9975A1_OFFSET UNITYSDK_OFFSET(0x172135A0)
#define RPG_GAMECORE_FLOATCURVEKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x17213890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveKeyframe_TypeDefinitionIndex = 14953;

	class FloatCurveKeyframe : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Time; // 0x10
		::System::Single Value; // 0x14
		::System::Single InTangent; // 0x18
		::System::Single OutTangent; // 0x1C
		::System::Int32 TangentMode; // 0x20
		::System::Int32 WeightedMode; // 0x24
		::System::Single InWeight; // 0x28
		::System::Single OutWeight; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC794351DF892425(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloatCurveKeyframe*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloatCurveKeyframe*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_EC794351DF892425_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::Keyframe a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_EQUALS_OFFSET))(this, a1);
		}

		::UnityEngine::Keyframe Method_2_F3EEE9A84E9975A1()
		{
			return ((::UnityEngine::Keyframe(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_F3EEE9A84E9975A1_OFFSET))(this);
		}

		::System::Void Method_2_B10C0CBE85DBEC26(::UnityEngine::Keyframe a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEKEYFRAME_METHOD_2_B10C0CBE85DBEC26_OFFSET))(this, a1);
		}
	};
}
