#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_784;
class Class_1_63BA939E972C203B;
class Class_1_63BA939E972C203B_1;
class Class_1_63BA939E972C203B_2;
class Class_1_63BA939E972C203B_3;

#define CLASS_1_147F310228CB2A8D_METHOD_1_DBDA89683FE1D9C2_OFFSET UNITYSDK_OFFSET(0x876BBD0)
#define CLASS_1_147F310228CB2A8D__CCTOR_OFFSET UNITYSDK_OFFSET(0x876BD40)

inline static constexpr unsigned int Class_1_147F310228CB2A8D_TypeDefinitionIndex = 56349;

class Class_1_147F310228CB2A8D : public ::System::Object
{
public:
	static ::Class_1_63BA939E972C203B** StaticGet_Field_1_0()
	{
		return (::Class_1_63BA939E972C203B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_147F310228CB2A8D_TypeDefinitionIndex)->GetStaticField(0x1F1E0);
	}
	static ::Class_1_63BA939E972C203B_1** StaticGet_Field_1_2()
	{
		return (::Class_1_63BA939E972C203B_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_147F310228CB2A8D_TypeDefinitionIndex)->GetStaticField(0x1F1E8);
	}
	static ::Class_1_63BA939E972C203B_2** StaticGet_Field_1_1()
	{
		return (::Class_1_63BA939E972C203B_2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_147F310228CB2A8D_TypeDefinitionIndex)->GetStaticField(0x1F1F0);
	}
	static ::Class_1_63BA939E972C203B_3** StaticGet_Field_1_3()
	{
		return (::Class_1_63BA939E972C203B_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_147F310228CB2A8D_TypeDefinitionIndex)->GetStaticField(0x1F1F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_147F310228CB2A8D__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_784* Method_1_DBDA89683FE1D9C2(::RPG::Client::NewsTicker_MoveDirectionType a1)
	{
		return ((::Class_0_16E4307DCC419505_784*(*)(::RPG::Client::NewsTicker_MoveDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_147F310228CB2A8D_METHOD_1_DBDA89683FE1D9C2_OFFSET))(a1);
	}
};
