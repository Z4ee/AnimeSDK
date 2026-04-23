#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B0D7D2CB27F3D72;
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET UNITYSDK_OFFSET(0xB003380)

inline static constexpr unsigned int Class_1_93E4DB89CE8184BD_TypeDefinitionIndex = 70129;

class Class_1_93E4DB89CE8184BD : public ::System::Object
{
public:
	static ::RPG::Client::ChenLingBattle::IEntity* Method_1_B27554244A737A78(::Class_1_1B0D7D2CB27F3D72* a1)
	{
		return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::Class_1_1B0D7D2CB27F3D72*))((::PBYTE)hIl2Cpp + CLASS_1_93E4DB89CE8184BD_METHOD_1_B27554244A737A78_OFFSET))(a1);
	}
};
