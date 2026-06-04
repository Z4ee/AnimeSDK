#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_14E3FCD862E87C6E_OFFSET UNITYSDK_OFFSET(0x19D056B0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_4363DB4F37D2D1DE_OFFSET UNITYSDK_OFFSET(0x19CF9190)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_C093BBF260B30CDC_OFFSET UNITYSDK_OFFSET(0x19D0CA10)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_CBA3CCA4D3A99D4E_OFFSET UNITYSDK_OFFSET(0x19D0CAD0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeAllTargets_TypeDefinitionIndex = 22623;

	class TargetFetchElationTimeAllTargets : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C093BBF260B30CDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_C093BBF260B30CDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4363DB4F37D2D1DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_4363DB4F37D2D1DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_14E3FCD862E87C6E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_14E3FCD862E87C6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CBA3CCA4D3A99D4E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchElationTimeAllTargets* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchElationTimeAllTargets*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_CBA3CCA4D3A99D4E_OFFSET))(a1, a2);
		}
	};
}
