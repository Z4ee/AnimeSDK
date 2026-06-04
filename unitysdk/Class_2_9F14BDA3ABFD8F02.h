#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_5.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class CheckSkillBPAxis; }

#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_12B9BCF82817FBA3_OFFSET UNITYSDK_OFFSET(0x1238AE50)
#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_512073A5E70F4E39_OFFSET UNITYSDK_OFFSET(0x1238B1D0)
#define CLASS_2_9F14BDA3ABFD8F02_METHOD_2_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x1238ADE0)
#define CLASS_2_9F14BDA3ABFD8F02__CTOR_OFFSET UNITYSDK_OFFSET(0x1238ADD0)

inline static constexpr unsigned int Class_2_9F14BDA3ABFD8F02_TypeDefinitionIndex = 50815;

class Class_2_9F14BDA3ABFD8F02 : public ::Class_1_F9FBCC956DFCF137_5
{
public:
	::RPG::GameCore::CheckSkillBPAxis* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::CheckSkillBPAxis* a1, ::Class_1_AC66714FF5876767* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillBPAxis*, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_E7498AF04E8E685D_OFFSET))(this);
	}

	::System::Boolean Method_2_12B9BCF82817FBA3(::Class_1_AC66714FF5876767* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_AC66714FF5876767*))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_12B9BCF82817FBA3_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_512073A5E70F4E39()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14BDA3ABFD8F02_METHOD_2_512073A5E70F4E39_OFFSET))(this);
	}
};
