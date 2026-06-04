#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckTeamEntityNumberAxis; }

#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0xB03F110)
#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0xB03EAD0)
#define CLASS_2_AAAC39F35A3EBF71_METHOD_2_FC1DB0E37466360A_OFFSET UNITYSDK_OFFSET(0xB03EB40)
#define CLASS_2_AAAC39F35A3EBF71__CTOR_OFFSET UNITYSDK_OFFSET(0xB03EAC0)

inline static constexpr unsigned int Class_2_AAAC39F35A3EBF71_TypeDefinitionIndex = 50820;

class Class_2_AAAC39F35A3EBF71 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckTeamEntityNumberAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckTeamEntityNumberAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckTeamEntityNumberAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_FC1DB0E37466360A(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_FC1DB0E37466360A_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AAAC39F35A3EBF71_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
