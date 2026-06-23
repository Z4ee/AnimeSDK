#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define FOUNDATION_NAPSTRING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D8FAEA0)
#define FOUNDATION_NAPSTRING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FAEE0)
#define FOUNDATION_NAPSTRING___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1D8FAEF0)

namespace Foundation
{
	inline static constexpr unsigned int NapString___c_TypeDefinitionIndex = 7985;

	class NapString___c : public ::System::Object
	{
	public:
		static ::Foundation::NapString___c** StaticGet___9()
		{
			return (::Foundation::NapString___c**)Il2CppClass::FromTypeDefinitionIndex(NapString___c_TypeDefinitionIndex)->GetStaticField(0x67C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C__CTOR_OFFSET))(this);
		}

		::System::Text::StringBuilder* __cctor_b__42_0()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAPSTRING___C___CCTOR_B__42_0_OFFSET))(this);
		}
	};
}
