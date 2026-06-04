#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_2F326B57B6445F8D;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_5CED17EAC028FA1E_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x192CFA80)
#define CLASS_3_5CED17EAC028FA1E_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x192CF9B0)
#define CLASS_3_5CED17EAC028FA1E__CTOR_OFFSET UNITYSDK_OFFSET(0x192CFA30)

inline static constexpr unsigned int Class_3_5CED17EAC028FA1E_TypeDefinitionIndex = 21940;

class Class_3_5CED17EAC028FA1E : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_2F326B57B6445F8D*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5CED17EAC028FA1E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5CED17EAC028FA1E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5CED17EAC028FA1E*&))((::PBYTE)hIl2Cpp + CLASS_3_5CED17EAC028FA1E_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5CED17EAC028FA1E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5CED17EAC028FA1E*))((::PBYTE)hIl2Cpp + CLASS_3_5CED17EAC028FA1E_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
