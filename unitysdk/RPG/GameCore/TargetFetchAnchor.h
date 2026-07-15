#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_18C6BDACD3FA2AB0_OFFSET UNITYSDK_OFFSET(0x1D0B7540)
#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_343148CD744D8098_OFFSET UNITYSDK_OFFSET(0x1D0B7680)
#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_57F7E1633B2877D8_OFFSET UNITYSDK_OFFSET(0x1D0B75A0)
#define RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_E25061A1A89060AB_OFFSET UNITYSDK_OFFSET(0x1D0B76D0)
#define RPG_GAMECORE_TARGETFETCHANCHOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B7590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchor_TypeDefinitionIndex = 23027;

	class TargetFetchAnchor : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 GroupInstanceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_18C6BDACD3FA2AB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_18C6BDACD3FA2AB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57F7E1633B2877D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_57F7E1633B2877D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_343148CD744D8098(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_343148CD744D8098_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E25061A1A89060AB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchor* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHOR_METHOD_4_E25061A1A89060AB_OFFSET))(a1, a2);
		}
	};
}
