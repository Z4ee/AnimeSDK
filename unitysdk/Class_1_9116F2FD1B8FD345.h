#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3781D7BD58E0C993.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define CLASS_1_9116F2FD1B8FD345_CLEAR_OFFSET UNITYSDK_OFFSET(0x180E56E0)
#define CLASS_1_9116F2FD1B8FD345__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5730)

inline static constexpr unsigned int Class_1_9116F2FD1B8FD345_TypeDefinitionIndex = 40914;

class Class_1_9116F2FD1B8FD345 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCrystalConfig* Field_1_0; // 0x10
	::Struct_2_3781D7BD58E0C993 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9116F2FD1B8FD345__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9116F2FD1B8FD345_CLEAR_OFFSET))(this);
	}
};
