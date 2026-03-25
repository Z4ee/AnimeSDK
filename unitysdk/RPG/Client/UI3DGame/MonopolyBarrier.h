#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_85;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_9850514C0F89B91A;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xA655C80)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_METHOD_7_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xA655D00)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETICON_OFFSET UNITYSDK_OFFSET(0xA655E50)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETMATERIALCOLOR_OFFSET UNITYSDK_OFFSET(0xA655F20)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA655FE0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER___IFIXBASEPROXY_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xA655FF0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyBarrier_TypeDefinitionIndex = 61842;

	class MonopolyBarrier : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_85* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_9850514C0F89B91A* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_METHOD_7_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETICON_OFFSET))(this, a1);
		}

		::System::Void SetMaterialColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETMATERIALCOLOR_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitializeView(::Class_0_16E4307DCC419505_85* P0, ::Class_1_47EE63CB5C4DC8FC_5* P1, ::Class_2_9850514C0F89B91A* P2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_85*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER___IFIXBASEPROXY_INITIALIZEVIEW_OFFSET))(this, P0, P1, P2);
		}
	};
}
