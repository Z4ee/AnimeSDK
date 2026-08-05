#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class GenericDelegate; }
namespace IFix::Core { class GenericDelegateFactory___c__DisplayClass4_0; }
namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_1__CREATE_B__6_OFFSET UNITYSDK_OFFSET(0x1E07EA10)
#define IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E07E6B0)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory___c__DisplayClass4_1_TypeDefinitionIndex = 6935;

	class GenericDelegateFactory___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* methodInfo; // 0x10
		::IFix::Core::GenericDelegateFactory___c__DisplayClass4_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Delegate* _Create_b__6(::IFix::Core::GenericDelegate* o)
		{
			return ((::System::Delegate*(*)(::PVOID, ::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY___C__DISPLAYCLASS4_1__CREATE_B__6_OFFSET))(this, o);
		}
	};
}
