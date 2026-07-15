#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckHPPercentAxis; }

#define CLASS_2_E463BA95EA48FF8A_METHOD_2_CD729A9634455FE2_OFFSET UNITYSDK_OFFSET(0x17035BC0)
#define CLASS_2_E463BA95EA48FF8A_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x17035B50)
#define CLASS_2_E463BA95EA48FF8A__CTOR_OFFSET UNITYSDK_OFFSET(0x17035B40)

inline static constexpr unsigned int Class_2_E463BA95EA48FF8A_TypeDefinitionIndex = 51897;

class Class_2_E463BA95EA48FF8A : public ::Class_1_F9FBCC956DFCF137_4
{
public:
	::RPG::GameCore::CheckHPPercentAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckHPPercentAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckHPPercentAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_CD729A9634455FE2(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_E463BA95EA48FF8A_METHOD_2_CD729A9634455FE2_OFFSET))(this, a1);
	}
};
