#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }

#define CLASS_1_0608D7FBEE4C3013_METHOD_1_9CEF1983DA5C5065_OFFSET UNITYSDK_OFFSET(0xB11E8C0)
#define CLASS_1_0608D7FBEE4C3013__CTOR_OFFSET UNITYSDK_OFFSET(0xB11E960)

inline static constexpr unsigned int Class_1_0608D7FBEE4C3013_TypeDefinitionIndex = 80239;

class Class_1_0608D7FBEE4C3013 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0608D7FBEE4C3013__CTOR_OFFSET))(this);
	}

	::RPG::Client::QuestData* Method_1_9CEF1983DA5C5065(::System::UInt32 a1)
	{
		return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0608D7FBEE4C3013_METHOD_1_9CEF1983DA5C5065_OFFSET))(this, a1);
	}
};
