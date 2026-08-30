#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_2327EDF788F2C194_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1D3440A0)
#define CLASS_3_2327EDF788F2C194_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1D3440E0)
#define CLASS_3_2327EDF788F2C194__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3440D0)

inline static constexpr unsigned int Class_3_2327EDF788F2C194_TypeDefinitionIndex = 22584;

class Class_3_2327EDF788F2C194 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* CIDCEJCGOGB; // 0x20
	::System::Boolean NMMJBGFDNAI; // 0x28
	::RPG::GameCore::SkillSPProgressType IGGMDBOEPCN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2327EDF788F2C194__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2327EDF788F2C194*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2327EDF788F2C194*&))((::PBYTE)hIl2Cpp + CLASS_3_2327EDF788F2C194_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2327EDF788F2C194* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2327EDF788F2C194*))((::PBYTE)hIl2Cpp + CLASS_3_2327EDF788F2C194_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
