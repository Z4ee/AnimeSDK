#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_499;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_3F7B49F2FE4D2D39_1_METHOD_1_994A5289C9F1433A_OFFSET UNITYSDK_OFFSET(0x10560E40)
#define CLASS_1_3F7B49F2FE4D2D39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10560F00)

inline static constexpr unsigned int Class_1_3F7B49F2FE4D2D39_1_TypeDefinitionIndex = 52059;

class Class_1_3F7B49F2FE4D2D39_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F7B49F2FE4D2D39_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_499* Method_1_994A5289C9F1433A(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_3F7B49F2FE4D2D39_1_METHOD_1_994A5289C9F1433A_OFFSET))(this, a1);
	}
};
