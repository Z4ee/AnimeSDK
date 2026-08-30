#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }

#define CLASS_3_DDD940BBACB32274_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1CD249D0)
#define CLASS_3_DDD940BBACB32274_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1CD24A20)
#define CLASS_3_DDD940BBACB32274__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD24A10)

inline static constexpr unsigned int Class_3_DDD940BBACB32274_TypeDefinitionIndex = 10229;

class Class_3_DDD940BBACB32274 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* KFNMIEMBJGD; // 0x18
	::System::UInt32 JHIOLAIGBCM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDD940BBACB32274__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DDD940BBACB32274*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DDD940BBACB32274*&))((::PBYTE)hIl2Cpp + CLASS_3_DDD940BBACB32274_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DDD940BBACB32274* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DDD940BBACB32274*))((::PBYTE)hIl2Cpp + CLASS_3_DDD940BBACB32274_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
