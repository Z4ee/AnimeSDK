#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_0_16E4307DCC419505_1298;
class Class_1_2F344C4E39EE9840;
namespace RPG::Client { class TabView; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE410950)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleResultSampleWindow_TypeDefinitionIndex = 73461;

	class GridFightSettleResultSampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_0_16E4307DCC419505_1298*>
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x60
		::UnityEngine::GameObject* _BtnArrowRight; // 0x68
		::UnityEngine::GameObject* _BtnArrowLeft; // 0x70

		::System::Void _ctor(::Class_1_2F344C4E39EE9840* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2F344C4E39EE9840*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}
