#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A002A290C5858FB7_METHOD_1_16A88F7DE6D13900_OFFSET UNITYSDK_OFFSET(0x171D12C0)

inline static constexpr unsigned int Class_1_A002A290C5858FB7_TypeDefinitionIndex = 53680;

class Class_1_A002A290C5858FB7 : public ::System::Object
{
public:
	static ::System::String* Method_1_16A88F7DE6D13900(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A002A290C5858FB7_METHOD_1_16A88F7DE6D13900_OFFSET))(a1);
	}
};
