#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Emo2DAtlasConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_5F562FF13C3DED90;

#define RPG_CLIENT_MONOEMO2DATLAS_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0F8870)
#define RPG_CLIENT_MONOEMO2DATLAS_GET_ORIGINALCONFIG_OFFSET UNITYSDK_OFFSET(0xC0F87D0)
#define RPG_CLIENT_MONOEMO2DATLAS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC0F8A50)
#define RPG_CLIENT_MONOEMO2DATLAS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC0F8940)
#define RPG_CLIENT_MONOEMO2DATLAS_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xC0F8AC0)
#define RPG_CLIENT_MONOEMO2DATLAS_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xC0F8B40)
#define RPG_CLIENT_MONOEMO2DATLAS_ONMATERIALRESET_OFFSET UNITYSDK_OFFSET(0xC0F8800)
#define RPG_CLIENT_MONOEMO2DATLAS_SET_ORIGINALCONFIG_OFFSET UNITYSDK_OFFSET(0xC0F87F0)
#define RPG_CLIENT_MONOEMO2DATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F8BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmo2DAtlas_TypeDefinitionIndex = 66494;

	class MonoEmo2DAtlas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Emo2DAtlasConfig Config; // 0x18
		::Class_2_5F562FF13C3DED90* Field_5_1; // 0x30
		::RPG::Client::Emo2DAtlasConfig _OriginalConfig_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS__CTOR_OFFSET))(this);
		}

		::RPG::Client::Emo2DAtlasConfig get_OriginalConfig()
		{
			return ((::RPG::Client::Emo2DAtlasConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_GET_ORIGINALCONFIG_OFFSET))(this);
		}

		::System::Void set_OriginalConfig(::RPG::Client::Emo2DAtlasConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Emo2DAtlasConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_SET_ORIGINALCONFIG_OFFSET))(this, a1);
		}

		::System::Void OnMaterialReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_ONMATERIALRESET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMO2DATLAS_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}
	};
}
