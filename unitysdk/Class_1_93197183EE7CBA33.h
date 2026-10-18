#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_763;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_93197183EE7CBA33_METHOD_1_4CD4389917AF3EA7_OFFSET UNITYSDK_OFFSET(0xF2248A0)
#define CLASS_1_93197183EE7CBA33__CTOR_OFFSET UNITYSDK_OFFSET(0xF224F10)

inline static constexpr unsigned int Class_1_93197183EE7CBA33_TypeDefinitionIndex = 82160;

class Class_1_93197183EE7CBA33 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93197183EE7CBA33__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_763* Method_1_4CD4389917AF3EA7(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_763*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_93197183EE7CBA33_METHOD_1_4CD4389917AF3EA7_OFFSET))(this, a1);
	}
};
