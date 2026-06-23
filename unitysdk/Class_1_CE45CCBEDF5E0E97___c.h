#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06C40FD353242AA8;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_CE45CCBEDF5E0E97___C_METHOD_1_8E8225D5C438C827_OFFSET UNITYSDK_OFFSET(0x13198AE0)
#define CLASS_1_CE45CCBEDF5E0E97___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13198A90)
#define CLASS_1_CE45CCBEDF5E0E97___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13198AD0)

inline static constexpr unsigned int Class_1_CE45CCBEDF5E0E97___c_TypeDefinitionIndex = 64029;

class Class_1_CE45CCBEDF5E0E97___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_06C40FD353242AA8*>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::Class_1_06C40FD353242AA8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE45CCBEDF5E0E97___c_TypeDefinitionIndex)->GetStaticField(0x3DDB0);
	}
	static ::Class_1_CE45CCBEDF5E0E97___c** StaticGet___9()
	{
		return (::Class_1_CE45CCBEDF5E0E97___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CE45CCBEDF5E0E97___c_TypeDefinitionIndex)->GetStaticField(0x3DDB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CE45CCBEDF5E0E97___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE45CCBEDF5E0E97___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_8E8225D5C438C827(::Class_1_06C40FD353242AA8* a1, ::Class_1_06C40FD353242AA8* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_06C40FD353242AA8*, ::Class_1_06C40FD353242AA8*))((::PBYTE)hIl2Cpp + CLASS_1_CE45CCBEDF5E0E97___C_METHOD_1_8E8225D5C438C827_OFFSET))(this, a1, a2);
	}
};
