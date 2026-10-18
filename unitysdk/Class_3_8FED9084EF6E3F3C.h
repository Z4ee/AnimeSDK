#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DispelOrder.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1CDE5650)
#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CDE55F0)
#define CLASS_3_8FED9084EF6E3F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5630)

inline static constexpr unsigned int Class_3_8FED9084EF6E3F3C_TypeDefinitionIndex = 24192;

class Class_3_8FED9084EF6E3F3C : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GCINJNJBNLJ; // 0x18
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x30
	::System::Boolean EOAFKHDEJCO; // 0x38
	::System::Boolean KJIFOFPNLNN; // 0x39
	::System::Boolean AGCFPAIEKPL; // 0x3A
	::System::Boolean HDCDMFMCGMJ; // 0x3B
	::RPG::GameCore::DispelOrder FLBGELFEBCK; // 0x3C
	::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FED9084EF6E3F3C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FED9084EF6E3F3C*&))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8FED9084EF6E3F3C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8FED9084EF6E3F3C*))((::PBYTE)hIl2Cpp + CLASS_3_8FED9084EF6E3F3C_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
