#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_8282431C7543F54D_OFFSET UNITYSDK_OFFSET(0x1D5AA920)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_8CA0371C76095050_OFFSET UNITYSDK_OFFSET(0x1D5AAA20)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_C46C96AAA9CDFCE8_OFFSET UNITYSDK_OFFSET(0x1D5AA9A0)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_EE3CFC16C9C93C5D_OFFSET UNITYSDK_OFFSET(0x1D5AAA00)
#define RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentInsertTurnSource_TypeDefinitionIndex = 23757;

	class TargetFetchCurrentInsertTurnSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8282431C7543F54D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_8282431C7543F54D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C46C96AAA9CDFCE8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_C46C96AAA9CDFCE8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EE3CFC16C9C93C5D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_EE3CFC16C9C93C5D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CA0371C76095050(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchCurrentInsertTurnSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTINSERTTURNSOURCE_METHOD_4_8CA0371C76095050_OFFSET))(a1, a2);
		}
	};
}
