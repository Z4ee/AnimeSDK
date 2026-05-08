#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_3.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_011AF2E14064C658___C_METHOD_1_CF25A8E334D2A4E0_OFFSET UNITYSDK_OFFSET(0x12BE6E20)
#define CLASS_1_011AF2E14064C658___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BE6DD0)
#define CLASS_1_011AF2E14064C658___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE6E10)

inline static constexpr unsigned int Class_1_011AF2E14064C658___c_TypeDefinitionIndex = 47050;

class Class_1_011AF2E14064C658___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_3>** StaticGet___9__67_0()
	{
		return (::System::Comparison_1<::Struct_2_ABC67D4EFBF3BD9A_3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_011AF2E14064C658___c_TypeDefinitionIndex)->GetStaticField(0x3FF80);
	}
	static ::Class_1_011AF2E14064C658___c** StaticGet___9()
	{
		return (::Class_1_011AF2E14064C658___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_011AF2E14064C658___c_TypeDefinitionIndex)->GetStaticField(0x3FF88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CF25A8E334D2A4E0(::Struct_2_ABC67D4EFBF3BD9A_3 a1, ::Struct_2_ABC67D4EFBF3BD9A_3 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_ABC67D4EFBF3BD9A_3, ::Struct_2_ABC67D4EFBF3BD9A_3))((::PBYTE)hIl2Cpp + CLASS_1_011AF2E14064C658___C_METHOD_1_CF25A8E334D2A4E0_OFFSET))(this, a1, a2);
	}
};
