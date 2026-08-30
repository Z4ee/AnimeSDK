#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_A19DDDCD5E970CDE_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1DDE6BB0)
#define CLASS_3_A19DDDCD5E970CDE_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1DDE6BF0)
#define CLASS_3_A19DDDCD5E970CDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE6BE0)

inline static constexpr unsigned int Class_3_A19DDDCD5E970CDE_TypeDefinitionIndex = 22397;

class Class_3_A19DDDCD5E970CDE : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::System::String*>* GCLBNEHOIDD; // 0x20
	::RPG::GameCore::TargetEvaluator* BPMLAGEHDPE; // 0x28
	::System::Boolean DIOGHDMOLBA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A19DDDCD5E970CDE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A19DDDCD5E970CDE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A19DDDCD5E970CDE*&))((::PBYTE)hIl2Cpp + CLASS_3_A19DDDCD5E970CDE_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A19DDDCD5E970CDE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A19DDDCD5E970CDE*))((::PBYTE)hIl2Cpp + CLASS_3_A19DDDCD5E970CDE_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
