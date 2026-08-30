#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_845;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define CLASS_1_86F1492ABDDEBA60_3_METHOD_1_4CCDEBCF42ECAE51_OFFSET UNITYSDK_OFFSET(0x157C81A0)
#define CLASS_1_86F1492ABDDEBA60_3__CTOR_OFFSET UNITYSDK_OFFSET(0x157C8290)

inline static constexpr unsigned int Class_1_86F1492ABDDEBA60_3_TypeDefinitionIndex = 80761;

class Class_1_86F1492ABDDEBA60_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_86F1492ABDDEBA60_3__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_845* Method_1_4CCDEBCF42ECAE51(::RPG::GameCore::TextDynamicParamBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_845*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_86F1492ABDDEBA60_3_METHOD_1_4CCDEBCF42ECAE51_OFFSET))(this, a1);
	}
};
