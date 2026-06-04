#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Nullable_1.h"

#define CLASS_2_E951147C9D992452_METHOD_2_08124E3DF0593B65_OFFSET UNITYSDK_OFFSET(0xDE52410)
#define CLASS_2_E951147C9D992452_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xDE53340)
#define CLASS_2_E951147C9D992452_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDE523D0)
#define CLASS_2_E951147C9D992452__CTOR_OFFSET UNITYSDK_OFFSET(0xDE53330)

inline static constexpr unsigned int Class_2_E951147C9D992452_TypeDefinitionIndex = 50170;

class Class_2_E951147C9D992452 : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E951147C9D992452__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E951147C9D992452_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_08124E3DF0593B65(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AntiLockHPStrength a2, ::Struct_2_87C8F594A107C13B a3, ::RPG::GameCore::FixPoint& a4, ::System::Nullable_1<::RPG::GameCore::FixPoint> a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AntiLockHPStrength, ::Struct_2_87C8F594A107C13B, ::RPG::GameCore::FixPoint&, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_2_E951147C9D992452_METHOD_2_08124E3DF0593B65_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E951147C9D992452_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
