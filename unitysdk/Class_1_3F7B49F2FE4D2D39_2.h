#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_578;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_3F7B49F2FE4D2D39_2_METHOD_1_994A5289C9F1433A_OFFSET UNITYSDK_OFFSET(0x12AA7D50)
#define CLASS_1_3F7B49F2FE4D2D39_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA7E10)

inline static constexpr unsigned int Class_1_3F7B49F2FE4D2D39_2_TypeDefinitionIndex = 59015;

class Class_1_3F7B49F2FE4D2D39_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F7B49F2FE4D2D39_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_578* Method_1_994A5289C9F1433A(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_3F7B49F2FE4D2D39_2_METHOD_1_994A5289C9F1433A_OFFSET))(this, a1);
	}
};
