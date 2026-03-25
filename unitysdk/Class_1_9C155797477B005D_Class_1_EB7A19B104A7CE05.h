#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StageBattleEventRow; }

#define CLASS_1_9C155797477B005D_CLASS_1_EB7A19B104A7CE05_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD17FE80)
#define CLASS_1_9C155797477B005D_CLASS_1_EB7A19B104A7CE05__CTOR_OFFSET UNITYSDK_OFFSET(0xD17F2C0)

inline static constexpr unsigned int Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05_TypeDefinitionIndex = 45045;

class Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05 : public ::System::Object
{
public:
	::RPG::GameCore::StageBattleEventRow* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_CLASS_1_EB7A19B104A7CE05__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_CLASS_1_EB7A19B104A7CE05_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
