#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define SHADERANIHELP_AWAKE_OFFSET UNITYSDK_OFFSET(0x18CC5960)
#define SHADERANIHELP_GETISPLAYINGANDNOTPREFAB_OFFSET UNITYSDK_OFFSET(0x18CC5910)
#define SHADERANIHELP_INIT_OFFSET UNITYSDK_OFFSET(0x18CC6500)
#define SHADERANIHELP_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18CC85B0)
#define SHADERANIHELP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18CC8610)
#define SHADERANIHELP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18CC80E0)
#define SHADERANIHELP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18CC6270)
#define SHADERANIHELP_ONGRAPHICMATERIALCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x18CC8560)
#define SHADERANIHELP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18CC8800)
#define SHADERANIHELP_PRECHECKFIELDS_OFFSET UNITYSDK_OFFSET(0x18CC5CE0)
#define SHADERANIHELP_REFLESH_OFFSET UNITYSDK_OFFSET(0x18CC6540)
#define SHADERANIHELP_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18CC5560)
#define SHADERANIHELP__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC8850)

inline static constexpr unsigned int ShaderAniHelp_TypeDefinitionIndex = 44504;

class ShaderAniHelp : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Material* material; // 0x18
	::System::Boolean forceCreateMatOnEnable; // 0x20
	::System::String* floatName0; // 0x28
	::System::String* floatName1; // 0x30
	::System::String* floatName2; // 0x38
	::System::String* floatName3; // 0x40
	::System::String* floatName4; // 0x48
	::System::String* floatName5; // 0x50
	::System::String* floatName6; // 0x58
	::System::String* floatName7; // 0x60
	::System::String* floatName8; // 0x68
	::System::String* floatName9; // 0x70
	::System::Single floatValue0; // 0x78
	::System::Single floatValue1; // 0x7C
	::System::Single floatValue2; // 0x80
	::System::Single floatValue3; // 0x84
	::System::Single floatValue4; // 0x88
	::System::Single floatValue5; // 0x8C
	::System::Single floatValue6; // 0x90
	::System::Single floatValue7; // 0x94
	::System::Single floatValue8; // 0x98
	::System::Single floatValue9; // 0x9C
	::System::String* colorName0; // 0xA0
	::UnityEngine::Color colorValue0; // 0xA8
	::System::String* colorName1; // 0xB8
	::UnityEngine::Color colorValue1; // 0xC0
	::System::String* colorName2; // 0xD0
	::UnityEngine::Color colorValue2; // 0xD8
	::System::String* colorName3; // 0xE8
	::UnityEngine::Color colorValue3; // 0xF0
	::System::String* colorName4; // 0x100
	::UnityEngine::Color colorValue4; // 0x108
	::System::String* vectorName0; // 0x118
	::UnityEngine::Vector4 vectorValue0; // 0x120
	::System::String* vectorName1; // 0x130
	::UnityEngine::Vector4 vectorValue1; // 0x138
	::System::String* vectorName2; // 0x148
	::UnityEngine::Vector4 vectorValue2; // 0x150
	::System::String* vectorName3; // 0x160
	::UnityEngine::Vector4 vectorValue3; // 0x168
	::System::String* vectorName4; // 0x178
	::UnityEngine::Vector4 vectorValue4; // 0x180
	::UnityEngine::Material* _instanceMaterial; // 0x190
	::UnityEngine::Material* _cachedMaterial; // 0x198
	::UnityEngine::Material* _cachedGraphicMaterial; // 0x1A0
	::UnityEngine::UI::MaskableGraphic* graphic; // 0x1A8
	::System::Collections::Generic::List_1<::System::String*>* floatList; // 0x1B0
	::System::Collections::Generic::List_1<::System::String*>* colorList; // 0x1B8
	::System::Collections::Generic::List_1<::System::String*>* vectorList; // 0x1C0
	::Il2CppArray<::System::Boolean>* floatUseArr; // 0x1C8
	::Il2CppArray<::System::Boolean>* colorUseArr; // 0x1D0
	::Il2CppArray<::System::Boolean>* vectorUseArr; // 0x1D8
	::Il2CppArray<::System::Single>* floatValueArr; // 0x1E0
	::Il2CppArray<::UnityEngine::Color>* colorValueArr; // 0x1E8
	::Il2CppArray<::UnityEngine::Vector4>* vectorValueArr; // 0x1F0
	::System::Boolean _isMaterialDirty; // 0x1F8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP__CTOR_OFFSET))(this);
	}

	::System::Void UpdateMaterial(::System::Boolean isOnEnable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHADERANIHELP_UPDATEMATERIAL_OFFSET))(this, isOnEnable);
	}

	::System::Boolean GetIsPlayingAndNotPrefab()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_GETISPLAYINGANDNOTPREFAB_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_AWAKE_OFFSET))(this);
	}

	::System::Void PreCheckFields()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_PRECHECKFIELDS_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnGraphicMaterialChangeHandle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_ONGRAPHICMATERIALCHANGEHANDLE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_LATEUPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_ONDESTROY_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_INIT_OFFSET))(this);
	}

	::System::Void Reflesh(::System::Boolean force)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SHADERANIHELP_REFLESH_OFFSET))(this, force);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHADERANIHELP_ONUPDATE_OFFSET))(this);
	}
};
