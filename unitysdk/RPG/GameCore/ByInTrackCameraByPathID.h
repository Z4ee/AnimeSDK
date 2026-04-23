#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_4E4A5FEE2634ECCB_OFFSET UNITYSDK_OFFSET(0x1874CDA0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_70648FFF2A8DB086_OFFSET UNITYSDK_OFFSET(0x1874CCD0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1874CD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCameraByPathID_TypeDefinitionIndex = 19818;

	class ByInTrackCameraByPathID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28
		::RPG::GameCore::DynamicFloat* PathID; // 0x30
		::RPG::GameCore::DynamicFloat* CurveID; // 0x38
		::RPG::GameCore::DynamicFloat* DetectRange; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_70648FFF2A8DB086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_70648FFF2A8DB086_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E4A5FEE2634ECCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_4E4A5FEE2634ECCB_OFFSET))(a1, a2);
		}
	};
}
