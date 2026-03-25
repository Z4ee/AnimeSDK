#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EffectPluginManager; }
namespace RPG::Client { template <typename T> class TAMonoPlugin_1; }

#define CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_2C478EDA1E297B43_OFFSET UNITYSDK_OFFSET(0x8A85570)
#define CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0x8A85620)
#define CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_7EE0BDCAA760B693_OFFSET UNITYSDK_OFFSET(0x8A85490)

inline static constexpr unsigned int Class_1_ACD0CCB2B56DB2DD_TypeDefinitionIndex = 57975;

class Class_1_ACD0CCB2B56DB2DD : public ::System::Object
{
public:
	static ::System::Void Method_1_7EE0BDCAA760B693(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_7EE0BDCAA760B693_OFFSET))(a1);
	}

	static ::System::Void Method_1_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_485502A9571E17C0_OFFSET))(a1);
	}

	static ::RPG::Client::EffectPluginManager* Method_1_2C478EDA1E297B43(::System::Boolean a1)
	{
		return ((::RPG::Client::EffectPluginManager*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ACD0CCB2B56DB2DD_METHOD_1_2C478EDA1E297B43_OFFSET))(a1);
	}
};
