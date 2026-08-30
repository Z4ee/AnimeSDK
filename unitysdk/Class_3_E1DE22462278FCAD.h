#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_E1DE22462278FCAD_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1C8A13B0)
#define CLASS_3_E1DE22462278FCAD_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1C8A1360)
#define CLASS_3_E1DE22462278FCAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A13A0)

inline static constexpr unsigned int Class_3_E1DE22462278FCAD_TypeDefinitionIndex = 23014;

class Class_3_E1DE22462278FCAD : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* OEOMFBFJHDM; // 0x18
	::RPG::GameCore::TargetEvaluator* HKFBIPNCBII; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::RPG::GameCore::ActionDelayChangeTypeMask KHGGDOMNEJA; // 0x30
	::System::Boolean PBNJDHFCHHC; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1DE22462278FCAD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E1DE22462278FCAD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E1DE22462278FCAD*&))((::PBYTE)hIl2Cpp + CLASS_3_E1DE22462278FCAD_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E1DE22462278FCAD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E1DE22462278FCAD*))((::PBYTE)hIl2Cpp + CLASS_3_E1DE22462278FCAD_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
