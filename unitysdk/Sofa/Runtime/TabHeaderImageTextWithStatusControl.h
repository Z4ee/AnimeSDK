#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_482;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE974F20)
#define SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE975BB0)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageTextWithStatusControl_TypeDefinitionIndex = 49732;

	class TabHeaderImageTextWithStatusControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_482*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::RPG::Client::LocalizedText* _LabelText; // 0x78
		::UnityEngine::Transform* _LockedRoot; // 0x80
		::UnityEngine::Transform* _FinishedRoot; // 0x88
		::UnityEngine::Transform* _HintRoot; // 0x90
		::UnityEngine::Transform* _RedDotRoot; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_482*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_482*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGETEXTWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
