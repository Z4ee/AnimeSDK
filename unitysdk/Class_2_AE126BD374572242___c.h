#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_2_AE126BD374572242___C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16512EC0)
#define CLASS_2_AE126BD374572242___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16512E70)
#define CLASS_2_AE126BD374572242___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16512EB0)

inline static constexpr unsigned int Class_2_AE126BD374572242___c_TypeDefinitionIndex = 45175;

class Class_2_AE126BD374572242___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AE126BD374572242___c_TypeDefinitionIndex)->GetStaticField(0x48470);
	}
	static ::Class_2_AE126BD374572242___c** StaticGet___9()
	{
		return (::Class_2_AE126BD374572242___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_AE126BD374572242___c_TypeDefinitionIndex)->GetStaticField(0x48478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242___C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
