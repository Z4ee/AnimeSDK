#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_9FE8AEA7686E2A0B;
namespace RPG::Client { class TabView; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1DDC0B70)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x1DDC0C10)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC0FD0)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleReactiveControl_TypeDefinitionIndex = 73359;

	class TabViewSampleReactiveControl : public ::Sofa::BaseSofaControl_1<::Class_1_9FE8AEA7686E2A0B*>
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_9FE8AEA7686E2A0B*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_9FE8AEA7686E2A0B*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLEREACTIVECONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
