#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

#define CLASS_2_C252015D8EC8E2E2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9672600)
#define CLASS_2_C252015D8EC8E2E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x9672620)
#define CLASS_2_C252015D8EC8E2E2__CTOR_OFFSET UNITYSDK_OFFSET(0x9672610)

inline static constexpr unsigned int Class_2_C252015D8EC8E2E2_TypeDefinitionIndex = 59205;

class Class_2_C252015D8EC8E2E2 : public ::RPG::Client::BaseGameFlow
{
public:
	static ::Class_2_C252015D8EC8E2E2** StaticGet_Field_2_0()
	{
		return (::Class_2_C252015D8EC8E2E2**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C252015D8EC8E2E2_TypeDefinitionIndex)->GetStaticField(0x3C850);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C252015D8EC8E2E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C252015D8EC8E2E2__CCTOR_OFFSET))();
	}

	::RPG::GameCore::GameFlowType get_Type()
	{
		return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C252015D8EC8E2E2_GET_TYPE_OFFSET))(this);
	}
};
