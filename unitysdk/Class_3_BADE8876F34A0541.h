#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_5.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BADE8876F34A0541_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1D0E8690)
#define CLASS_3_BADE8876F34A0541_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D0E86D0)
#define CLASS_3_BADE8876F34A0541__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E86C0)

inline static constexpr unsigned int Class_3_BADE8876F34A0541_TypeDefinitionIndex = 23239;

class Class_3_BADE8876F34A0541 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x20
	::Enum_3_ED790DAC948A65A9_5 NOCCJLJPLKJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BADE8876F34A0541__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BADE8876F34A0541*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BADE8876F34A0541*&))((::PBYTE)hIl2Cpp + CLASS_3_BADE8876F34A0541_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BADE8876F34A0541* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BADE8876F34A0541*))((::PBYTE)hIl2Cpp + CLASS_3_BADE8876F34A0541_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
