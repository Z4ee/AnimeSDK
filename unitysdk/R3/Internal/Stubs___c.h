#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"

#define R3_INTERNAL_STUBS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBA450)
#define R3_INTERNAL_STUBS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBA490)
#define R3_INTERNAL_STUBS___C___CCTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EFBA4A0)

namespace R3::Internal
{
	inline static constexpr unsigned int Stubs___c_TypeDefinitionIndex = 35289;

	class Stubs___c : public ::System::Object
	{
	public:
		static ::R3::Internal::Stubs___c** StaticGet___9()
		{
			return (::R3::Internal::Stubs___c**)Il2CppClass::FromTypeDefinitionIndex(Stubs___c_TypeDefinitionIndex)->GetStaticField(0xD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__1_0(::R3::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::R3::Result))((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS___C___CCTOR_B__1_0_OFFSET))(this, a1);
		}
	};
}
