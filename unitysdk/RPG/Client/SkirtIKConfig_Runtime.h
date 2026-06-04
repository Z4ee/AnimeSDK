#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class SkirtIK_HairBoneDataClass;
class SkirtIK_HairIKClass;
class SkirtIK_SkirtIKClass;
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_SKIRTIKCONFIG_RUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xC8E69B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkirtIKConfig_Runtime_TypeDefinitionIndex = 63963;

	class SkirtIKConfig_Runtime : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean SkirtConfigEnable; // 0x18
		::System::Single SkirtEndDecayRate; // 0x1C
		::System::Single SkirtStartDecayRate; // 0x20
		::UnityEngine::Quaternion minL; // 0x24
		::UnityEngine::Quaternion maxL; // 0x34
		::System::Boolean LMaxWeightAdjust; // 0x44
		::UnityEngine::AnimationCurve* LWeightCurve; // 0x48
		::Il2CppArray<::SkirtIK_SkirtIKClass*>* LSkirtIK; // 0x50
		::UnityEngine::Quaternion minR; // 0x58
		::UnityEngine::Quaternion maxR; // 0x68
		::System::Boolean RMaxWeightAdjust; // 0x78
		::UnityEngine::AnimationCurve* RWeightCurve; // 0x80
		::Il2CppArray<::SkirtIK_SkirtIKClass*>* RSkirtIK; // 0x88
		::System::Single HairDecayRate; // 0x90
		::System::Single HairStartDecayRate; // 0x94
		::UnityEngine::AnimationCurve* UDRatioCurve; // 0x98
		::UnityEngine::AnimationCurve* LRRatioCurve; // 0xA0
		::System::Single HairErrTolerRate; // 0xA8
		::System::Boolean UseNewRotationEvaluateMode; // 0xAC
		::System::Boolean AccurateAngleEnable; // 0xAD
		::UnityEngine::Vector3 SpecialUpAngle; // 0xB0
		::UnityEngine::Vector3 SpecialDownAngle; // 0xBC
		::UnityEngine::Vector4 SpecialLeftAngle; // 0xC8
		::UnityEngine::Vector4 SpecialRightAngle; // 0xD8
		::UnityEngine::Vector2 HairIKUDAngle; // 0xE8
		::UnityEngine::Vector2 HairIKCentre; // 0xF0
		::UnityEngine::Vector2 HairIKLRAngle; // 0xF8
		::Il2CppArray<::SkirtIK_HairBoneDataClass*>* HairBoneData; // 0x100
		::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKUp; // 0x108
		::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKLeft; // 0x110
		::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKRight; // 0x118
		::Il2CppArray<::SkirtIK_HairIKClass*>* HairIKDown; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKIRTIKCONFIG_RUNTIME__CTOR_OFFSET))(this);
		}
	};
}
