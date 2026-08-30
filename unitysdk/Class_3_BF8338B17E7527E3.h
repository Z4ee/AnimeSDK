#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BF8338B17E7527E3_METHOD_3_28DFC52A1206DD2C_OFFSET UNITYSDK_OFFSET(0x1DC6D790)
#define CLASS_3_BF8338B17E7527E3_METHOD_3_9B7C85FBDDFDAE6D_OFFSET UNITYSDK_OFFSET(0x1DC6D7E0)
#define CLASS_3_BF8338B17E7527E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D7D0)

inline static constexpr unsigned int Class_3_BF8338B17E7527E3_TypeDefinitionIndex = 22907;

class Class_3_BF8338B17E7527E3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GBOEIMOIMJG; // 0x18
	::RPG::GameCore::DynamicFloat* NMCLEENBEAL; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::RPG::GameCore::DynamicFloat* BIFBJDKMKDL; // 0x30
	::System::Boolean GFDBIGKJAGK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_28DFC52A1206DD2C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF8338B17E7527E3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF8338B17E7527E3*&))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3_METHOD_3_28DFC52A1206DD2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B7C85FBDDFDAE6D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF8338B17E7527E3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF8338B17E7527E3*))((::PBYTE)hIl2Cpp + CLASS_3_BF8338B17E7527E3_METHOD_3_9B7C85FBDDFDAE6D_OFFSET))(a1, a2);
	}
};
