#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_DF1481A29952185A_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1D644F90)
#define CLASS_3_DF1481A29952185A_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D644FD0)
#define CLASS_3_DF1481A29952185A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D644FC0)

inline static constexpr unsigned int Class_3_DF1481A29952185A_TypeDefinitionIndex = 19889;

class Class_3_DF1481A29952185A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::Enum_3_ED790DAC948A65A9 FODBMMCKAEN; // 0x20
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DF1481A29952185A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DF1481A29952185A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DF1481A29952185A*&))((::PBYTE)hIl2Cpp + CLASS_3_DF1481A29952185A_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DF1481A29952185A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DF1481A29952185A*))((::PBYTE)hIl2Cpp + CLASS_3_DF1481A29952185A_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
