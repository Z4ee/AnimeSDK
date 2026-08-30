#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_0_16E4307DCC419505_103;
class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_FD51057495DB654F;
namespace System { class String; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CLICK_OFFSET UNITYSDK_OFFSET(0xE322C60)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xE322360)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xE322AE0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xE322850)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xE322710)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETICON_OFFSET UNITYSDK_OFFSET(0xE322B90)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETMATERIALCOLOR_OFFSET UNITYSDK_OFFSET(0xE322650)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xE322EC0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGround_TypeDefinitionIndex = 75397;

	class MonopolyGround : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_0_16E4307DCC419505_103* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Class_2_FD51057495DB654F* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_103*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_INITIALIZEVIEW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_7_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETICON_OFFSET))(this, a1);
		}

		::System::Void Method_7_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_7_735EE20B25F86BF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_METHOD_7_735EE20B25F86BF4_OFFSET))(this);
		}

		::System::Void SetMaterialColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_SETMATERIALCOLOR_OFFSET))(this, a1);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGROUND_CLICK_OFFSET))(this);
		}
	};
}
