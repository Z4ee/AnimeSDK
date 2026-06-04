#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MaterialSubmitter; }

#define CLASS_1_D4886279F113F6E6_METHOD_1_0B6DEC29AFD53B86_OFFSET UNITYSDK_OFFSET(0x14569470)
#define CLASS_1_D4886279F113F6E6_METHOD_1_4791A1E631D6D2B2_OFFSET UNITYSDK_OFFSET(0x14569500)
#define CLASS_1_D4886279F113F6E6_METHOD_1_8E91D6CA42248B65_OFFSET UNITYSDK_OFFSET(0x145694B0)

inline static constexpr unsigned int Class_1_D4886279F113F6E6_TypeDefinitionIndex = 57783;

class Class_1_D4886279F113F6E6 : public ::System::Object
{
public:
	static ::RPG::Client::MaterialSubmitter* Method_1_0B6DEC29AFD53B86(::System::UInt32 a1)
	{
		return ((::RPG::Client::MaterialSubmitter*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4886279F113F6E6_METHOD_1_0B6DEC29AFD53B86_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_8E91D6CA42248B65(::System::UInt32 a1, ::RPG::Client::MaterialSubmitter*& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::MaterialSubmitter*&))((::PBYTE)hIl2Cpp + CLASS_1_D4886279F113F6E6_METHOD_1_8E91D6CA42248B65_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4791A1E631D6D2B2(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4886279F113F6E6_METHOD_1_4791A1E631D6D2B2_OFFSET))(a1);
	}
};
