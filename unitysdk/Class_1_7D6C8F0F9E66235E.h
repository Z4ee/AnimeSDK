#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SilverWolfGroupData; }

#define CLASS_1_7D6C8F0F9E66235E_METHOD_1_C353FE146CD18176_OFFSET UNITYSDK_OFFSET(0x98E6E00)

inline static constexpr unsigned int Class_1_7D6C8F0F9E66235E_TypeDefinitionIndex = 62651;

class Class_1_7D6C8F0F9E66235E : public ::System::Object
{
public:
	static ::RPG::Client::SilverWolfGroupData* Method_1_C353FE146CD18176(::System::UInt32 a1)
	{
		return ((::RPG::Client::SilverWolfGroupData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D6C8F0F9E66235E_METHOD_1_C353FE146CD18176_OFFSET))(a1);
	}
};
