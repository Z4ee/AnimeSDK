#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AC69624123CC196F_Struct_2_88AA0FD3774559B2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AC69624123CC196F_METHOD_1_083FBD0B9A8FC42C_OFFSET UNITYSDK_OFFSET(0x90D7920)
#define CLASS_1_AC69624123CC196F_METHOD_1_084F46A2F5C54C00_OFFSET UNITYSDK_OFFSET(0x90D7F80)
#define CLASS_1_AC69624123CC196F_METHOD_1_3F0ECD90682EBE12_OFFSET UNITYSDK_OFFSET(0x90D7B10)
#define CLASS_1_AC69624123CC196F_METHOD_1_6044DE137CAC4D46_OFFSET UNITYSDK_OFFSET(0x90D7660)
#define CLASS_1_AC69624123CC196F_METHOD_1_C47FE8990A1CD51C_OFFSET UNITYSDK_OFFSET(0x90D80C0)
#define CLASS_1_AC69624123CC196F__CCTOR_OFFSET UNITYSDK_OFFSET(0x90D81F0)
#define CLASS_1_AC69624123CC196F__CTOR_OFFSET UNITYSDK_OFFSET(0x90D81E0)

inline static constexpr unsigned int Class_1_AC69624123CC196F_TypeDefinitionIndex = 45355;

class Class_1_AC69624123CC196F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AC69624123CC196F_Struct_2_88AA0FD3774559B2>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AC69624123CC196F_Struct_2_88AA0FD3774559B2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC69624123CC196F_TypeDefinitionIndex)->GetStaticField(0x5FC40);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC69624123CC196F_TypeDefinitionIndex)->GetStaticField(0x10420);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6044DE137CAC4D46(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F_METHOD_1_6044DE137CAC4D46_OFFSET))(a1);
	}

	static ::EnviromentSystem::EnviromentProfile* Method_1_084F46A2F5C54C00(::System::String* a1)
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F_METHOD_1_084F46A2F5C54C00_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_299* Method_1_C47FE8990A1CD51C(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_299*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F_METHOD_1_C47FE8990A1CD51C_OFFSET))(a1);
	}

	static ::System::Void Method_1_3F0ECD90682EBE12(::System::String* a1, ::EnviromentSystem::EnviromentProfile* a2)
	{
		return ((::System::Void(*)(::System::String*, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F_METHOD_1_3F0ECD90682EBE12_OFFSET))(a1, a2);
	}

	static ::EnviromentSystem::EnviromentProfile* Method_1_083FBD0B9A8FC42C(::System::String* a1)
	{
		return ((::EnviromentSystem::EnviromentProfile*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC69624123CC196F_METHOD_1_083FBD0B9A8FC42C_OFFSET))(a1);
	}
};
