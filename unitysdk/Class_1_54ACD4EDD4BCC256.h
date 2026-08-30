#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TargetTypeInferResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_1_54ACD4EDD4BCC256_METHOD_1_2C7D93E6D49BAA44_OFFSET UNITYSDK_OFFSET(0x18CA7360)
#define CLASS_1_54ACD4EDD4BCC256_METHOD_1_7240BFF2F86F764F_OFFSET UNITYSDK_OFFSET(0x18CA7310)
#define CLASS_1_54ACD4EDD4BCC256_METHOD_1_ABAA48DE382196B9_OFFSET UNITYSDK_OFFSET(0x18CA73F0)

inline static constexpr unsigned int Class_1_54ACD4EDD4BCC256_TypeDefinitionIndex = 59811;

class Class_1_54ACD4EDD4BCC256 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_7240BFF2F86F764F(::RPG::Client::TargetTypeInferResult a1, ::RPG::Client::TargetTypeInferResult a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::TargetTypeInferResult, ::RPG::Client::TargetTypeInferResult))((::PBYTE)hIl2Cpp + CLASS_1_54ACD4EDD4BCC256_METHOD_1_7240BFF2F86F764F_OFFSET))(a1, a2);
	}

	static ::RPG::Client::TargetTypeInferResult Method_1_2C7D93E6D49BAA44(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::RPG::Client::TargetTypeInferResult(*)(::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_1_54ACD4EDD4BCC256_METHOD_1_2C7D93E6D49BAA44_OFFSET))(a1);
	}

	static ::RPG::Client::TargetTypeInferResult Method_1_ABAA48DE382196B9(::System::String* a1)
	{
		return ((::RPG::Client::TargetTypeInferResult(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54ACD4EDD4BCC256_METHOD_1_ABAA48DE382196B9_OFFSET))(a1);
	}
};
