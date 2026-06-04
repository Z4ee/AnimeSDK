#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CatGod { class CatGodGetShelfWindow; }

#define CLASS_1_9CF27F4C26389D49_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CFA2E0)
#define CLASS_1_9CF27F4C26389D49_METHOD_1_345DEA5DD3704389_OFFSET UNITYSDK_OFFSET(0x13CFA380)
#define CLASS_1_9CF27F4C26389D49_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x13CFA320)
#define CLASS_1_9CF27F4C26389D49__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFA530)

inline static constexpr unsigned int Class_1_9CF27F4C26389D49_TypeDefinitionIndex = 74303;

class Class_1_9CF27F4C26389D49 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF27F4C26389D49__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF27F4C26389D49_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF27F4C26389D49_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::RPG::Client::CatGod::CatGodGetShelfWindow* Method_1_345DEA5DD3704389()
	{
		return ((::RPG::Client::CatGod::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CF27F4C26389D49_METHOD_1_345DEA5DD3704389_OFFSET))(this);
	}
};
