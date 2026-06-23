#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Project::Config { class EnemyWaveInformTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedGetEnemyMonsterList_Element_TypeDefinitionIndex = 83199;

	struct alignas(8) LDTurnBasedGetEnemyMonsterList_Element
	{
		::System::Int32 Wave; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Project::Config::EnemyWaveInformTemplateExt*>* Enemies; // 0x18

		::System::Void _ctor(::System::Int32 wave, ::System::Collections::Generic::List_1<::MoleMole::Project::Config::EnemyWaveInformTemplateExt*>* enemies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Project::Config::EnemyWaveInformTemplateExt*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDGETENEMYMONSTERLIST_ELEMENT__CTOR_OFFSET))(this, wave, enemies);
		}
	};
}
