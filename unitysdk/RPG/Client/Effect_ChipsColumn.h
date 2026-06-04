#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_CHIPSCOLUMN_LATETICK_OFFSET UNITYSDK_OFFSET(0xB8436D0)
#define RPG_CLIENT_EFFECT_CHIPSCOLUMN_METHOD_5_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xB8437F0)
#define RPG_CLIENT_EFFECT_CHIPSCOLUMN_METHOD_5_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0xB843DA0)
#define RPG_CLIENT_EFFECT_CHIPSCOLUMN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB843640)
#define RPG_CLIENT_EFFECT_CHIPSCOLUMN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB8435B0)
#define RPG_CLIENT_EFFECT_CHIPSCOLUMN__CTOR_OFFSET UNITYSDK_OFFSET(0xB8445F0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_ChipsColumn_TypeDefinitionIndex = 65859;

	class Effect_ChipsColumn : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x18
		::UnityEngine::Material* ChipMaterial; // 0x20
		::UnityEngine::Vector4 Field_5_2; // 0x28
		::System::Single DissolveUpValue; // 0x38
		::System::Single DissolveDownValue; // 0x3C
		::System::Single DissolveRate; // 0x40
		::System::Single DissolveMask; // 0x44
		::System::Single Field_5_7; // 0x48
		::System::Single ScanHeight; // 0x4C
		::System::Single Field_5_9; // 0x50
		::System::Single ScanAlpha; // 0x54
		::System::Single Field_5_11; // 0x58
		::System::Single GlobalGradientRange; // 0x5C
		::UnityEngine::Color Field_5_13; // 0x60
		::UnityEngine::Color Field_5_14; // 0x70
		::System::Single Field_5_15; // 0x80
		::System::Single GradientIntensity; // 0x84
		::System::Single Field_5_17; // 0x88
		::System::Single GradientDarken; // 0x8C
		::UnityEngine::Vector4 Field_5_19; // 0x90
		::UnityEngine::Transform* CustomLight; // 0xA0
		::Il2CppArray<::UnityEngine::Color>* ChipColors; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _ObjMatrixList; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_5_23; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* _ChipColorList; // 0xC0
		::UnityEngine::MaterialPropertyBlock* Field_5_25; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_F7300E87EC49A206()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN_METHOD_5_F7300E87EC49A206_OFFSET))(this);
		}

		::System::Void Method_5_9AB55F553C4AC6E8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CHIPSCOLUMN_METHOD_5_9AB55F553C4AC6E8_OFFSET))(this);
		}
	};
}
