#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4FD36003027AC99;
class Class_2_49CAB3DE74280C58;
namespace RPG::GameCore { class ChimeraDuelEntityAttributeValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityBranchValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelEntityValueSum; }

#define CLASS_1_1F3D4D932F53BEDB_METHOD_1_7FFB2CD1644F547D_OFFSET UNITYSDK_OFFSET(0x117AAF80)
#define CLASS_1_1F3D4D932F53BEDB_METHOD_1_84A4962FCBE5EBDE_OFFSET UNITYSDK_OFFSET(0x117AACA0)
#define CLASS_1_1F3D4D932F53BEDB_METHOD_1_AC2D397676A73F00_OFFSET UNITYSDK_OFFSET(0x117AAFF0)
#define CLASS_1_1F3D4D932F53BEDB_METHOD_1_C412002298AADDFC_OFFSET UNITYSDK_OFFSET(0x117AAE20)
#define CLASS_1_1F3D4D932F53BEDB__CTOR_OFFSET UNITYSDK_OFFSET(0x117AAC90)

inline static constexpr unsigned int Class_1_1F3D4D932F53BEDB_TypeDefinitionIndex = 71155;

class Class_1_1F3D4D932F53BEDB : public ::System::Object
{
public:
	::Class_1_C4FD36003027AC99* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_C4FD36003027AC99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4FD36003027AC99*))((::PBYTE)hIl2Cpp + CLASS_1_1F3D4D932F53BEDB__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_84A4962FCBE5EBDE(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityValueGetterBase*))((::PBYTE)hIl2Cpp + CLASS_1_1F3D4D932F53BEDB_METHOD_1_84A4962FCBE5EBDE_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_C412002298AADDFC(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_1F3D4D932F53BEDB_METHOD_1_C412002298AADDFC_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_7FFB2CD1644F547D(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityAttributeValueGetter*))((::PBYTE)hIl2Cpp + CLASS_1_1F3D4D932F53BEDB_METHOD_1_7FFB2CD1644F547D_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_AC2D397676A73F00(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + CLASS_1_1F3D4D932F53BEDB_METHOD_1_AC2D397676A73F00_OFFSET))(this, a1, a2);
	}
};
