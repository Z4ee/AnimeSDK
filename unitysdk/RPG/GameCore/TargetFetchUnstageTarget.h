#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_0F76D30B5DD42ED1_OFFSET UNITYSDK_OFFSET(0x1E1B8120)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_6A8CDFA452A83894_OFFSET UNITYSDK_OFFSET(0x1E1B8060)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_828CBD1C55A7DFEF_OFFSET UNITYSDK_OFFSET(0x1E1B81F0)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_91AD260443483890_OFFSET UNITYSDK_OFFSET(0x1E1B81C0)
#define RPG_GAMECORE_TARGETFETCHUNSTAGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B8110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchUnstageTarget_TypeDefinitionIndex = 23698;

	class TargetFetchUnstageTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::String* ReasonKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6A8CDFA452A83894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_6A8CDFA452A83894_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F76D30B5DD42ED1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_0F76D30B5DD42ED1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91AD260443483890(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_91AD260443483890_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_828CBD1C55A7DFEF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchUnstageTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchUnstageTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHUNSTAGETARGET_METHOD_4_828CBD1C55A7DFEF_OFFSET))(a1, a2);
		}
	};
}
