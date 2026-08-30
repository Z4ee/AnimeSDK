#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_400;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197D9C30)
#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197DA9D0)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageTextWithStatusControl_TypeDefinitionIndex = 50128;

	class TabHeaderImageTextWithStatusControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_400*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x58
		::RPG::Client::LocalizedText* _LabelText; // 0x60
		::UnityEngine::Transform* _LockedRoot; // 0x68
		::UnityEngine::Transform* _FinishedRoot; // 0x70
		::UnityEngine::Transform* _HintRoot; // 0x78
		::UnityEngine::Transform* _RedDotRoot; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_400*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_400*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
