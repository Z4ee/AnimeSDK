#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class OptionTalkInfo; }

#define CLASS_1_E2F957E03C4DEE32_METHOD_1_EE0BD9C12E2BE166_OFFSET UNITYSDK_OFFSET(0xAA655F0)
#define CLASS_1_E2F957E03C4DEE32__CTOR_OFFSET UNITYSDK_OFFSET(0xAA65650)

inline static constexpr unsigned int Class_1_E2F957E03C4DEE32_TypeDefinitionIndex = 62715;

class Class_1_E2F957E03C4DEE32 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2F957E03C4DEE32__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_EE0BD9C12E2BE166(::RPG::GameCore::OptionTalkInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_1_E2F957E03C4DEE32_METHOD_1_EE0BD9C12E2BE166_OFFSET))(this, a1);
	}
};
