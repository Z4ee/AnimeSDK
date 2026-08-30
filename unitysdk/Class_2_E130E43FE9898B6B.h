#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_E130E43FE9898B6B_METHOD_2_6AA84D66C8619AE3_OFFSET UNITYSDK_OFFSET(0x16DB74E0)
#define CLASS_2_E130E43FE9898B6B__CTOR_OFFSET UNITYSDK_OFFSET(0x16DB7660)

inline static constexpr unsigned int Class_2_E130E43FE9898B6B_TypeDefinitionIndex = 54502;

class Class_2_E130E43FE9898B6B : public ::Class_1_3207B23A0433048D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E130E43FE9898B6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6AA84D66C8619AE3(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::Struct_2_87C8F594A107C13B a3, ::RPG::GameCore::FixPoint& a4, ::System::Nullable_1<::RPG::GameCore::FixPoint> a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::Struct_2_87C8F594A107C13B, ::RPG::GameCore::FixPoint&, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_E130E43FE9898B6B_METHOD_2_6AA84D66C8619AE3_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
