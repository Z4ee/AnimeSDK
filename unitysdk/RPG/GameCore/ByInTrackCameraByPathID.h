#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_050A727B77F7B9F1_OFFSET UNITYSDK_OFFSET(0x1BBEAF40)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_4E4A5FEE2634ECCB_OFFSET UNITYSDK_OFFSET(0x1BBEABA0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_5FF96188692D40F6_OFFSET UNITYSDK_OFFSET(0x1BBEAB60)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_9A4E98A687D601BE_OFFSET UNITYSDK_OFFSET(0x1BBEAF70)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEAB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCameraByPathID_TypeDefinitionIndex = 20597;

	class ByInTrackCameraByPathID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28
		::RPG::GameCore::DynamicFloat* PathID; // 0x30
		::RPG::GameCore::DynamicFloat* CurveID; // 0x38
		::RPG::GameCore::DynamicFloat* DetectRange; // 0x40
		::RPG::GameCore::DynamicFloat* DetectHeightRange; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5FF96188692D40F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_5FF96188692D40F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4E4A5FEE2634ECCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_4E4A5FEE2634ECCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_050A727B77F7B9F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_050A727B77F7B9F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A4E98A687D601BE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_9A4E98A687D601BE_OFFSET))(a1, a2);
		}
	};
}
