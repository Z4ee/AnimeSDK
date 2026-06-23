#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0D520D2CDCF46134;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_3E0CF88A50D88B11_OFFSET UNITYSDK_OFFSET(0x10E3DA70)
#define CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E3DA20)
#define CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3DA60)

inline static constexpr unsigned int Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex = 56689;

class Class_3_A3DA8A1BA5F90835___c : public ::System::Object
{
public:
	static ::Class_3_A3DA8A1BA5F90835___c** StaticGet___9()
	{
		return (::Class_3_A3DA8A1BA5F90835___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x35790);
	}
	static ::System::Action_1<::Class_3_0D520D2CDCF46134*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_0D520D2CDCF46134*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A3DA8A1BA5F90835___c_TypeDefinitionIndex)->GetStaticField(0x35798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3E0CF88A50D88B11(::Class_3_0D520D2CDCF46134* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0D520D2CDCF46134*))((::PBYTE)hIl2Cpp + CLASS_3_A3DA8A1BA5F90835___C_METHOD_1_3E0CF88A50D88B11_OFFSET))(this, a1);
	}
};
