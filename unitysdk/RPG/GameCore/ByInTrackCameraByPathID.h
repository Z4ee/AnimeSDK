#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_4E4A5FEE2634ECCB_OFFSET UNITYSDK_OFFSET(0x19556F70)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_5F9502E227FC5CF8_OFFSET UNITYSDK_OFFSET(0x195572B0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_70648FFF2A8DB086_OFFSET UNITYSDK_OFFSET(0x19556EA0)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_FCB317470F45D549_OFFSET UNITYSDK_OFFSET(0x19557330)
#define RPG_GAMECORE_BYINTRACKCAMERABYPATHID__CTOR_OFFSET UNITYSDK_OFFSET(0x19556F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCameraByPathID_TypeDefinitionIndex = 19691;

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

		static ::System::Void Method_4_5F9502E227FC5CF8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_5F9502E227FC5CF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FCB317470F45D549(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCameraByPathID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCameraByPathID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERABYPATHID_METHOD_4_FCB317470F45D549_OFFSET))(a1, a2);
		}
	};
}
