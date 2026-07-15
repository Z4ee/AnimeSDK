#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETQUERY_METHOD_4_4521979BFBAD0286_OFFSET UNITYSDK_OFFSET(0x1D0C4980)
#define RPG_GAMECORE_TARGETQUERY_METHOD_4_81D1D2118B9DF1EC_OFFSET UNITYSDK_OFFSET(0x1D0C47A0)
#define RPG_GAMECORE_TARGETQUERY_METHOD_4_9DAB1C7B02413EEB_OFFSET UNITYSDK_OFFSET(0x1D0C46E0)
#define RPG_GAMECORE_TARGETQUERY_METHOD_4_A4EFB30FBD2C4CDC_OFFSET UNITYSDK_OFFSET(0x1D0C49F0)
#define RPG_GAMECORE_TARGETQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C4750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetQuery_TypeDefinitionIndex = 23116;

	class TargetQuery : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* Source; // 0x10
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x18
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28
		::RPG::GameCore::PredicateConfig* Predicate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DAB1C7B02413EEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetQuery*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetQuery*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_METHOD_4_9DAB1C7B02413EEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_81D1D2118B9DF1EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_METHOD_4_81D1D2118B9DF1EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4521979BFBAD0286(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_METHOD_4_4521979BFBAD0286_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A4EFB30FBD2C4CDC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetQuery* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetQuery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETQUERY_METHOD_4_A4EFB30FBD2C4CDC_OFFSET))(a1, a2);
		}
	};
}
