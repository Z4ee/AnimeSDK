#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_759;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define CLASS_1_86F1492ABDDEBA60_2_METHOD_1_4CCDEBCF42ECAE51_OFFSET UNITYSDK_OFFSET(0x137633F0)
#define CLASS_1_86F1492ABDDEBA60_2__CTOR_OFFSET UNITYSDK_OFFSET(0x137634E0)

inline static constexpr unsigned int Class_1_86F1492ABDDEBA60_2_TypeDefinitionIndex = 59954;

class Class_1_86F1492ABDDEBA60_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86F1492ABDDEBA60_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_759* Method_1_4CCDEBCF42ECAE51(::RPG::GameCore::TextDynamicParamBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_759*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_86F1492ABDDEBA60_2_METHOD_1_4CCDEBCF42ECAE51_OFFSET))(this, a1);
	}
};
