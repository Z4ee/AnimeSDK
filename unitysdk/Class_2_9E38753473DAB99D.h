#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2FDD10128E11FA91.h"
#include "unitysdk/Enum_3_9211FF666C768BEC.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_1_1EA8435E138F2E03;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_9E38753473DAB99D_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x171E0220)
#define CLASS_2_9E38753473DAB99D_METHOD_2_F3523094D45C4810_OFFSET UNITYSDK_OFFSET(0x171E02C0)
#define CLASS_2_9E38753473DAB99D__CTOR_OFFSET UNITYSDK_OFFSET(0x171E0230)

inline static constexpr unsigned int Class_2_9E38753473DAB99D_TypeDefinitionIndex = 89466;

class Class_2_9E38753473DAB99D : public ::Class_1_2FDD10128E11FA91
{
public:
	::System::Collections::Generic::Dictionary_2<::NodeGraph::VariantUnion, ::System::Collections::Generic::Dictionary_2<::NodeGraph::VariantUnion, ::Class_1_1EA8435E138F2E03*>*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E38753473DAB99D__CTOR_OFFSET))(this);
	}

	::Enum_3_9211FF666C768BEC Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_9211FF666C768BEC(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E38753473DAB99D_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_1_1EA8435E138F2E03* Method_2_F3523094D45C4810(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::NodeGraph::VariantUnion a3)
	{
		return ((::Class_1_1EA8435E138F2E03*(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + CLASS_2_9E38753473DAB99D_METHOD_2_F3523094D45C4810_OFFSET))(this, a1, a2, a3);
	}
};
