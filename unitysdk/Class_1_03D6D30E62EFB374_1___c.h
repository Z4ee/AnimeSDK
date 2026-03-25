#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_10;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_03D6D30E62EFB374_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C5BED0)
#define CLASS_1_03D6D30E62EFB374_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5BF10)
#define CLASS_1_03D6D30E62EFB374_1___C__GETSHOWSPONSORS_B__5_0_OFFSET UNITYSDK_OFFSET(0x10C5BF20)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_1___c_TypeDefinitionIndex = 61044;

class Class_1_03D6D30E62EFB374_1___c : public ::System::Object
{
public:
	static ::Class_1_03D6D30E62EFB374_1___c** StaticGet___9()
	{
		return (::Class_1_03D6D30E62EFB374_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03D6D30E62EFB374_1___c_TypeDefinitionIndex)->GetStaticField(0x48780);
	}
	static ::System::Comparison_1<::Class_1_1B7044A592B17773_10*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::Class_1_1B7044A592B17773_10*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_03D6D30E62EFB374_1___c_TypeDefinitionIndex)->GetStaticField(0x48788);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetShowSponsors_b__5_0(::Class_1_1B7044A592B17773_10* x, ::Class_1_1B7044A592B17773_10* y)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_1B7044A592B17773_10*, ::Class_1_1B7044A592B17773_10*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_1___C__GETSHOWSPONSORS_B__5_0_OFFSET))(this, x, y);
	}
};
