#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_9975CFA1FCE5825E_OFFSET UNITYSDK_OFFSET(0x1E16C7E0)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_B851E4F934F3F2B5_OFFSET UNITYSDK_OFFSET(0x1E16C830)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_C59A4AFFDBEB1256_OFFSET UNITYSDK_OFFSET(0x1E16C760)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_EF200E4400ABE48A_OFFSET UNITYSDK_OFFSET(0x1E16C690)
#define RPG_GAMECORE_TARGETFETCHANCHORBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16C750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAnchorByName_TypeDefinitionIndex = 23608;

	class TargetFetchAnchorByName : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicString* AnchorName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EF200E4400ABE48A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_EF200E4400ABE48A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C59A4AFFDBEB1256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_C59A4AFFDBEB1256_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9975CFA1FCE5825E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_9975CFA1FCE5825E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B851E4F934F3F2B5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAnchorByName* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAnchorByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHANCHORBYNAME_METHOD_4_B851E4F934F3F2B5_OFFSET))(a1, a2);
		}
	};
}
