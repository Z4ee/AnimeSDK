#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDWaveMonster.h"

class Class_3_C93CC3D2C2AC4067;
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class MonsterCreateDataBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x1A055F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A056820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A056F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A055230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_SEARCHANCHORBYPREFIX_OFFSET UNITYSDK_OFFSET(0x1A055D50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1A0556F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0571B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1A057210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1A057250)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_2_OFFSET UNITYSDK_OFFSET(0x1A057370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_3_OFFSET UNITYSDK_OFFSET(0x1A0573A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_4_OFFSET UNITYSDK_OFFSET(0x1A0573B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_5_OFFSET UNITYSDK_OFFSET(0x1A0573C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_ACTIVEPRELOADMONSTER_OFFSET UNITYSDK_OFFSET(0x1A057410)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A0573D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A0574D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A0574E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_TRYCREATEMONSTER_OFFSET UNITYSDK_OFFSET(0x1A057400)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonsterPosRandom_TypeDefinitionIndex = 45037;

	class LDWaveMonsterPosRandom : public ::MoleMole::FlowCanvas::Nodes::LDWaveMonster
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* radiusInput; // 0x1B0
		::FlowCanvas::ValueInput_1<::System::Single>* angleRangeInput; // 0x1B8
		::Class_3_C93CC3D2C2AC4067* inputModelComponent; // 0x1C0
		::FlowCanvas::ValueInput_1<::System::Single>* minimumRadiusInput; // 0x1C8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* inputPosEntity; // 0x1D0
		::FlowCanvas::ValueInput_1<::System::String*>* anchorPosPrefixInput; // 0x1D8
		::System::Collections::Generic::HashSet_1<::System::Int32>* alreadySearchedSet; // 0x1E0
		::System::Boolean lastChooseLeft; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* createData, ::System::Boolean isPreload)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_TRYCREATEMONSTER_OFFSET))(this, createData, isPreload);
		}

		::System::Void ActivePreloadMonster(::MoleMole::Battle::Entity* entity, ::System::Int32 createIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_ACTIVEPRELOADMONSTER_OFFSET))(this, entity, createIndex);
		}

		::System::String* SearchAnchorByPrefix(::MoleMole::Battle::Entity* centerEntity, ::System::String* prefix, ::System::Single radius, ::System::Single angle, ::System::Single mininumRadius)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_SEARCHANCHORBYPREFIX_OFFSET))(this, centerEntity, prefix, radius, angle, mininumRadius);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_BEGIN_OFFSET))(this, f);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__8_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__8_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_2_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__8_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_3_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__8_4()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_4_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _RegisterPorts_b__8_5()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM__REGISTERPORTS_B__8_5_OFFSET))(this);
		}

		::System::Void __base_Begin(::FlowCanvas::Flow P0)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_BEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_TryCreateMonster(::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_TRYCREATEMONSTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ActivePreloadMonster(::MoleMole::Battle::Entity* P0, ::System::Int32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_ACTIVEPRELOADMONSTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWAVEMONSTERPOSRANDOM___BASE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
