#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_499;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_474C527EB2915655_METHOD_1_535C23458B3922C0_OFFSET UNITYSDK_OFFSET(0x9C66A10)
#define CLASS_1_474C527EB2915655__CTOR_OFFSET UNITYSDK_OFFSET(0x9C66B00)

inline static constexpr unsigned int Class_1_474C527EB2915655_TypeDefinitionIndex = 64478;

class Class_1_474C527EB2915655 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_474C527EB2915655__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_499* Method_1_535C23458B3922C0(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_474C527EB2915655_METHOD_1_535C23458B3922C0_OFFSET))(this, a1);
	}
};
