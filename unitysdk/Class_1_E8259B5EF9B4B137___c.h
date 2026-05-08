#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E8259B5EF9B4B137___C_METHOD_1_4CCB1A99365A76BE_OFFSET UNITYSDK_OFFSET(0x18372430)
#define CLASS_1_E8259B5EF9B4B137___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x183723E0)
#define CLASS_1_E8259B5EF9B4B137___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18372420)

inline static constexpr unsigned int Class_1_E8259B5EF9B4B137___c_TypeDefinitionIndex = 61275;

class Class_1_E8259B5EF9B4B137___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8259B5EF9B4B137___c_TypeDefinitionIndex)->GetStaticField(0x2AB20);
	}
	static ::Class_1_E8259B5EF9B4B137___c** StaticGet___9()
	{
		return (::Class_1_E8259B5EF9B4B137___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E8259B5EF9B4B137___c_TypeDefinitionIndex)->GetStaticField(0x2AB28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E8259B5EF9B4B137___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8259B5EF9B4B137___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_4CCB1A99365A76BE(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E8259B5EF9B4B137___C_METHOD_1_4CCB1A99365A76BE_OFFSET))(this, a1, a2);
	}
};
