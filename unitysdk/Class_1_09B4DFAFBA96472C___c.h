#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3E7861A5123BFC05;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_09B4DFAFBA96472C___C_METHOD_1_38976E0A69E00959_OFFSET UNITYSDK_OFFSET(0x15FEC8B0)
#define CLASS_1_09B4DFAFBA96472C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FEC860)
#define CLASS_1_09B4DFAFBA96472C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEC8A0)

inline static constexpr unsigned int Class_1_09B4DFAFBA96472C___c_TypeDefinitionIndex = 72968;

class Class_1_09B4DFAFBA96472C___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_3E7861A5123BFC05*>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::Class_1_3E7861A5123BFC05*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09B4DFAFBA96472C___c_TypeDefinitionIndex)->GetStaticField(0x327F0);
	}
	static ::Class_1_09B4DFAFBA96472C___c** StaticGet___9()
	{
		return (::Class_1_09B4DFAFBA96472C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_09B4DFAFBA96472C___c_TypeDefinitionIndex)->GetStaticField(0x327F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_09B4DFAFBA96472C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09B4DFAFBA96472C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_38976E0A69E00959(::Class_1_3E7861A5123BFC05* a1, ::Class_1_3E7861A5123BFC05* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3E7861A5123BFC05*, ::Class_1_3E7861A5123BFC05*))((::PBYTE)hIl2Cpp + CLASS_1_09B4DFAFBA96472C___C_METHOD_1_38976E0A69E00959_OFFSET))(this, a1, a2);
	}
};
