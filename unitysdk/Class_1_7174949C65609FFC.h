#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7174949C65609FFC_METHOD_1_102E636403FD87FE_OFFSET UNITYSDK_OFFSET(0xDD75D40)

inline static constexpr unsigned int Class_1_7174949C65609FFC_TypeDefinitionIndex = 53855;

class Class_1_7174949C65609FFC : public ::System::Object
{
public:
	static ::System::Boolean Method_1_102E636403FD87FE(::RPG::GameCore::CompareType a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7174949C65609FFC_METHOD_1_102E636403FD87FE_OFFSET))(a1, a2, a3);
	}
};
