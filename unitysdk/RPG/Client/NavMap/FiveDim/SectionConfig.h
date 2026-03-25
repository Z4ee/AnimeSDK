#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A7A4B83BB51BED0E;
namespace RPG::GameCore { class FiveDimSectionConfig; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x9E044B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_FOGID_OFFSET UNITYSDK_OFFSET(0x9E045A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_HASFOG_OFFSET UNITYSDK_OFFSET(0x9DFF5F0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x9E04560)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9E04540)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x9E04580)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x9E045C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET UNITYSDK_OFFSET(0x9E045E0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET UNITYSDK_OFFSET(0x9E045B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET UNITYSDK_OFFSET(0x9E04570)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9E04550)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x9E045D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x9E04530)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SectionConfig_TypeDefinitionIndex = 61394;

	class SectionConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Indices_k__BackingField; // 0x10
		::Class_1_A7A4B83BB51BED0E* __FogOfWarConfig_k__BackingField; // 0x18
		::System::Nullable_1<::System::UInt32> _FogID_k__BackingField; // 0x20
		::System::UInt32 _SectionID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::FiveDim::SectionConfig* Create(::RPG::GameCore::FiveDimSectionConfig* rowConfig, ::Class_1_A7A4B83BB51BED0E* fogOfWar)
		{
			return ((::RPG::Client::NavMap::FiveDim::SectionConfig*(*)(::RPG::GameCore::FiveDimSectionConfig*, ::Class_1_A7A4B83BB51BED0E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET))(rowConfig, fogOfWar);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Indices()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET))(this);
		}

		::System::Void set_Indices(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::MVector2>* get_SectionVertices()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONVERTICES_OFFSET))(this);
		}

		::System::Boolean get_HasFog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_HASFOG_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> get_FogID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_FOGID_OFFSET))(this);
		}

		::System::Void set_FogID(::System::Nullable_1<::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET))(this, value);
		}

		::Class_1_A7A4B83BB51BED0E* get__FogOfWarConfig()
		{
			return ((::Class_1_A7A4B83BB51BED0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET))(this);
		}

		::System::Void set__FogOfWarConfig(::Class_1_A7A4B83BB51BED0E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A7A4B83BB51BED0E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET))(this, value);
		}

		::System::Void SetFogID(::System::UInt32 fogID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET))(this, fogID);
		}
	};
}
