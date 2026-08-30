#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EffectPluginManager; }
namespace RPG::Client { template <typename T> class TAMonoPlugin_1; }

#define CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_2C478EDA1E297B43_OFFSET UNITYSDK_OFFSET(0x198E2BB0)

inline static constexpr unsigned int Class_1_ACD0CCB2B56DB2DD_TypeDefinitionIndex = 70738;

class Class_1_ACD0CCB2B56DB2DD : public ::System::Object
{
public:
	static ::RPG::Client::EffectPluginManager* Method_1_2C478EDA1E297B43(::System::Boolean a1)
	{
		return ((::RPG::Client::EffectPluginManager*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_2C478EDA1E297B43_OFFSET))(a1);
	}
};
