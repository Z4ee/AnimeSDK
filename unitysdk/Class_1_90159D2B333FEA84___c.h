#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_90159D2B333FEA84___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFC00)
#define CLASS_1_90159D2B333FEA84___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFC30)
#define CLASS_1_90159D2B333FEA84___C___CCTOR_B__49_0_OFFSET UNITYSDK_OFFSET(0x1D7AFC40)

inline static constexpr unsigned int Class_1_90159D2B333FEA84___c_TypeDefinitionIndex = 42270;

class Class_1_90159D2B333FEA84___c : public ::System::Object
{
public:
	static ::Class_1_90159D2B333FEA84___c** StaticGet___9()
	{
		return (::Class_1_90159D2B333FEA84___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_90159D2B333FEA84___c_TypeDefinitionIndex)->GetStaticField(0x495A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_90159D2B333FEA84___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90159D2B333FEA84___C__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* __cctor_b__49_0()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90159D2B333FEA84___C___CCTOR_B__49_0_OFFSET))(this);
	}
};
