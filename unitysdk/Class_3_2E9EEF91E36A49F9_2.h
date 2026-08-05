#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x15C26010)
#define CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x15C261D0)
#define CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15C264F0)
#define CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15C26390)
#define CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CEDF6BBCD5E80888_OFFSET UNITYSDK_OFFSET(0x15C26420)
#define CLASS_3_2E9EEF91E36A49F9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15C25FD0)

inline static constexpr unsigned int Class_3_2E9EEF91E36A49F9_2_TypeDefinitionIndex = 65981;

class Class_3_2E9EEF91E36A49F9_2 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_3_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CEDF6BBCD5E80888(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CEDF6BBCD5E80888_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_2_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}
};
