#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197DBE20)
#define SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197DC870)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextWithStatusControl_TypeDefinitionIndex = 50134;

	class TabHeaderTextWithStatusControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_401*>
	{
	public:
		::RPG::Client::LocalizedText* _LabelText; // 0x58
		::UnityEngine::Transform* _LockedRoot; // 0x60
		::UnityEngine::Transform* _FinishedRoot; // 0x68
		::UnityEngine::Transform* _HintRoot; // 0x70
		::UnityEngine::Transform* _RedDotRoot; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_401*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_401*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTWITHSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
