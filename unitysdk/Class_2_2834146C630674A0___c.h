#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_77D255857CC40452_1;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_2834146C630674A0___C_METHOD_1_BF523663C5477DEB_OFFSET UNITYSDK_OFFSET(0x10C754F0)
#define CLASS_2_2834146C630674A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C754A0)
#define CLASS_2_2834146C630674A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C754E0)

inline static constexpr unsigned int Class_2_2834146C630674A0___c_TypeDefinitionIndex = 82056;

class Class_2_2834146C630674A0___c : public ::System::Object
{
public:
	static ::Class_2_2834146C630674A0___c** StaticGet___9()
	{
		return (::Class_2_2834146C630674A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2834146C630674A0___c_TypeDefinitionIndex)->GetStaticField(0x46430);
	}
	static ::System::Comparison_1<::Class_1_77D255857CC40452_1*>** StaticGet___9__9_0()
	{
		return (::System::Comparison_1<::Class_1_77D255857CC40452_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2834146C630674A0___c_TypeDefinitionIndex)->GetStaticField(0x46438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF523663C5477DEB(::Class_1_77D255857CC40452_1* a1, ::Class_1_77D255857CC40452_1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_77D255857CC40452_1*, ::Class_1_77D255857CC40452_1*))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0___C_METHOD_1_BF523663C5477DEB_OFFSET))(this, a1, a2);
	}
};
