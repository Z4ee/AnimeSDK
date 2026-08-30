#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace System { class Object; }

#define CLASS_2_736D8EB07C652F11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1618D260)
#define CLASS_2_736D8EB07C652F11_METHOD_2_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x1618D380)
#define CLASS_2_736D8EB07C652F11_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1618E270)
#define CLASS_2_736D8EB07C652F11__CTOR_OFFSET UNITYSDK_OFFSET(0x1618D1F0)

inline static constexpr unsigned int Class_2_736D8EB07C652F11_TypeDefinitionIndex = 57715;

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

	::System::Void ResetToDefault()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_736D8EB07C652F11_RESETTODEFAULT_OFFSET))(this);
	}
};
