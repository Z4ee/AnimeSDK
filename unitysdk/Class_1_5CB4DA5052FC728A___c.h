#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_5CB4DA5052FC728A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x164BA330)
#define CLASS_1_5CB4DA5052FC728A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164BA370)
#define CLASS_1_5CB4DA5052FC728A___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET UNITYSDK_OFFSET(0x164BA380)

inline static constexpr unsigned int Class_1_5CB4DA5052FC728A___c_TypeDefinitionIndex = 31964;

class Class_1_5CB4DA5052FC728A___c : public ::System::Object
{
public:
	static ::Class_1_5CB4DA5052FC728A___c** StaticGet___9()
	{
		return (::Class_1_5CB4DA5052FC728A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB4DA5052FC728A___c_TypeDefinitionIndex)->GetStaticField(0x40980);
	}
	static ::System::Comparison_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CB4DA5052FC728A___c_TypeDefinitionIndex)->GetStaticField(0x40988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CB4DA5052FC728A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CB4DA5052FC728A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _LimitLogDirFileCount_b__0_0(::System::String* file1, ::System::String* file2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5CB4DA5052FC728A___C__LIMITLOGDIRFILECOUNT_B__0_0_OFFSET))(this, file1, file2);
	}
};
