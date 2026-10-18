#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_96ECD940631FC8B8_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1CD54B80)
#define CLASS_3_96ECD940631FC8B8_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1CD54B30)
#define CLASS_3_96ECD940631FC8B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD54B70)

inline static constexpr unsigned int Class_3_96ECD940631FC8B8_TypeDefinitionIndex = 23605;

class Class_3_96ECD940631FC8B8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* ALDLOOKHHGI; // 0x20
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x28
	::System::Boolean GEKABEICGIN; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96ECD940631FC8B8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_96ECD940631FC8B8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_96ECD940631FC8B8*&))((::PBYTE)hIl2Cpp + CLASS_3_96ECD940631FC8B8_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_96ECD940631FC8B8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_96ECD940631FC8B8*))((::PBYTE)hIl2Cpp + CLASS_3_96ECD940631FC8B8_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
