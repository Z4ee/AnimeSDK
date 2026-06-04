#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityBranchValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueSum; }

#define CLASS_1_DEDF70E310947F9A_METHOD_1_29C1E3B4D60472D6_OFFSET UNITYSDK_OFFSET(0x13B257C0)
#define CLASS_1_DEDF70E310947F9A_METHOD_1_7FFB2CD1644F547D_OFFSET UNITYSDK_OFFSET(0x13B25920)
#define CLASS_1_DEDF70E310947F9A_METHOD_1_9E862707D2DB2A25_OFFSET UNITYSDK_OFFSET(0x13B25630)
#define CLASS_1_DEDF70E310947F9A_METHOD_1_AC2D397676A73F00_OFFSET UNITYSDK_OFFSET(0x13B25990)
#define CLASS_1_DEDF70E310947F9A__CTOR_OFFSET UNITYSDK_OFFSET(0x13B25620)

inline static constexpr unsigned int Class_1_DEDF70E310947F9A_TypeDefinitionIndex = 72093;

class Class_1_DEDF70E310947F9A : public ::System::Object
{
public:
	::Class_1_A92BC063ED2379EB* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_DEDF70E310947F9A__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_9E862707D2DB2A25(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + CLASS_1_DEDF70E310947F9A_METHOD_1_9E862707D2DB2A25_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_29C1E3B4D60472D6(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_DEDF70E310947F9A_METHOD_1_29C1E3B4D60472D6_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_7FFB2CD1644F547D(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_DEDF70E310947F9A_METHOD_1_7FFB2CD1644F547D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_AC2D397676A73F00(::Class_2_B66C1067C0468FBB* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_B66C1067C0468FBB*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + CLASS_1_DEDF70E310947F9A_METHOD_1_AC2D397676A73F00_OFFSET))(this, a1, a2);
	}
};
