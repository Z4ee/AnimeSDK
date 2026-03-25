#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillPropertyModifyType.h"
#include "unitysdk/RPG/GameCore/SkillPropertyType.h"
#include "unitysdk/Struct_2_2082B4C370A6B46A.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B213EAEBAA108779_METHOD_1_042F8C2324A4CBE2_1_OFFSET UNITYSDK_OFFSET(0x8CC76A0)
#define CLASS_1_B213EAEBAA108779_METHOD_1_042F8C2324A4CBE2_OFFSET UNITYSDK_OFFSET(0x8CC7570)
#define CLASS_1_B213EAEBAA108779_METHOD_1_23F8D2F8859BA3A4_OFFSET UNITYSDK_OFFSET(0x8CC77D0)
#define CLASS_1_B213EAEBAA108779__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC74A0)

inline static constexpr unsigned int Class_1_B213EAEBAA108779_TypeDefinitionIndex = 46493;

class Class_1_B213EAEBAA108779 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_2082B4C370A6B46A>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B213EAEBAA108779__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_042F8C2324A4CBE2(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillPropertyModifyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B213EAEBAA108779_METHOD_1_042F8C2324A4CBE2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_042F8C2324A4CBE2_1(::RPG::GameCore::SkillPropertyType a1, ::RPG::GameCore::SkillPropertyModifyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillPropertyType, ::RPG::GameCore::SkillPropertyModifyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B213EAEBAA108779_METHOD_1_042F8C2324A4CBE2_1_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_2082B4C370A6B46A Method_1_23F8D2F8859BA3A4(::RPG::GameCore::SkillPropertyType a1)
	{
		return ((::Struct_2_2082B4C370A6B46A(*)(::PVOID, ::RPG::GameCore::SkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_B213EAEBAA108779_METHOD_1_23F8D2F8859BA3A4_OFFSET))(this, a1);
	}
};
