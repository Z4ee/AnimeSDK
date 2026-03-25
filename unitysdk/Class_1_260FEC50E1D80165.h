#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_260FEC50E1D80165_METHOD_1_335FA7CCCBD33EC3_OFFSET UNITYSDK_OFFSET(0x118FE100)
#define CLASS_1_260FEC50E1D80165__CTOR_OFFSET UNITYSDK_OFFSET(0x118FE5B0)

inline static constexpr unsigned int Class_1_260FEC50E1D80165_TypeDefinitionIndex = 48566;

class Class_1_260FEC50E1D80165 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_260FEC50E1D80165__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5* Method_1_335FA7CCCBD33EC3(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_37_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_260FEC50E1D80165_METHOD_1_335FA7CCCBD33EC3_OFFSET))(this, a1);
	}
};
