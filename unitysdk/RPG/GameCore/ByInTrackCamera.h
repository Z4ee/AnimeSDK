#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4804F6B120FACF29_OFFSET UNITYSDK_OFFSET(0x19556990)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4A885C1535F9AB06_OFFSET UNITYSDK_OFFSET(0x19556C10)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_656B1A9F83843E5F_OFFSET UNITYSDK_OFFSET(0x19556B90)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_84F8D7719F1FC30B_OFFSET UNITYSDK_OFFSET(0x195568C0)
#define RPG_GAMECORE_BYINTRACKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19556940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCamera_TypeDefinitionIndex = 19690;

	class ByInTrackCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_84F8D7719F1FC30B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_84F8D7719F1FC30B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4804F6B120FACF29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4804F6B120FACF29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_656B1A9F83843E5F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_656B1A9F83843E5F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4A885C1535F9AB06(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4A885C1535F9AB06_OFFSET))(a1, a2);
		}
	};
}
