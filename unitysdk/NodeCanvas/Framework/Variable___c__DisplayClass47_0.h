#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Variable; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9B6A0)
#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__GETSETCONVERTER_B__0_OFFSET UNITYSDK_OFFSET(0x1DB9B6B0)
#define NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__GETSETCONVERTER_B__1_OFFSET UNITYSDK_OFFSET(0x1DB9B6F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Variable___c__DisplayClass47_0_TypeDefinitionIndex = 29164;

	class Variable___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Variable* __4__this; // 0x10
		::System::Func_2<::System::Object*, ::System::Object*>* converter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetSetConverter_b__0(::System::Object* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__GETSETCONVERTER_B__0_OFFSET))(this, x);
		}

		::System::Void _GetSetConverter_b__1(::System::Object* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_VARIABLE___C__DISPLAYCLASS47_0__GETSETCONVERTER_B__1_OFFSET))(this, x);
		}
	};
}
