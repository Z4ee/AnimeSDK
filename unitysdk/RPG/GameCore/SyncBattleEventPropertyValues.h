#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_METHOD_3_46D25371642EB622_OFFSET UNITYSDK_OFFSET(0x1D5993C0)
#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_METHOD_3_F14D3939EBAE8699_OFFSET UNITYSDK_OFFSET(0x1D599380)
#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5993B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncBattleEventPropertyValues_TypeDefinitionIndex = 22259;

	class SyncBattleEventPropertyValues : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PropertyFromTarget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F14D3939EBAE8699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncBattleEventPropertyValues*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncBattleEventPropertyValues*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_METHOD_3_F14D3939EBAE8699_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_46D25371642EB622(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncBattleEventPropertyValues* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncBattleEventPropertyValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_METHOD_3_46D25371642EB622_OFFSET))(a1, a2);
		}
	};
}
