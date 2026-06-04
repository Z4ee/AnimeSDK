#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_C96B50FF270E7C10_1_METHOD_1_2B82E51B8F219467_OFFSET UNITYSDK_OFFSET(0x1351F800)
#define CLASS_1_C96B50FF270E7C10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1351F9A0)

inline static constexpr unsigned int Class_1_C96B50FF270E7C10_1_TypeDefinitionIndex = 56056;

class Class_1_C96B50FF270E7C10_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C96B50FF270E7C10_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_2B82E51B8F219467(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_C96B50FF270E7C10_1_METHOD_1_2B82E51B8F219467_OFFSET))(this, a1);
	}
};
