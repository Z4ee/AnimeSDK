#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow_1.h"

class Class_1_9FDDE2816948DE8F;
namespace RPG::Client { class ListView; }

#define RPG_CLIENT_UI_SAMPLES_BAGSAMPLEWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBD7A0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int BagSampleWindow_TypeDefinitionIndex = 73333;

	class BagSampleWindow : public ::Sofa::BaseSofaWindow_1<::Class_1_9FDDE2816948DE8F*>
	{
	public:
		::RPG::Client::ListView* _ListView; // 0x58

		::System::Void _ctor(::Class_1_9FDDE2816948DE8F* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9FDDE2816948DE8F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_BAGSAMPLEWINDOW__CTOR_OFFSET))(this, a1);
		}
	};
}
