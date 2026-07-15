#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A122FB45C8E7384B_TransformIndexPath.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SKIRTIKCONFIG_TRANSFORMLUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18904BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkirtIKConfig_TransformLUT_TypeDefinitionIndex = 65335;

	class SkirtIKConfig_TransformLUT : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean SkirtLUTEnable; // 0x18
		::UnityEngine::GameObject* SourcePrefab; // 0x20
		::Class_1_A122FB45C8E7384B_TransformIndexPath left_HipL_Path; // 0x28
		::Class_1_A122FB45C8E7384B_TransformIndexPath left_KneeL_Path; // 0x38
		::Il2CppArray<::Class_1_A122FB45C8E7384B_TransformIndexPath>* LSkirtBone; // 0x48
		::Class_1_A122FB45C8E7384B_TransformIndexPath right_HipR_Path; // 0x50
		::Class_1_A122FB45C8E7384B_TransformIndexPath right_KneeR_Path; // 0x60
		::Il2CppArray<::Class_1_A122FB45C8E7384B_TransformIndexPath>* RSkirtBone; // 0x70
		::Il2CppArray<::Class_1_A122FB45C8E7384B_TransformIndexPath>* HairBone; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKIRTIKCONFIG_TRANSFORMLUT__CTOR_OFFSET))(this);
		}
	};
}
