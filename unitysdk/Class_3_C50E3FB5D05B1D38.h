#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_C50E3FB5D05B1D38_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x18F9EC10)
#define CLASS_3_C50E3FB5D05B1D38_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x18F9EC90)
#define CLASS_3_C50E3FB5D05B1D38__CTOR_OFFSET UNITYSDK_OFFSET(0x18F9EC60)

inline static constexpr unsigned int Class_3_C50E3FB5D05B1D38_TypeDefinitionIndex = 22816;

class Class_3_C50E3FB5D05B1D38 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtProjectileDataList*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::RtProjectileOnHitList*>* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C50E3FB5D05B1D38__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C50E3FB5D05B1D38*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C50E3FB5D05B1D38*&))((::PBYTE)hIl2Cpp + CLASS_3_C50E3FB5D05B1D38_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C50E3FB5D05B1D38* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C50E3FB5D05B1D38*))((::PBYTE)hIl2Cpp + CLASS_3_C50E3FB5D05B1D38_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
