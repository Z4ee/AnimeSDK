#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_12D88ED8D11E2791_COMPARE_OFFSET UNITYSDK_OFFSET(0x14317270)
#define CLASS_1_12D88ED8D11E2791_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x143172D0)
#define CLASS_1_12D88ED8D11E2791__CTOR_OFFSET UNITYSDK_OFFSET(0x14317340)

inline static constexpr unsigned int Class_1_12D88ED8D11E2791_TypeDefinitionIndex = 69850;

class Class_1_12D88ED8D11E2791 : public ::System::Object
{
public:
	static ::Class_1_12D88ED8D11E2791** StaticGet_Field_1_0()
	{
		return (::Class_1_12D88ED8D11E2791**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12D88ED8D11E2791_TypeDefinitionIndex)->GetStaticField(0x2C8D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D88ED8D11E2791__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::BillboardShowType a1, ::RPG::Client::BillboardShowType a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::BillboardShowType, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + CLASS_1_12D88ED8D11E2791_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::Class_1_12D88ED8D11E2791* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_12D88ED8D11E2791*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12D88ED8D11E2791_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}
};
