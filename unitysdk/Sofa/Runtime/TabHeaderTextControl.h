#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_399;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERTEXTCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0x197DB8E0)
#define SOFA_RUNTIME_TABHEADERTEXTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x197DBC50)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderTextControl_TypeDefinitionIndex = 50132;

	class TabHeaderTextControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_399*>
	{
	public:
		::RPG::Client::LocalizedText* _LabelText; // 0x58
		::UnityEngine::Transform* _RedDotRoot; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_399*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_399*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERTEXTCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
