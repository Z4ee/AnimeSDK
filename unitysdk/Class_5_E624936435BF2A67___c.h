#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5139B0F7496B8379_5;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_5_E624936435BF2A67___C_METHOD_1_C182346378132F07_OFFSET UNITYSDK_OFFSET(0x17598B10)
#define CLASS_5_E624936435BF2A67___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17598AC0)
#define CLASS_5_E624936435BF2A67___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17598B00)

inline static constexpr unsigned int Class_5_E624936435BF2A67___c_TypeDefinitionIndex = 55648;

class Class_5_E624936435BF2A67___c : public ::System::Object
{
public:
	static ::Class_5_E624936435BF2A67___c** StaticGet___9()
	{
		return (::Class_5_E624936435BF2A67___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_E624936435BF2A67___c_TypeDefinitionIndex)->GetStaticField(0x3F860);
	}
	static ::System::Comparison_1<::Class_3_5139B0F7496B8379_5*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::Class_3_5139B0F7496B8379_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_E624936435BF2A67___c_TypeDefinitionIndex)->GetStaticField(0x3F868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_E624936435BF2A67___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E624936435BF2A67___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C182346378132F07(::Class_3_5139B0F7496B8379_5* a1, ::Class_3_5139B0F7496B8379_5* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_3_5139B0F7496B8379_5*, ::Class_3_5139B0F7496B8379_5*))((::PBYTE)hIl2Cpp + CLASS_5_E624936435BF2A67___C_METHOD_1_C182346378132F07_OFFSET))(this, a1, a2);
	}
};
