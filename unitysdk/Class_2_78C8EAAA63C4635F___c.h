#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_78C8EAAA63C4635F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB8550)
#define CLASS_2_78C8EAAA63C4635F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB8590)
#define CLASS_2_78C8EAAA63C4635F___C__GETLAUNCHRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x18BB85A0)

inline static constexpr unsigned int Class_2_78C8EAAA63C4635F___c_TypeDefinitionIndex = 39708;

class Class_2_78C8EAAA63C4635F___c : public ::System::Object
{
public:
	static ::Class_2_78C8EAAA63C4635F___c** StaticGet___9()
	{
		return (::Class_2_78C8EAAA63C4635F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_78C8EAAA63C4635F___c_TypeDefinitionIndex)->GetStaticField(0x26C70);
	}
	static ::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>** StaticGet___9__8_0()
	{
		return (::System::Comparison_1<::Struct_2_FFCEEED483D7C73B>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_78C8EAAA63C4635F___c_TypeDefinitionIndex)->GetStaticField(0x26C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetLaunchResult_b__8_0(::Struct_2_FFCEEED483D7C73B a1, ::Struct_2_FFCEEED483D7C73B a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_FFCEEED483D7C73B, ::Struct_2_FFCEEED483D7C73B))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F___C__GETLAUNCHRESULT_B__8_0_OFFSET))(this, a1, a2);
	}
};
