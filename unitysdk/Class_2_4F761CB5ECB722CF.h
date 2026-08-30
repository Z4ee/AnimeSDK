#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68DDF0439D67F85F.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_4F761CB5ECB722CF_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA7F950)
#define CLASS_2_4F761CB5ECB722CF_METHOD_2_9A6286283B7ECE16_OFFSET UNITYSDK_OFFSET(0xBA7F9A0)
#define CLASS_2_4F761CB5ECB722CF__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7FB40)

inline static constexpr unsigned int Class_2_4F761CB5ECB722CF_TypeDefinitionIndex = 76625;

class Class_2_4F761CB5ECB722CF : public ::Class_1_68DDF0439D67F85F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F761CB5ECB722CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F761CB5ECB722CF_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_9A6286283B7ECE16(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F761CB5ECB722CF_METHOD_2_9A6286283B7ECE16_OFFSET))(this, a1);
	}
};
