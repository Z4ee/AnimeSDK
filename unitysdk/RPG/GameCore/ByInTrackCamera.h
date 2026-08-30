#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_2459AC284258D36E_OFFSET UNITYSDK_OFFSET(0x1BBEA590)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4804F6B120FACF29_OFFSET UNITYSDK_OFFSET(0x1BBEA390)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_ECE93E6438DF0210_OFFSET UNITYSDK_OFFSET(0x1BBEA350)
#define RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_F922788EA4181271_OFFSET UNITYSDK_OFFSET(0x1BBEA5C0)
#define RPG_GAMECORE_BYINTRACKCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBEA380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInTrackCamera_TypeDefinitionIndex = 20596;

	class ByInTrackCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x20
		::RPG::GameCore::DynamicFloat* DetectGroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ECE93E6438DF0210(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_ECE93E6438DF0210_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4804F6B120FACF29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_4804F6B120FACF29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2459AC284258D36E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_2459AC284258D36E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F922788EA4181271(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTrackCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTrackCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTRACKCAMERA_METHOD_4_F922788EA4181271_OFFSET))(a1, a2);
		}
	};
}
