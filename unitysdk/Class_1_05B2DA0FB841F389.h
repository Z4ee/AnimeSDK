#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C81990)
#define CLASS_1_05B2DA0FB841F389__CTOR_OFFSET UNITYSDK_OFFSET(0x18C81A00)

inline static constexpr unsigned int Class_1_05B2DA0FB841F389_TypeDefinitionIndex = 40116;

class Class_1_05B2DA0FB841F389 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerParam* Field_1_0; // 0x10
	::Struct_2_EAC1BB0F093534A5 Field_1_1; // 0x18
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_2; // 0x80
	::System::Single Field_1_3; // 0x90
	::System::Boolean Field_1_4; // 0x94
	::System::Boolean Field_1_5; // 0x95
	::Struct_2_EAC1BB0F093534A5 Field_1_6; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET))(this);
	}
};
