#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTicker_MoveDirectionType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1143;
class Class_1_63BA939E972C203B;
class Class_1_63BA939E972C203B_1;
class Class_1_63BA939E972C203B_2;
class Class_1_63BA939E972C203B_3;

#define CLASS_1_9B8DD03EC6B78BFA_METHOD_1_8739CA0AF034EF8B_OFFSET UNITYSDK_OFFSET(0x1594B280)
#define CLASS_1_9B8DD03EC6B78BFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1594B420)

inline static constexpr unsigned int Class_1_9B8DD03EC6B78BFA_TypeDefinitionIndex = 68987;

class Class_1_9B8DD03EC6B78BFA : public ::System::Object
{
public:
	static ::Class_1_63BA939E972C203B** StaticGet_HGLFLENHMBB()
	{
		return (::Class_1_63BA939E972C203B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B8DD03EC6B78BFA_TypeDefinitionIndex)->GetStaticField(0x5F450);
	}
	static ::Class_1_63BA939E972C203B_1** StaticGet_JLALCNPLAPK()
	{
		return (::Class_1_63BA939E972C203B_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B8DD03EC6B78BFA_TypeDefinitionIndex)->GetStaticField(0x5F458);
	}
	static ::Class_1_63BA939E972C203B_2** StaticGet_PDHNPBBMKGD()
	{
		return (::Class_1_63BA939E972C203B_2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B8DD03EC6B78BFA_TypeDefinitionIndex)->GetStaticField(0x5F460);
	}
	static ::Class_1_63BA939E972C203B_3** StaticGet_NLJKLODIOJF()
	{
		return (::Class_1_63BA939E972C203B_3**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B8DD03EC6B78BFA_TypeDefinitionIndex)->GetStaticField(0x5F468);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B8DD03EC6B78BFA__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_1143* Method_1_8739CA0AF034EF8B(::RPG::Client::NewsTicker_MoveDirectionType a1)
	{
		return ((::Class_0_16E4307DCC419505_1143*(*)(::RPG::Client::NewsTicker_MoveDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_9B8DD03EC6B78BFA_METHOD_1_8739CA0AF034EF8B_OFFSET))(a1);
	}
};
