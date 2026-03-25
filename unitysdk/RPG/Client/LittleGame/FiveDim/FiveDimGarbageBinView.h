#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimPropView.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_47EE63CB5C4DC8FC_5;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x9A01AB0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A013A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_47EFDF992485ECD9_OFFSET UNITYSDK_OFFSET(0x9A015B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x9A01BF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET UNITYSDK_OFFSET(0x9A01870)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9A01D20)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x9A01D80)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9A01D60)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x9A01D70)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGarbageBinView_TypeDefinitionIndex = 62845;

	class FiveDimGarbageBinView : public ::RPG::Client::LittleGame::FiveDim::FiveDimPropView
	{
	public:
		::UnityEngine::BoxCollider* GarbageBinMainCollider; // 0x1C0
		::UnityEngine::Vector3 Field_8_1; // 0x1C8
		::UnityEngine::Vector3 Field_8_2; // 0x1D4
		::System::Boolean Field_8_3; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_RELEASE_OFFSET))(this, a1);
		}

		::System::Boolean GetViewBound(::UnityEngine::Bounds& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_GETVIEWBOUND_OFFSET))(this, a1);
		}

		::System::Void Method_8_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_8_47EFDF992485ECD9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW_METHOD_8_47EFDF992485ECD9_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Initialize(::Entitas::IContext* P0, ::Class_1_47EE63CB5C4DC8FC_5* P1, ::Entitas::IEntity* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_INITIALIZE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Release(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_RELEASE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_GetViewBound(::UnityEngine::Bounds& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGARBAGEBINVIEW___IFIXBASEPROXY_GETVIEWBOUND_OFFSET))(this, P0);
		}
	};
}
