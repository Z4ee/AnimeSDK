#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_E5D9BC1106EC23FE___C_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1658D320)
#define CLASS_2_E5D9BC1106EC23FE___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET UNITYSDK_OFFSET(0x1658D120)
#define CLASS_2_E5D9BC1106EC23FE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1658D0D0)
#define CLASS_2_E5D9BC1106EC23FE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1658D110)

inline static constexpr unsigned int Class_2_E5D9BC1106EC23FE___c_TypeDefinitionIndex = 78556;

class Class_2_E5D9BC1106EC23FE___c : public ::System::Object
{
public:
	static ::Class_2_E5D9BC1106EC23FE___c** StaticGet___9()
	{
		return (::Class_2_E5D9BC1106EC23FE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E5D9BC1106EC23FE___c_TypeDefinitionIndex)->GetStaticField(0x38560);
	}
	static ::System::Action** StaticGet___9__10_10()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E5D9BC1106EC23FE___c_TypeDefinitionIndex)->GetStaticField(0x38568);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__10_11()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E5D9BC1106EC23FE___c_TypeDefinitionIndex)->GetStaticField(0x38570);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E5D9BC1106EC23FE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D9BC1106EC23FE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_FB0EDEF64D42DFEF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E5D9BC1106EC23FE___C_METHOD_1_FB0EDEF64D42DFEF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5D9BC1106EC23FE___C_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}
};
