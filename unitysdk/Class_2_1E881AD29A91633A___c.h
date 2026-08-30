#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B87B48EBDCE76E87;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1E881AD29A91633A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180E0A20)
#define CLASS_2_1E881AD29A91633A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180E0A50)
#define CLASS_2_1E881AD29A91633A___C__TRYEMITPLUSPEDESTRIAN_B__6_0_OFFSET UNITYSDK_OFFSET(0x180E0A60)

inline static constexpr unsigned int Class_2_1E881AD29A91633A___c_TypeDefinitionIndex = 69282;

class Class_2_1E881AD29A91633A___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_B87B48EBDCE76E87*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_1_B87B48EBDCE76E87*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1E881AD29A91633A___c_TypeDefinitionIndex)->GetStaticField(0x569D0);
	}
	static ::Class_2_1E881AD29A91633A___c** StaticGet___9()
	{
		return (::Class_2_1E881AD29A91633A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1E881AD29A91633A___c_TypeDefinitionIndex)->GetStaticField(0x569D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1E881AD29A91633A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E881AD29A91633A___C__CTOR_OFFSET))(this);
	}

	::System::Void _TryEmitPlusPedestrian_b__6_0(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_1E881AD29A91633A___C__TRYEMITPLUSPEDESTRIAN_B__6_0_OFFSET))(this, a1);
	}
};
