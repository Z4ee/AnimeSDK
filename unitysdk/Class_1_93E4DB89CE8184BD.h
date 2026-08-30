#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76D768243EB57C1F;
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET UNITYSDK_OFFSET(0x179174A0)

inline static constexpr unsigned int Class_1_93E4DB89CE8184BD_TypeDefinitionIndex = 75890;

class Class_1_93E4DB89CE8184BD : public ::System::Object
{
public:
	static ::RPG::Client::ChenLingBattle::IEntity* Method_1_B27554244A737A78(::Class_1_76D768243EB57C1F* a1)
	{
		return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::Class_1_76D768243EB57C1F*))((::PBYTE)hIl2Cpp + CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET))(a1);
	}
};
