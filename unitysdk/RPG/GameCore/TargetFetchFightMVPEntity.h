#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_547B6833E0352D14_OFFSET UNITYSDK_OFFSET(0x1D5AB7A0)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_9D0C3252C4C05DC9_OFFSET UNITYSDK_OFFSET(0x1D5AB6A0)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_BDBA263FDA0B1674_OFFSET UNITYSDK_OFFSET(0x1D5AB720)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_C5571D63DA73BA41_OFFSET UNITYSDK_OFFSET(0x1D5AB780)
#define RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFightMVPEntity_TypeDefinitionIndex = 23730;

	class TargetFetchFightMVPEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D0C3252C4C05DC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_9D0C3252C4C05DC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDBA263FDA0B1674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFightMVPEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_BDBA263FDA0B1674_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C5571D63DA73BA41(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_C5571D63DA73BA41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_547B6833E0352D14(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFightMVPEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFightMVPEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFIGHTMVPENTITY_METHOD_4_547B6833E0352D14_OFFSET))(a1, a2);
		}
	};
}
