#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_AB9B9E71B0D7294E_OFFSET UNITYSDK_OFFSET(0x13FEB6E0)
#define CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_DB0D23A9175AE8ED_OFFSET UNITYSDK_OFFSET(0x13FEB740)
#define CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13FEB650)
#define CLASS_2_F42D9A1D1AD1A61F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13FEB600)
#define CLASS_2_F42D9A1D1AD1A61F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEB640)

inline static constexpr unsigned int Class_2_F42D9A1D1AD1A61F___c_TypeDefinitionIndex = 51141;

class Class_2_F42D9A1D1AD1A61F___c : public ::System::Object
{
public:
	static ::Class_2_F42D9A1D1AD1A61F___c** StaticGet___9()
	{
		return (::Class_2_F42D9A1D1AD1A61F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F42D9A1D1AD1A61F___c_TypeDefinitionIndex)->GetStaticField(0x4B7C0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__31_5()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F42D9A1D1AD1A61F___c_TypeDefinitionIndex)->GetStaticField(0x4B7C8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__31_28()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F42D9A1D1AD1A61F___c_TypeDefinitionIndex)->GetStaticField(0x4B7D0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__31_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F42D9A1D1AD1A61F___c_TypeDefinitionIndex)->GetStaticField(0x4B7D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F42D9A1D1AD1A61F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F42D9A1D1AD1A61F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::String* Method_1_AB9B9E71B0D7294E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_AB9B9E71B0D7294E_OFFSET))(this);
	}

	::System::String* Method_1_DB0D23A9175AE8ED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F42D9A1D1AD1A61F___C_METHOD_1_DB0D23A9175AE8ED_OFFSET))(this);
	}
};
