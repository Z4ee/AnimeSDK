#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_28C4495B70480EAD_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1CDA2CE0)
#define CLASS_3_28C4495B70480EAD_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CDA2D60)
#define CLASS_3_28C4495B70480EAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA2D40)

inline static constexpr unsigned int Class_3_28C4495B70480EAD_TypeDefinitionIndex = 21081;

class Class_3_28C4495B70480EAD : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::Boolean HAOKIGJPEII; // 0x20
	::System::Single DJFOFCKCEED; // 0x24
	::System::Int32 CNENJELDIFD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28C4495B70480EAD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_28C4495B70480EAD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_28C4495B70480EAD*&))((::PBYTE)hIl2Cpp + CLASS_3_28C4495B70480EAD_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_28C4495B70480EAD* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_28C4495B70480EAD*))((::PBYTE)hIl2Cpp + CLASS_3_28C4495B70480EAD_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
