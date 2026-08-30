#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_5.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

#define PREFABCUSTOMSTATECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xC4936C0)
#define PREFABCUSTOMSTATECONFIG_GETGAMEOBJECTSTATEBIT_OFFSET UNITYSDK_OFFSET(0xC493740)
#define PREFABCUSTOMSTATECONFIG_GET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0xC493F50)
#define PREFABCUSTOMSTATECONFIG_GET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0xC494140)
#define PREFABCUSTOMSTATECONFIG_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xC493950)
#define PREFABCUSTOMSTATECONFIG_METHOD_5_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xC4939A0)
#define PREFABCUSTOMSTATECONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xC493B90)
#define PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xC493B40)
#define PREFABCUSTOMSTATECONFIG_SET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0xC493F60)
#define PREFABCUSTOMSTATECONFIG_SET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0xC494150)
#define PREFABCUSTOMSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC4941C0)

inline static constexpr unsigned int PrefabCustomStateConfig_TypeDefinitionIndex = 47794;

class PrefabCustomStateConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean EnableShadowCastingMode; // 0x18
	::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x1C
	::System::Boolean EnableCustomColor; // 0x20
	::UnityEngine::Color _ObjColor; // 0x24
	::System::Boolean MEBFHFGBPGJ; // 0x34
	::System::Int32 NNKMIKNIELL; // 0x38
	::System::Boolean EnableCustomTerrainRatePerObj; // 0x3C
	::System::Single _TerrainRatePerObj; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_AWAKE_OFFSET))(this);
	}

	::System::Void Method_5_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_METHOD_5_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Int32 GetGameObjectStateBit()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GETGAMEOBJECTSTATEBIT_OFFSET))(this);
	}

	::System::Void PersistentData(::Struct_2_CC45B4503679E14E_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_5))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET))(this, a1);
	}

	::System::Void InitComponent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_INITCOMPONENT_OFFSET))(this, a1);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_ONVALIDATE_OFFSET))(this);
	}

	::UnityEngine::Color get_CustomObjColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GET_CUSTOMOBJCOLOR_OFFSET))(this);
	}

	::System::Void set_CustomObjColor(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_SET_CUSTOMOBJCOLOR_OFFSET))(this, a1);
	}

	::System::Single get_TerrainRatePerObj()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_GET_TERRAINRATEPEROBJ_OFFSET))(this);
	}

	::System::Void set_TerrainRatePerObj(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_SET_TERRAINRATEPEROBJ_OFFSET))(this, a1);
	}
};
