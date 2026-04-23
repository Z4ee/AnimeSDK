#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckTeamEntityNumberAxis; }

#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x11E471B0)
#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_BAFF4AA963A7B55B_OFFSET UNITYSDK_OFFSET(0x11E46E60)
#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x11E46DF0)
#define CLASS_2_AAAC39F35A3EBF71__CTOR_OFFSET UNITYSDK_OFFSET(0x11E46DE0)

inline static constexpr unsigned int Class_2_AAAC39F35A3EBF71_TypeDefinitionIndex = 50153;

class Class_2_AAAC39F35A3EBF71 : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckTeamEntityNumberAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTeamEntityNumberAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTeamEntityNumberAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_BAFF4AA963A7B55B(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_BAFF4AA963A7B55B_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
