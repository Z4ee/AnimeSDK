#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_035F5B45BC5767CE_OFFSET UNITYSDK_OFFSET(0x1DB375E0)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_142F93A8D23E4384_OFFSET UNITYSDK_OFFSET(0x1DB376D0)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_4A7340E012902302_OFFSET UNITYSDK_OFFSET(0x1DB37500)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_A690950A44E9B162_OFFSET UNITYSDK_OFFSET(0x1DB37680)
#define RPG_GAMECORE_TARGETFETCHPETPARTYROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB375D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchPetPartyRole_TypeDefinitionIndex = 17543;

	class TargetFetchPetPartyRole : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* RoleName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4A7340E012902302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPetPartyRole*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPetPartyRole*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_4A7340E012902302_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_035F5B45BC5767CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_035F5B45BC5767CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A690950A44E9B162(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPetPartyRole*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPetPartyRole*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_A690950A44E9B162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_142F93A8D23E4384(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchPetPartyRole* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchPetPartyRole*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPETPARTYROLE_METHOD_4_142F93A8D23E4384_OFFSET))(a1, a2);
		}
	};
}
