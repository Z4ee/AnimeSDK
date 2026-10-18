#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1F213CFFCE98A271;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_755BECD7A1835754___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C520DE0)
#define CLASS_1_755BECD7A1835754___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C520E20)
#define CLASS_1_755BECD7A1835754___C___REFRESHATTRIBUTES_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C520E30)

inline static constexpr unsigned int Class_1_755BECD7A1835754___c_TypeDefinitionIndex = 41752;

class Class_1_755BECD7A1835754___c : public ::System::Object
{
public:
	static ::Class_1_755BECD7A1835754___c** StaticGet___9()
	{
		return (::Class_1_755BECD7A1835754___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_755BECD7A1835754___c_TypeDefinitionIndex)->GetStaticField(0x20AE0);
	}
	static ::System::Func_2<::Class_2_1F213CFFCE98A271*, ::System::Single>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Class_2_1F213CFFCE98A271*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_755BECD7A1835754___c_TypeDefinitionIndex)->GetStaticField(0x20AE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754___C__CTOR_OFFSET))(this);
	}

	::System::Single __RefreshAttributes_b__17_0(::Class_2_1F213CFFCE98A271* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_1F213CFFCE98A271*))((::PBYTE)hIl2Cpp + CLASS_1_755BECD7A1835754___C___REFRESHATTRIBUTES_B__17_0_OFFSET))(this, a1);
	}
};
