#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlow.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"

#define CLASS_2_2D4170259C633C75_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xF3F86F0)
#define CLASS_2_2D4170259C633C75__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3F8740)
#define CLASS_2_2D4170259C633C75__CTOR_OFFSET UNITYSDK_OFFSET(0xF3F8730)

inline static constexpr unsigned int Class_2_2D4170259C633C75_TypeDefinitionIndex = 64410;

class Class_2_2D4170259C633C75 : public ::RPG::Client::BaseGameFlow
{
public:
	static ::Class_2_2D4170259C633C75** StaticGet_FMJPMFEDIJL()
	{
		return (::Class_2_2D4170259C633C75**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2D4170259C633C75_TypeDefinitionIndex)->GetStaticField(0x4520);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D4170259C633C75__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2D4170259C633C75__CCTOR_OFFSET))();
	}

	::RPG::GameCore::GameFlowType get_Type()
	{
		return ((::RPG::GameCore::GameFlowType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D4170259C633C75_GET_TYPE_OFFSET))(this);
	}
};
