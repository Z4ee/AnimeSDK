#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_484;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE975E00)
#define SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE976850)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageWithStatusControl_TypeDefinitionIndex = 49734;

	class TabHeaderImageWithStatusControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_484*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::UnityEngine::Transform* _LockedRoot; // 0x78
		::UnityEngine::Transform* _FinishedRoot; // 0x80
		::UnityEngine::Transform* _HintRoot; // 0x88
		::UnityEngine::Transform* _RedDotRoot; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_484*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_484*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGEWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
