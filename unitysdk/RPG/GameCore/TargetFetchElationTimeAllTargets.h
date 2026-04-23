#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_4363DB4F37D2D1DE_OFFSET UNITYSDK_OFFSET(0x18EDCDE0)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS_METHOD_4_C093BBF260B30CDC_OFFSET UNITYSDK_OFFSET(0x18EE4160)
#define RPG_GAMECORE_TARGETFETCHELATIONTIMEALLTARGETS__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDCD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchElationTimeAllTargets_TypeDefinitionIndex = 22932;

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
	};
}
