#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_0F82B10534F7616F_CLASS_1_0AB3957A5CD667A3__CTOR_OFFSET UNITYSDK_OFFSET(0x198F8CA0)

inline static constexpr unsigned int Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3_TypeDefinitionIndex = 56148;

class Class_2_0F82B10534F7616F_Class_1_0AB3957A5CD667A3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* EEBIPMBCMED; // 0x10
	::System::Boolean AAMBGHEEACK; // 0x18
	::System::UInt32 ILHPFNCIOJN; // 0x1C
	::System::Double ONNIAEPAHGE; // 0x20
	::System::UInt32 JFDHJABDMOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F82B10534F7616F_CLASS_1_0AB3957A5CD667A3__CTOR_OFFSET))(this);
	}
};
