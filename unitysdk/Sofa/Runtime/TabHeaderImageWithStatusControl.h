#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_402;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197DAC20)
#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197DB780)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageWithStatusControl_TypeDefinitionIndex = 50130;

	class TabHeaderImageWithStatusControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_402*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x58
		::UnityEngine::Transform* _LockedRoot; // 0x60
		::UnityEngine::Transform* _FinishedRoot; // 0x68
		::UnityEngine::Transform* _HintRoot; // 0x70
		::UnityEngine::Transform* _RedDotRoot; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_402*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_402*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
