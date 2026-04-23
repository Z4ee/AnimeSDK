#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TARGETINRECTVIEWHELPER_METHOD_5_364218EFFA097A51_OFFSET UNITYSDK_OFFSET(0xB285920)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_METHOD_5_7A50CDD4EBE01E4D_OFFSET UNITYSDK_OFFSET(0xB286D20)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_START_OFFSET UNITYSDK_OFFSET(0xB285740)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB285AE0)
#define RPG_CLIENT_TARGETINRECTVIEWHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB286EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TargetInRectViewHelper_TypeDefinitionIndex = 64025;

	class TargetInRectViewHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_0; // 0x18
		::UnityEngine::GameObject* Field_5_1; // 0x20
		::UnityEngine::GameObject* Field_5_2; // 0x28
		::UnityEngine::GameObject* Field_5_3; // 0x30
		::UnityEngine::RectTransform* Field_5_4; // 0x38
		::UnityEngine::GameObject* LookAtTarget; // 0x40
		::UnityEngine::Vector2 Size; // 0x48
		::UnityEngine::Vector3 NodeOffect; // 0x50
		::UnityEngine::RectTransform* DetectedTransform; // 0x60
		::System::Single Ratio; // 0x68
		::System::Boolean LeftUpInRect; // 0x6C
		::System::Boolean RightUpInRect; // 0x6D
		::System::Boolean RightDownInRect; // 0x6E
		::System::Boolean LeftDownInRect; // 0x6F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_5_7A50CDD4EBE01E4D(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_METHOD_5_7A50CDD4EBE01E4D_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_364218EFFA097A51(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TARGETINRECTVIEWHELPER_METHOD_5_364218EFFA097A51_OFFSET))(this, a1);
		}
	};
}
