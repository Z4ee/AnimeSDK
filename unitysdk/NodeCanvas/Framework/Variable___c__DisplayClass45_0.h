#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Variable; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53C140)
#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__GETGETCONVERTER_B__0_OFFSET UNITYSDK_OFFSET(0x1D53C150)
#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__GETGETCONVERTER_B__1_OFFSET UNITYSDK_OFFSET(0x1D53C190)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable___c__DisplayClass45_0_TypeDefinitionIndex = 29163;

	class Variable___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Variable* __4__this; // 0x10
		::System::Func_2<::System::Object*, ::System::Object*>* converter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Object* _GetGetConverter_b__0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__GETGETCONVERTER_B__0_OFFSET))(this);
		}

		::System::Object* _GetGetConverter_b__1()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS45_0__GETGETCONVERTER_B__1_OFFSET))(this);
		}
	};
}
