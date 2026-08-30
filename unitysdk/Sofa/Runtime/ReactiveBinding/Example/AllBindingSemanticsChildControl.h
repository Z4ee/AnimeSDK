#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_7C973A0AE523EBAC;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE920AC0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE920F40)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int AllBindingSemanticsChildControl_TypeDefinitionIndex = 50352;

	class AllBindingSemanticsChildControl : public ::Sofa::BaseSofaControl_1<::Class_1_7C973A0AE523EBAC*>
	{
	public:
		::UnityEngine::Transform* _Root; // 0x58
		::RPG::Client::LocalizedText* _CaptionText; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_7C973A0AE523EBAC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_7C973A0AE523EBAC*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_ALLBINDINGSEMANTICSCHILDCONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
