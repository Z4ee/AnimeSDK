#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EffectPluginManager; }
namespace RPG::Client { template <typename T> class TAMonoPlugin_1; }

#define CLASS_1_F3BFD1289BF84D37_METHOD_1_07370BBC8AA094F4_OFFSET UNITYSDK_OFFSET(0x15E9EA40)
#define CLASS_1_F3BFD1289BF84D37_METHOD_1_2C478EDA1E297B43_OFFSET UNITYSDK_OFFSET(0x15E9EB80)
#define CLASS_1_F3BFD1289BF84D37_METHOD_1_BDE55053EB71D291_OFFSET UNITYSDK_OFFSET(0x15E9EC30)

inline static constexpr unsigned int Class_1_F3BFD1289BF84D37_TypeDefinitionIndex = 67614;

class Class_1_F3BFD1289BF84D37 : public ::System::Object
{
public:
	static ::System::Void Method_1_07370BBC8AA094F4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3BFD1289BF84D37_METHOD_1_07370BBC8AA094F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDE55053EB71D291(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F3BFD1289BF84D37_METHOD_1_BDE55053EB71D291_OFFSET))(a1);
	}

	static ::RPG::Client::EffectPluginManager* Method_1_2C478EDA1E297B43(::System::Boolean a1)
	{
		return ((::RPG::Client::EffectPluginManager*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3BFD1289BF84D37_METHOD_1_2C478EDA1E297B43_OFFSET))(a1);
	}
};
