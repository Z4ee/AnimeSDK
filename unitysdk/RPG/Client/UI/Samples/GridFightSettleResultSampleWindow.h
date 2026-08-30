#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_2F344C4E39EE9840;
namespace RPG::Client { class TabView; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xE3CE0A0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int GridFightSettleResultSampleWindow_TypeDefinitionIndex = 73357;

	class GridFightSettleResultSampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_1_2F344C4E39EE9840*>
	{
	public:
		::UnityEngine::GameObject* _BtnArrowLeft; // 0x58
		::UnityEngine::GameObject* _BtnArrowRight; // 0x60
		::RPG::Client::TabView* _TabView; // 0x68

		::System::Void _ctor(::Class_1_2F344C4E39EE9840* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2F344C4E39EE9840*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_GRIDFIGHTSETTLERESULTSAMPLEWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}
