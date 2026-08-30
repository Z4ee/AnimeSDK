#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_7BD30926656A6DD2_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1C760630)
#define CLASS_3_7BD30926656A6DD2_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1C760670)
#define CLASS_3_7BD30926656A6DD2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C760660)

inline static constexpr unsigned int Class_3_7BD30926656A6DD2_TypeDefinitionIndex = 20685;

class Class_3_7BD30926656A6DD2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* OJJADIPMAGO; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* IFBAFKFODAA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7BD30926656A6DD2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7BD30926656A6DD2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7BD30926656A6DD2*&))((::PBYTE)hIl2Cpp + CLASS_3_7BD30926656A6DD2_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7BD30926656A6DD2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7BD30926656A6DD2*))((::PBYTE)hIl2Cpp + CLASS_3_7BD30926656A6DD2_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
