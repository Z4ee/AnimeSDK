#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_0_16E4307DCC419505_1291;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE402520)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE402BD0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagItemControl_TypeDefinitionIndex = 73425;

	class BagItemControl : public ::Sofa::BaseSofaControl_1<::Class_0_16E4307DCC419505_1291*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::RPG::Client::LocalizedText* _NameText; // 0x78
		::RPG::Client::LocalizedText* _CountText; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1291*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_1291*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
