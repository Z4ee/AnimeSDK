#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_220C85620F1F16CC;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EE462DDB9EDFAFDA___C_METHOD_1_D9488A3A759AAE6C_OFFSET UNITYSDK_OFFSET(0x1A20FF50)
#define CLASS_1_EE462DDB9EDFAFDA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20FF00)
#define CLASS_1_EE462DDB9EDFAFDA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20FF40)

inline static constexpr unsigned int Class_1_EE462DDB9EDFAFDA___c_TypeDefinitionIndex = 43503;

class Class_1_EE462DDB9EDFAFDA___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_220C85620F1F16CC*>** StaticGet___9__22_0()
	{
		return (::System::Comparison_1<::Class_1_220C85620F1F16CC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE462DDB9EDFAFDA___c_TypeDefinitionIndex)->GetStaticField(0x42210);
	}
	static ::Class_1_EE462DDB9EDFAFDA___c** StaticGet___9()
	{
		return (::Class_1_EE462DDB9EDFAFDA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE462DDB9EDFAFDA___c_TypeDefinitionIndex)->GetStaticField(0x42218);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE462DDB9EDFAFDA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE462DDB9EDFAFDA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_D9488A3A759AAE6C(::Class_1_220C85620F1F16CC* a1, ::Class_1_220C85620F1F16CC* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_220C85620F1F16CC*, ::Class_1_220C85620F1F16CC*))((::PBYTE)hIl2Cpp + CLASS_1_EE462DDB9EDFAFDA___C_METHOD_1_D9488A3A759AAE6C_OFFSET))(this, a1, a2);
	}
};
