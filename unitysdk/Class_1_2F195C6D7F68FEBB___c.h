#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FD0C1FDFC981C0D8;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_2F195C6D7F68FEBB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A7BCC0)
#define CLASS_1_2F195C6D7F68FEBB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12A7BCF0)
#define CLASS_1_2F195C6D7F68FEBB___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x12A7BD00)

inline static constexpr unsigned int Class_1_2F195C6D7F68FEBB___c_TypeDefinitionIndex = 68844;

class Class_1_2F195C6D7F68FEBB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_FD0C1FDFC981C0D8*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_FD0C1FDFC981C0D8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F195C6D7F68FEBB___c_TypeDefinitionIndex)->GetStaticField(0x40B70);
	}
	static ::Class_1_2F195C6D7F68FEBB___c** StaticGet___9()
	{
		return (::Class_1_2F195C6D7F68FEBB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F195C6D7F68FEBB___c_TypeDefinitionIndex)->GetStaticField(0x40B78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CollectNavNodesAfterMerge_b__15_0(::Class_1_FD0C1FDFC981C0D8* left, ::Class_1_FD0C1FDFC981C0D8* right)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_FD0C1FDFC981C0D8*, ::Class_1_FD0C1FDFC981C0D8*))((::PBYTE)hIl2Cpp + CLASS_1_2F195C6D7F68FEBB___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET))(this, left, right);
	}
};
