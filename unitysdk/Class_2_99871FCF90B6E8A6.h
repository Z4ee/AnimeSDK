#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_11F507CAFD9CD2DF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"

class Class_0_16E4307DCC419505_450;

#define CLASS_2_99871FCF90B6E8A6_METHOD_2_6D38A288B76C7EDD_OFFSET UNITYSDK_OFFSET(0xBFD7A70)
#define CLASS_2_99871FCF90B6E8A6_METHOD_2_7AD0318882400EEE_OFFSET UNITYSDK_OFFSET(0xBFD7AE0)
#define CLASS_2_99871FCF90B6E8A6__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD7BC0)

inline static constexpr unsigned int Class_2_99871FCF90B6E8A6_TypeDefinitionIndex = 51527;

class Class_2_99871FCF90B6E8A6 : public ::Class_1_11F507CAFD9CD2DF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99871FCF90B6E8A6__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_450* Method_2_6D38A288B76C7EDD(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_450*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_99871FCF90B6E8A6_METHOD_2_6D38A288B76C7EDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AD0318882400EEE(::RPG::GameCore::FixPoint a1, ::Struct_2_87C8F594A107C13B a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Struct_2_87C8F594A107C13B))((::PBYTE)hIl2Cpp + CLASS_2_99871FCF90B6E8A6_METHOD_2_7AD0318882400EEE_OFFSET))(this, a1, a2);
	}
};
