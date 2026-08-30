#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class GenericDelegate; }
namespace IFix::Core { class GenericDelegateFactory__Create_c__AnonStorey0; }
namespace System { class Delegate; }
namespace System::Reflection { class MethodInfo; }

#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC61E10)
#define IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY2___M__0_OFFSET UNITYSDK_OFFSET(0x1CC62470)

namespace IFix::Core
{
	inline static constexpr unsigned int GenericDelegateFactory__Create_c__AnonStorey2_TypeDefinitionIndex = 10054;

	class GenericDelegateFactory__Create_c__AnonStorey2 : public ::System::Object
	{
	public:
		::IFix::Core::GenericDelegateFactory__Create_c__AnonStorey0* __f__ref_0; // 0x10
		::System::Reflection::MethodInfo* methodInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY2__CTOR_OFFSET))(this);
		}

		::System::Delegate* __m__0(::IFix::Core::GenericDelegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::IFix::Core::GenericDelegate*))((::PBYTE)hIl2Cpp + IFIX_CORE_GENERICDELEGATEFACTORY__CREATE_C__ANONSTOREY2___M__0_OFFSET))(this, a1);
		}
	};
}
