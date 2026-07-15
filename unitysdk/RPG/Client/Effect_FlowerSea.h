#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlowerSeaShape.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_FLOWERSEA_AWAKE_OFFSET UNITYSDK_OFFSET(0x150EA6E0)
#define RPG_CLIENT_EFFECT_FLOWERSEA_LATETICK_OFFSET UNITYSDK_OFFSET(0x150EBD30)
#define RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x150ECA40)
#define RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x150EBD90)
#define RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x150EA730)
#define RPG_CLIENT_EFFECT_FLOWERSEA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x150EBCA0)
#define RPG_CLIENT_EFFECT_FLOWERSEA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x150EBB40)
#define RPG_CLIENT_EFFECT_FLOWERSEA__CTOR_OFFSET UNITYSDK_OFFSET(0x150ECC30)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_FlowerSea_TypeDefinitionIndex = 67319;

	class Effect_FlowerSea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::GameObject*>* Flowers; // 0x18
		::UnityEngine::Material* Mat; // 0x20
		::RPG::Client::FlowerSeaShape Shape; // 0x28
		::System::Single Radius; // 0x2C
		::UnityEngine::AnimationCurve* CenterRate; // 0x30
		::System::Int32 Number; // 0x38
		::UnityEngine::Vector3 RotationVectorFactor; // 0x3C
		::System::Single Scale; // 0x48
		::System::Single ScaleFactor; // 0x4C
		::UnityEngine::Vector3 WindDirection; // 0x50
		::System::Single WindFactor; // 0x5C
		::System::Boolean EnableAnimation; // 0x60
		::System::Single ShowRange1; // 0x64
		::System::Single ShowRange2; // 0x68
		::UnityEngine::Texture2D* DissolveTexture; // 0x70
		::UnityEngine::Vector2 DissolveTiling; // 0x78
		::System::Single DissolveRate; // 0x80
		::UnityEngine::Vector3 Field_5_17; // 0x84
		::UnityEngine::Vector3 Field_5_18; // 0x90
		::System::Single Field_5_19; // 0x9C
		::System::Boolean Field_5_20; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* _MPBs; // 0xA8
		::UnityEngine::Vector4 Field_5_22; // 0xB0
		::UnityEngine::Vector4 Field_5_23; // 0xC0
		::UnityEngine::Vector4 Field_5_24; // 0xD0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _Matrices; // 0xE0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _WorldMatrices; // 0xE8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* _WindDirection; // 0xF0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* _WindPhase; // 0xF8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* _DissolveUV; // 0x100
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _Meshes; // 0x108
		::System::Boolean Field_5_31; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_B29205EE7F7B640C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_B29205EE7F7B640C_OFFSET))(this);
		}

		::System::Void Method_5_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_5_0869E1192F8E01DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_FLOWERSEA_METHOD_5_0869E1192F8E01DF_OFFSET))(this);
		}
	};
}
