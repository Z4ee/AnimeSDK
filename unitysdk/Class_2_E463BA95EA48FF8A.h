#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckHPPercentAxis; }

#define CLASS_2_E463BA95EA48FF8A_METHOD_2_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x11B144C0)
#define CLASS_2_E463BA95EA48FF8A_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x11B146B0)
#define CLASS_2_E463BA95EA48FF8A_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x11B14450)
#define CLASS_2_E463BA95EA48FF8A__CTOR_OFFSET UNITYSDK_OFFSET(0x11B14440)

inline static constexpr unsigned int Class_2_E463BA95EA48FF8A_TypeDefinitionIndex = 50145;

class Class_2_E463BA95EA48FF8A : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckHPPercentAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckHPPercentAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckHPPercentAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_39C75ED00C6629F7(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A_METHOD_2_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
