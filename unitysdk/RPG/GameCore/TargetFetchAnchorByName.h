#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_13E254887146EE4E_OFFSET UNITYSDK_OFFSET(0x19D0B460)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_B9821B6D55DA0D78_OFFSET UNITYSDK_OFFSET(0x19D0B350)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_BDD1DB86D2737FF3_OFFSET UNITYSDK_OFFSET(0x19D04590)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_C59A4AFFDBEB1256_OFFSET UNITYSDK_OFFSET(0x19CF74B0)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF7460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchorByName_TypeDefinitionIndex = 22565;

	class TargetFetchAnchorByName : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* AnchorName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B9821B6D55DA0D78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_B9821B6D55DA0D78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C59A4AFFDBEB1256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_C59A4AFFDBEB1256_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BDD1DB86D2737FF3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_BDD1DB86D2737FF3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_13E254887146EE4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_13E254887146EE4E_OFFSET))(a1, a2);
		}
	};
}
