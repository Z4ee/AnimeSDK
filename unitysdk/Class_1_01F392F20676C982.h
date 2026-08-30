#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }

#define CLASS_1_01F392F20676C982_CONVERTBOXED_OFFSET UNITYSDK_OFFSET(0x1EFCB700)
#define CLASS_1_01F392F20676C982_CONVERT_OFFSET UNITYSDK_OFFSET(0x1EFCB670)
#define CLASS_1_01F392F20676C982__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCB7A0)

inline static constexpr unsigned int Class_1_01F392F20676C982_TypeDefinitionIndex = 44012;

class Class_1_01F392F20676C982 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F392F20676C982__CTOR_OFFSET))(this);
	}

	::System::Double Convert(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Double(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_01F392F20676C982_CONVERT_OFFSET))(this, a1);
	}

	::System::Object* ConvertBoxed(::RPG::GameCore::DynamicValue* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + CLASS_1_01F392F20676C982_CONVERTBOXED_OFFSET))(this, a1);
	}
};
