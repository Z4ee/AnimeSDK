#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace RPG::GameCore { class StagePrefabInfo; }

#define PREFABCUSTOMSTATECONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A8C2C0)
#define PREFABCUSTOMSTATECONFIG_GETGAMEOBJECTSTATEBIT_OFFSET UNITYSDK_OFFSET(0x9A8C340)
#define PREFABCUSTOMSTATECONFIG_GET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0x9A8CD80)
#define PREFABCUSTOMSTATECONFIG_GET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0x9A8CF90)
#define PREFABCUSTOMSTATECONFIG_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9A8C550)
#define PREFABCUSTOMSTATECONFIG_METHOD_5_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x9A8C5A0)
#define PREFABCUSTOMSTATECONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9A8C9A0)
#define PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0x9A8C750)
#define PREFABCUSTOMSTATECONFIG_SET_CUSTOMOBJCOLOR_OFFSET UNITYSDK_OFFSET(0x9A8CD90)
#define PREFABCUSTOMSTATECONFIG_SET_TERRAINRATEPEROBJ_OFFSET UNITYSDK_OFFSET(0x9A8CFA0)
#define PREFABCUSTOMSTATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8D010)

inline static constexpr unsigned int PrefabCustomStateConfig_TypeDefinitionIndex = 44118;

class PrefabCustomStateConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean EnableShadowCastingMode; // 0x18
	::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x1C
	::System::Boolean EnableCustomColor; // 0x20
	::UnityEngine::Color _ObjColor; // 0x24
	::System::Boolean Field_5_4; // 0x34
	::System::Int32 Field_5_5; // 0x38
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

	::System::Void PersistentData(::RPG::GameCore::StagePrefabInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StagePrefabInfo*))((::PBYTE)hIl2Cpp + PREFABCUSTOMSTATECONFIG_PERSISTENTDATA_OFFSET))(this, a1);
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
