#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_480;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE974AB0)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE974E20)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl_TypeDefinitionIndex = 49730;

	class TabHeaderImageControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_480*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x70
		::UnityEngine::Transform* _RedDotRoot; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_480*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_480*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
