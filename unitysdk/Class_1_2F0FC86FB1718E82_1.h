#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_2656809D0E9B3F8B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

class Class_1_7B7FC057D30D5C12;
namespace Foundation { class IEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_067C05C97D4DCA1D_OFFSET UNITYSDK_OFFSET(0x15440D20)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_1592A3464372C978_OFFSET UNITYSDK_OFFSET(0x15440FF0)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_7290BC2163AB274D_1_OFFSET UNITYSDK_OFFSET(0x154407D0)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_7290BC2163AB274D_OFFSET UNITYSDK_OFFSET(0x15440670)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_87ADCD398A8B8A94_OFFSET UNITYSDK_OFFSET(0x15440590)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_A7B283833F70A602_OFFSET UNITYSDK_OFFSET(0x15440A80)
#define CLASS_1_2F0FC86FB1718E82_1_METHOD_1_E66A70839E44E915_OFFSET UNITYSDK_OFFSET(0x15440930)
#define CLASS_1_2F0FC86FB1718E82_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15441240)
#define CLASS_1_2F0FC86FB1718E82_1__CTOR_OFFSET UNITYSDK_OFFSET(0x154411B0)

inline static constexpr unsigned int Class_1_2F0FC86FB1718E82_1_TypeDefinitionIndex = 77021;

class Class_1_2F0FC86FB1718E82_1 : public ::System::Object
{
public:
	static ::Class_1_2F0FC86FB1718E82_1** StaticGet_Field_1_1()
	{
		return (::Class_1_2F0FC86FB1718E82_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F0FC86FB1718E82_1_TypeDefinitionIndex)->GetStaticField(0x3DBD0);
	}
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_4<::System::UInt32, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Action_2<::System::Single, ::System::Single>*>, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_87ADCD398A8B8A94(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::Class_1_7B7FC057D30D5C12*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::Class_1_7B7FC057D30D5C12*&))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_87ADCD398A8B8A94_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_7290BC2163AB274D(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_7290BC2163AB274D_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_7290BC2163AB274D_1(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_7290BC2163AB274D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E66A70839E44E915(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_E66A70839E44E915_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A7B283833F70A602(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Action_2<::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_A7B283833F70A602_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_067C05C97D4DCA1D(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_2C704E2262533CBD a3, ::System::Action_2<::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_067C05C97D4DCA1D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1592A3464372C978(::Foundation::IEntity* a1, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_2F0FC86FB1718E82_1_METHOD_1_1592A3464372C978_OFFSET))(this, a1, a2);
	}
};
