#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B39410F758581E23;

#define CLASS_1_B39410F758581E23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E286E50)
#define CLASS_1_B39410F758581E23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E286E80)
#define CLASS_1_B39410F758581E23___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E286E90)

inline static constexpr unsigned int Class_1_B39410F758581E23___c_TypeDefinitionIndex = 32355;

class Class_1_B39410F758581E23___c : public ::System::Object
{
public:
	static ::Class_1_B39410F758581E23___c** StaticGet___9()
	{
		return (::Class_1_B39410F758581E23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B39410F758581E23___c_TypeDefinitionIndex)->GetStaticField(0x53040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B39410F758581E23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B39410F758581E23___C__CTOR_OFFSET))(this);
	}

	::Class_1_B39410F758581E23* __cctor_b__33_0()
	{
		return ((::Class_1_B39410F758581E23*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B39410F758581E23___C___CCTOR_B__33_0_OFFSET))(this);
	}
};
