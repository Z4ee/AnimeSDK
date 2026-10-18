#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C99DB30)
#define CLASS_1_05B2DA0FB841F389__CTOR_OFFSET UNITYSDK_OFFSET(0x1C99DBB0)

inline static constexpr unsigned int Class_1_05B2DA0FB841F389_TypeDefinitionIndex = 43530;

class Class_1_05B2DA0FB841F389 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerParam* DFCFNEKCKBA; // 0x10
	::System::Nullable_1<::UnityEngine::Vector3> FJFNEEJBAFK; // 0x18
	::System::Boolean DCKBLNHCLNG; // 0x28
	::System::Boolean CMBHFHCPJNH; // 0x29
	::Struct_2_EAC1BB0F093534A5 COCEIMLGHKB; // 0x2C
	::Struct_2_EAC1BB0F093534A5 LFBCMJEODKP; // 0x94
	::System::Single KBJJAMMPOMO; // 0xFC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET))(this);
	}
};
