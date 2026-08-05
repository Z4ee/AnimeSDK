#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6EC930B690591576_Class_1_EA06DA1092863621;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2D53CF93FACDB850___C_METHOD_1_1355FC5CC209A4E8_OFFSET UNITYSDK_OFFSET(0x141D6300)
#define CLASS_1_2D53CF93FACDB850___C_METHOD_1_295B0FA1282F1A6E_OFFSET UNITYSDK_OFFSET(0x141D64C0)
#define CLASS_1_2D53CF93FACDB850___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141D62B0)
#define CLASS_1_2D53CF93FACDB850___C__CTOR_OFFSET UNITYSDK_OFFSET(0x141D62F0)

inline static constexpr unsigned int Class_1_2D53CF93FACDB850___c_TypeDefinitionIndex = 43335;

class Class_1_2D53CF93FACDB850___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D53CF93FACDB850___c_TypeDefinitionIndex)->GetStaticField(0x4B630);
	}
	static ::Class_1_2D53CF93FACDB850___c** StaticGet___9()
	{
		return (::Class_1_2D53CF93FACDB850___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D53CF93FACDB850___c_TypeDefinitionIndex)->GetStaticField(0x4B638);
	}
	static ::System::Action_1<::System::String*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D53CF93FACDB850___c_TypeDefinitionIndex)->GetStaticField(0x4B640);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1355FC5CC209A4E8(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>*))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850___C_METHOD_1_1355FC5CC209A4E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_295B0FA1282F1A6E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2D53CF93FACDB850___C_METHOD_1_295B0FA1282F1A6E_OFFSET))(this, a1);
	}
};
