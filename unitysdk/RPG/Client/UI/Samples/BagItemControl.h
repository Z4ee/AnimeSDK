#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_4D3F3A9A29F5DD81;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x1DDBCF10)
#define RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBD6B0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagItemControl_TypeDefinitionIndex = 73329;

	class BagItemControl : public ::Sofa::BaseSofaControl_1<::Class_1_4D3F3A9A29F5DD81*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x58
		::RPG::Client::LocalizedText* _NameText; // 0x60
		::RPG::Client::LocalizedText* _CountText; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_4D3F3A9A29F5DD81*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_4D3F3A9A29F5DD81*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGITEMCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
