#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D04F670)
#define CLASS_1_05B2DA0FB841F389__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04F6F0)

inline static constexpr unsigned int Class_1_05B2DA0FB841F389_TypeDefinitionIndex = 41888;

class Class_1_05B2DA0FB841F389 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerParam* DFCFNEKCKBA; // 0x10
	::Struct_2_EAC1BB0F093534A5 COCEIMLGHKB; // 0x18
	::Struct_2_EAC1BB0F093534A5 LFBCMJEODKP; // 0x80
	::System::Single KBJJAMMPOMO; // 0xE8
	::System::Boolean DCKBLNHCLNG; // 0xEC
	::System::Boolean CMBHFHCPJNH; // 0xED
	::System::Nullable_1<::UnityEngine::Vector3> FJFNEEJBAFK; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B2DA0FB841F389_CLEAR_OFFSET))(this);
	}
};
