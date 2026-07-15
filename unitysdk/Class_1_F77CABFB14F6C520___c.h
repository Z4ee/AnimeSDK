#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5D9B913D6FFF7638;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_F77CABFB14F6C520___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F979D0)
#define CLASS_1_F77CABFB14F6C520___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18F97A00)
#define CLASS_1_F77CABFB14F6C520___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x18F97A10)

inline static constexpr unsigned int Class_1_F77CABFB14F6C520___c_TypeDefinitionIndex = 71179;

class Class_1_F77CABFB14F6C520___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_5D9B913D6FFF7638*>** StaticGet___9__15_0()
	{
		return (::System::Comparison_1<::Class_1_5D9B913D6FFF7638*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F77CABFB14F6C520___c_TypeDefinitionIndex)->GetStaticField(0x9D10);
	}
	static ::Class_1_F77CABFB14F6C520___c** StaticGet___9()
	{
		return (::Class_1_F77CABFB14F6C520___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F77CABFB14F6C520___c_TypeDefinitionIndex)->GetStaticField(0x9D18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CollectNavNodesAfterMerge_b__15_0(::Class_1_5D9B913D6FFF7638* a1, ::Class_1_5D9B913D6FFF7638* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_5D9B913D6FFF7638*, ::Class_1_5D9B913D6FFF7638*))((::PBYTE)hIl2Cpp + CLASS_1_F77CABFB14F6C520___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET))(this, a1, a2);
	}
};
