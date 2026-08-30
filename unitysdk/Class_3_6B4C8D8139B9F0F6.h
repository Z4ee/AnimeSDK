#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_6B4C8D8139B9F0F6_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1D0DC360)
#define CLASS_3_6B4C8D8139B9F0F6_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1D0DC320)
#define CLASS_3_6B4C8D8139B9F0F6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DC350)

inline static constexpr unsigned int Class_3_6B4C8D8139B9F0F6_TypeDefinitionIndex = 23863;

class Class_3_6B4C8D8139B9F0F6 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x20
	::Il2CppArray<::RPG::GameCore::RtProjectileDataList*>* JIAEPDIHNCH; // 0x28
	::Il2CppArray<::RPG::GameCore::RtProjectileOnHitList*>* IFGDJCJIECP; // 0x30
	::System::Boolean FKJPBMMCHFL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B4C8D8139B9F0F6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B4C8D8139B9F0F6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B4C8D8139B9F0F6*&))((::PBYTE)hIl2Cpp + CLASS_3_6B4C8D8139B9F0F6_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B4C8D8139B9F0F6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B4C8D8139B9F0F6*))((::PBYTE)hIl2Cpp + CLASS_3_6B4C8D8139B9F0F6_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
