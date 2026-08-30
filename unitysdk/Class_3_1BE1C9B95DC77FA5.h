#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_1BE1C9B95DC77FA5_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1DC6AB60)
#define CLASS_3_1BE1C9B95DC77FA5_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1DC6AB10)
#define CLASS_3_1BE1C9B95DC77FA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6AB50)

inline static constexpr unsigned int Class_3_1BE1C9B95DC77FA5_TypeDefinitionIndex = 23916;

class Class_3_1BE1C9B95DC77FA5 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* KJDKAOPEMFF; // 0x20
	::RPG::GameCore::DynamicFloat* DIFDKADNNDK; // 0x28
	::System::Boolean EOAFKHDEJCO; // 0x30
	::RPG::GameCore::EnumStatusType LMIODAHFGOA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1BE1C9B95DC77FA5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1BE1C9B95DC77FA5*&))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1BE1C9B95DC77FA5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1BE1C9B95DC77FA5*))((::PBYTE)hIl2Cpp + CLASS_3_1BE1C9B95DC77FA5_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
