#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Runtime/TabHeaderBaseControl_1.h"

class Class_0_16E4307DCC419505_398;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE929620)
#define SOFA_RUNTIME_TABHEADERIMAGECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE929A80)

namespace Sofa::Runtime
{
	inline static constexpr unsigned int TabHeaderImageControl_TypeDefinitionIndex = 50126;

	class TabHeaderImageControl : public ::Sofa::Runtime::TabHeaderBaseControl_1<::Class_0_16E4307DCC419505_398*>
	{
	public:
		::UnityEngine::UI::Image* _IconImage; // 0x58
		::UnityEngine::Transform* _RedDotRoot; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_398*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_0_16E4307DCC419505_398*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_TABHEADERIMAGECONTROL__BINDING_OFFSET))(this, a1);
		}
	};
}
