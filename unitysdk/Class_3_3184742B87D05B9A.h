#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_3184742B87D05B9A_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1C8E1190)
#define CLASS_3_3184742B87D05B9A_METHOD_3_8041BB6608BA1545_OFFSET UNITYSDK_OFFSET(0x1C8E1450)
#define CLASS_3_3184742B87D05B9A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E11D0)

inline static constexpr unsigned int Class_3_3184742B87D05B9A_TypeDefinitionIndex = 23899;

class Class_3_3184742B87D05B9A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* NMMOOCJILEC; // 0x18
	::RPG::GameCore::DynamicFloat* OCGINFHNEPF; // 0x20
	::RPG::GameCore::DynamicFloat* DIPCHCFIPDB; // 0x28
	::RPG::GameCore::DynamicFloat* PINNPLKBABH; // 0x30
	::RPG::GameCore::DynamicFloat* AANFIMJNOKA; // 0x38
	::RPG::GameCore::DynamicFloat* IHLBHMNLJMN; // 0x40
	::RPG::GameCore::DynamicFloat* FBIJGGIOLNO; // 0x48
	::RPG::GameCore::DynamicFloat* NBEEPDPFAHG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3184742B87D05B9A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3184742B87D05B9A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3184742B87D05B9A*&))((::PBYTE)hIl2Cpp + CLASS_3_3184742B87D05B9A_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8041BB6608BA1545(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3184742B87D05B9A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3184742B87D05B9A*))((::PBYTE)hIl2Cpp + CLASS_3_3184742B87D05B9A_METHOD_3_8041BB6608BA1545_OFFSET))(a1, a2);
	}
};
