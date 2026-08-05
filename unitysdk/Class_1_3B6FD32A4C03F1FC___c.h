#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_5A4916DD8A9945E4_1_OFFSET UNITYSDK_OFFSET(0x124F6C30)
#define CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_5A4916DD8A9945E4_OFFSET UNITYSDK_OFFSET(0x124F6C10)
#define CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x124F6CA0)
#define CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_F4BAA111CDCA9A64_OFFSET UNITYSDK_OFFSET(0x124F6C50)
#define CLASS_1_3B6FD32A4C03F1FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124F6BC0)
#define CLASS_1_3B6FD32A4C03F1FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124F6C00)

inline static constexpr unsigned int Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex = 60659;

class Class_1_3B6FD32A4C03F1FC___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__93_0()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex)->GetStaticField(0x3E420);
	}
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__93_1()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex)->GetStaticField(0x3E428);
	}
	static ::Class_1_3B6FD32A4C03F1FC___c** StaticGet___9()
	{
		return (::Class_1_3B6FD32A4C03F1FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex)->GetStaticField(0x3E430);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__141_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex)->GetStaticField(0x3E438);
	}
	static ::System::Func_2<::System::Int32, ::Enum_3_34F7035555410463_1>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::System::Int32, ::Enum_3_34F7035555410463_1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B6FD32A4C03F1FC___c_TypeDefinitionIndex)->GetStaticField(0x3E440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_5A4916DD8A9945E4(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_5A4916DD8A9945E4_OFFSET))(this, a1);
	}

	::System::String* Method_1_5A4916DD8A9945E4_1(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_5A4916DD8A9945E4_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F4BAA111CDCA9A64(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_F4BAA111CDCA9A64_OFFSET))(this, a1);
	}

	::Enum_3_34F7035555410463_1 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_34F7035555410463_1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3B6FD32A4C03F1FC___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}
};
