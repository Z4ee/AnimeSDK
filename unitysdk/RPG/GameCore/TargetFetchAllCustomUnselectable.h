#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_1B2A0A5B47952DF2_OFFSET UNITYSDK_OFFSET(0x1E16BA00)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_3B1D79A446B1AAF5_OFFSET UNITYSDK_OFFSET(0x1E16BA40)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_4BC600A25FF36778_OFFSET UNITYSDK_OFFSET(0x1E16BB90)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_86344203720E950D_OFFSET UNITYSDK_OFFSET(0x1E16BB60)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16BA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllCustomUnselectable_TypeDefinitionIndex = 23663;

	class TargetFetchAllCustomUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B2A0A5B47952DF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_1B2A0A5B47952DF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3B1D79A446B1AAF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_3B1D79A446B1AAF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_86344203720E950D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_86344203720E950D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4BC600A25FF36778(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_METHOD_4_4BC600A25FF36778_OFFSET))(a1, a2);
		}
	};
}
