#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C40AB4B5671EB568_METHOD_1_BE5BBFDD71BF8989_OFFSET UNITYSDK_OFFSET(0x16628230)

inline static constexpr unsigned int Class_1_C40AB4B5671EB568_TypeDefinitionIndex = 28750;

class Class_1_C40AB4B5671EB568 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_BE5BBFDD71BF8989(::RPG::GameCore::CompareType a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C40AB4B5671EB568_METHOD_1_BE5BBFDD71BF8989_OFFSET))(a1, a2, a3);
	}
};
