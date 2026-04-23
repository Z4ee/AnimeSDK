#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_94BE70CD83E961DE_2_METHOD_1_5F96343989936415_OFFSET UNITYSDK_OFFSET(0x12964C70)
#define CLASS_1_94BE70CD83E961DE_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12964CF0)

inline static constexpr unsigned int Class_1_94BE70CD83E961DE_2_TypeDefinitionIndex = 59017;

class Class_1_94BE70CD83E961DE_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BE70CD83E961DE_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_578* Method_1_5F96343989936415(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_94BE70CD83E961DE_2_METHOD_1_5F96343989936415_OFFSET))(this, a1);
	}
};
