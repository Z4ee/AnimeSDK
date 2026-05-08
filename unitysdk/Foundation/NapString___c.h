#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define FOUNDATION_NAPSTRING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B471370)
#define FOUNDATION_NAPSTRING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4713B0)
#define FOUNDATION_NAPSTRING___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1B4713C0)

namespace Foundation
{
	inline static constexpr unsigned int NapString___c_TypeDefinitionIndex = 8133;

	class NapString___c : public ::System::Object
	{
	public:
		static ::Foundation::NapString___c** StaticGet___9()
		{
			return (::Foundation::NapString___c**)Il2CppClass::FromTypeDefinitionIndex(NapString___c_TypeDefinitionIndex)->GetStaticField(0x6790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CTOR_OFFSET))(this);
		}

		::System::Text::StringBuilder* __cctor_b__37_0()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C___CCTOR_B__37_0_OFFSET))(this);
		}
	};
}
