#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define FOUNDATION_STRINGX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF832F0)
#define FOUNDATION_STRINGX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF83330)
#define FOUNDATION_STRINGX___C__INVERTCASE_B__21_0_OFFSET UNITYSDK_OFFSET(0x1EF83340)

namespace Foundation
{
	inline static constexpr unsigned int StringX___c_TypeDefinitionIndex = 8222;

	class StringX___c : public ::System::Object
	{
	public:
		static ::Foundation::StringX___c** StaticGet___9()
		{
			return (::Foundation::StringX___c**)Il2CppClass::FromTypeDefinitionIndex(StringX___c_TypeDefinitionIndex)->GetStaticField(0x6AD0);
		}
		static ::System::Func_2<::System::Char, ::System::Char>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Char, ::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(StringX___c_TypeDefinitionIndex)->GetStaticField(0x6AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX___C__CTOR_OFFSET))(this);
		}

		::System::Char _InvertCase_b__21_0(::System::Char c)
		{
			return ((::System::Char(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGX___C__INVERTCASE_B__21_0_OFFSET))(this, c);
		}
	};
}
