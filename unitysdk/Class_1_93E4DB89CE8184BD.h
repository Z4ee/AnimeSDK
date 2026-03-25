#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F4C6CB9A7CE9D3F2;
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET UNITYSDK_OFFSET(0x89005B0)

inline static constexpr unsigned int Class_1_93E4DB89CE8184BD_TypeDefinitionIndex = 62130;

class Class_1_93E4DB89CE8184BD : public ::System::Object
{
public:
	static ::RPG::Client::ChenLingBattle::IEntity* Method_1_B27554244A737A78(::Class_1_F4C6CB9A7CE9D3F2* a1)
	{
		return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::Class_1_F4C6CB9A7CE9D3F2*))((::PBYTE)hIl2Cpp + CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET))(a1);
	}
};
