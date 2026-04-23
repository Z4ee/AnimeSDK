#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_09FA8B7D0F51C35A_METHOD_2_4A3BE94EE12D0DAC_OFFSET UNITYSDK_OFFSET(0x1238CC20)
#define CLASS_2_09FA8B7D0F51C35A__CTOR_OFFSET UNITYSDK_OFFSET(0x1238CDC0)

inline static constexpr unsigned int Class_2_09FA8B7D0F51C35A_TypeDefinitionIndex = 50069;

class Class_2_09FA8B7D0F51C35A : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09FA8B7D0F51C35A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4A3BE94EE12D0DAC(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::Struct_2_310B46602BEB4586 a3, ::RPG::GameCore::FixPoint& a4, ::System::Nullable_1<::RPG::GameCore::FixPoint> a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::Struct_2_310B46602BEB4586, ::RPG::GameCore::FixPoint&, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_09FA8B7D0F51C35A_METHOD_2_4A3BE94EE12D0DAC_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
