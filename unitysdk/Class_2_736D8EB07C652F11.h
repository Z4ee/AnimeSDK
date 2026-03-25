#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace System { class Object; }

#define CLASS_2_736D8EB07C652F11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11466A10)
#define CLASS_2_736D8EB07C652F11_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x11466A80)
#define CLASS_2_736D8EB07C652F11__CTOR_OFFSET UNITYSDK_OFFSET(0x114669D0)

inline static constexpr unsigned int Class_2_736D8EB07C652F11_TypeDefinitionIndex = 46385;

class Class_2_736D8EB07C652F11 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_736D8EB07C652F11__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_736D8EB07C652F11_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_022B0D58A3077BF2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_736D8EB07C652F11_METHOD_2_022B0D58A3077BF2_OFFSET))(this, a1);
	}
};
