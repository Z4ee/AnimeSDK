#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A44BA882502087AA;
namespace RPG::GameCore { class FiveDimSectionConfig; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1A339200)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_FOGID_OFFSET UNITYSDK_OFFSET(0x1A339320)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_HASFOG_OFFSET UNITYSDK_OFFSET(0x1A333FD0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x1A3392B0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1A339290)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0x1A3392D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x1A339340)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET UNITYSDK_OFFSET(0x1A339360)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET UNITYSDK_OFFSET(0x1A339330)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET UNITYSDK_OFFSET(0x1A3392C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x1A3392A0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x1A339350)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A339280)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SectionConfig_TypeDefinitionIndex = 74541;

	class SectionConfig : public ::System::Object
	{
	public:
		::Class_1_A44BA882502087AA* __FogOfWarConfig_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _Indices_k__BackingField; // 0x18
		::System::UInt32 _SectionID_k__BackingField; // 0x20
		::System::Nullable_1<::System::UInt32> _FogID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::FiveDim::SectionConfig* Create(::RPG::GameCore::FiveDimSectionConfig* a1, ::Class_1_A44BA882502087AA* a2)
		{
			return ((::RPG::Client::NavMap::FiveDim::SectionConfig*(*)(::RPG::GameCore::FiveDimSectionConfig*, ::Class_1_A44BA882502087AA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_CREATE_OFFSET))(a1, a2);
		}

		::System::UInt32 get_SectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_SECTIONID_OFFSET))(this);
		}

		::System::Void set_SectionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_SECTIONID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_Indices()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET_INDICES_OFFSET))(this);
		}

		::System::Void set_Indices(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_INDICES_OFFSET))(this, a1);
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

		::System::Void set_FogID(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET_FOGID_OFFSET))(this, a1);
		}

		::Class_1_A44BA882502087AA* get__FogOfWarConfig()
		{
			return ((::Class_1_A44BA882502087AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_GET__FOGOFWARCONFIG_OFFSET))(this);
		}

		::System::Void set__FogOfWarConfig(::Class_1_A44BA882502087AA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A44BA882502087AA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SET__FOGOFWARCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetFogID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONCONFIG_SETFOGID_OFFSET))(this, a1);
		}
	};
}
