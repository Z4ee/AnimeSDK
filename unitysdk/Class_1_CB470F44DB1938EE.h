#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Rtcb_BreakActionOption.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_CB470F44DB1938EE_METHOD_1_78E90BF96470852B_OFFSET UNITYSDK_OFFSET(0x141C9890)

inline static constexpr unsigned int Class_1_CB470F44DB1938EE_TypeDefinitionIndex = 50399;

class Class_1_CB470F44DB1938EE : public ::System::Object
{
public:
	static ::System::Boolean Method_1_78E90BF96470852B(::RPG::GameCore::Rtcb_BreakActionOption a1, ::RPG::GameCore::Rtcb_BreakActionOption a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::Rtcb_BreakActionOption, ::RPG::GameCore::Rtcb_BreakActionOption))((::PBYTE)hIl2Cpp + CLASS_1_CB470F44DB1938EE_METHOD_1_78E90BF96470852B_OFFSET))(a1, a2);
	}
};
