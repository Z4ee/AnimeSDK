#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MaterialBlockEffectBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D5012BC296A9375A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A76720)
#define CLASS_1_D5012BC296A9375A_METHOD_1_2C59F8EEF13BB7E2_OFFSET UNITYSDK_OFFSET(0x13A76540)
#define CLASS_1_D5012BC296A9375A_METHOD_1_36D5D209766BFF21_OFFSET UNITYSDK_OFFSET(0x13A763E0)
#define CLASS_1_D5012BC296A9375A_METHOD_1_5214ACF21A6E25E2_OFFSET UNITYSDK_OFFSET(0x13A76650)
#define CLASS_1_D5012BC296A9375A_METHOD_1_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x13A76370)
#define CLASS_1_D5012BC296A9375A__CTOR_OFFSET UNITYSDK_OFFSET(0x13A767B0)

inline static constexpr unsigned int Class_1_D5012BC296A9375A_TypeDefinitionIndex = 66069;

class Class_1_D5012BC296A9375A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MaterialBlockEffectBase*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A_METHOD_1_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_1_36D5D209766BFF21(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A_METHOD_1_36D5D209766BFF21_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C59F8EEF13BB7E2(::RPG::Client::MaterialBlockEffectBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MaterialBlockEffectBase*))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A_METHOD_1_2C59F8EEF13BB7E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5214ACF21A6E25E2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A_METHOD_1_5214ACF21A6E25E2_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5012BC296A9375A_DISPOSE_OFFSET))(this);
	}
};
