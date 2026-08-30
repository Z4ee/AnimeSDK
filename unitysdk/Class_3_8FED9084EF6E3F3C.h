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

#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1CCA2930)
#define CLASS_3_8FED9084EF6E3F3C_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CCA28D0)
#define CLASS_3_8FED9084EF6E3F3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA2910)

inline static constexpr unsigned int Class_3_8FED9084EF6E3F3C_TypeDefinitionIndex = 23917;

class Class_3_8FED9084EF6E3F3C : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* GCINJNJBNLJ; // 0x28
	::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x30
	::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x38
	::System::Boolean KJIFOFPNLNN; // 0x3C
	::System::Boolean HDCDMFMCGMJ; // 0x3D
	::System::Boolean EOAFKHDEJCO; // 0x3E
	::System::Boolean AGCFPAIEKPL; // 0x3F
	::RPG::GameCore::DispelOrder FLBGELFEBCK; // 0x40

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
