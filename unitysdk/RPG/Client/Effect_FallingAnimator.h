#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Effect_FallingAnimator_ParticleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95488B0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_INIT_OFFSET UNITYSDK_OFFSET(0x9547EC0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_356114EF3CF36D59_OFFSET UNITYSDK_OFFSET(0x95499D0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_4CD934F1AB922E45_OFFSET UNITYSDK_OFFSET(0x9549110)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x9548520)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_2_OFFSET UNITYSDK_OFFSET(0x9548770)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x9548480)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0x95486E0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9548860)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9548810)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_REGENERATE_OFFSET UNITYSDK_OFFSET(0x9547E70)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x95489B0)
#define RPG_CLIENT_EFFECT_FALLINGANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9549BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FallingAnimator_TypeDefinitionIndex = 57702;

	class Effect_FallingAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 randomSeed; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::Effect_FallingAnimator_ParticleData*>* particleDatas; // 0x20
		::RPG::Client::TAUtils::SimpleTransform relativeTransform; // 0x28
		::UnityEngine::Vector2 sizeMinMax; // 0x4C
		::UnityEngine::AnimationCurve* scaleAlongHeight; // 0x58
		::System::Int32 Field_5_5; // 0x60
		::UnityEngine::AnimationCurve* scaleAlongRadius; // 0x68
		::System::Single sizeDiscardThreshold; // 0x70
		::System::Single radius; // 0x74
		::System::Single height; // 0x78
		::System::Single thickness; // 0x7C
		::UnityEngine::Vector2 angleMinMax; // 0x80
		::System::Single spotAngle; // 0x88
		::System::Int32 maxInstanceCount; // 0x8C
		::System::Single minDistance; // 0x90
		::System::Boolean singleScattering; // 0x94
		::System::Int32 m_instanceCount; // 0x98
		::UnityEngine::Vector3 shakeRange; // 0x9C
		::System::Single shakeFrequency; // 0xA8
		::System::Single rotationRange; // 0xAC
		::System::Single rotationFrequency; // 0xB0
		::System::Single fallSpeed; // 0xB4
		::System::Single Field_5_22; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_positionScaleList; // 0xC0
		::System::Collections::Generic::List_1<::System::Single>* m_randomNumbersList; // 0xC8
		::Il2CppArray<::Il2CppArray<::UnityEngine::Matrix4x4>*>* Field_5_25; // 0xD0
		::UnityEngine::MaterialPropertyBlock* Field_5_26; // 0xD8
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> Field_5_27; // 0xE0
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_5_28; // 0xF0
		::Unity::Collections::NativeArray_1<::System::Single> Field_5_29; // 0x100
		::Unity::Collections::NativeArray_1<::System::Single> Field_5_30; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void Regenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_REGENERATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_1_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_5_FA7F07669215B524()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_FA7F07669215B524_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_77FD543600E00498_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_77FD543600E00498_2_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_5_4CD934F1AB922E45(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_4CD934F1AB922E45_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::Single>* Method_5_356114EF3CF36D59(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FALLINGANIMATOR_METHOD_5_356114EF3CF36D59_OFFSET))(a1, a2);
		}
	};
}
