#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0x16FEE170)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_METHOD_7_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x16FEE1F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETICON_OFFSET UNITYSDK_OFFSET(0x16FEE330)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_SETMATERIALCOLOR_OFFSET UNITYSDK_OFFSET(0x16FEE400)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEE4C0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyBarrier_TypeDefinitionIndex = 72087;

	class MonopolyBarrier : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBARRIER_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
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
	};
}
