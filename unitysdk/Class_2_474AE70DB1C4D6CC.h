#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_BD800F5B29A08E1F;
namespace RPG::GameCore { class CheckSkillSPAxis; }

#define CLASS_2_474AE70DB1C4D6CC_METHOD_2_4B1627D78D57FD39_OFFSET UNITYSDK_OFFSET(0x9BC9200)
#define CLASS_2_474AE70DB1C4D6CC_METHOD_2_81E944253FD1FF8F_OFFSET UNITYSDK_OFFSET(0x9BC8FC0)
#define CLASS_2_474AE70DB1C4D6CC_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x9BC8F50)
#define CLASS_2_474AE70DB1C4D6CC__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC8F40)

inline static constexpr unsigned int Class_2_474AE70DB1C4D6CC_TypeDefinitionIndex = 50150;

class Class_2_474AE70DB1C4D6CC : public ::Class_1_F9FBCC956DFCF137_3
{
public:
	::RPG::GameCore::CheckSkillSPAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillSPAxis* a1, ::Class_1_BD800F5B29A08E1F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillSPAxis*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_81E944253FD1FF8F(::Class_1_BD800F5B29A08E1F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC_METHOD_2_81E944253FD1FF8F_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_4B1627D78D57FD39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_474AE70DB1C4D6CC_METHOD_2_4B1627D78D57FD39_OFFSET))(this);
	}
};
