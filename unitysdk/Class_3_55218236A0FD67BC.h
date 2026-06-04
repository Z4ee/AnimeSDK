#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_3_55218236A0FD67BC_METHOD_3_59C91D10D1D461D5_OFFSET UNITYSDK_OFFSET(0x190EAC80)
#define CLASS_3_55218236A0FD67BC_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x190EAD00)
#define CLASS_3_55218236A0FD67BC__CTOR_OFFSET UNITYSDK_OFFSET(0x190EACD0)

inline static constexpr unsigned int Class_3_55218236A0FD67BC_TypeDefinitionIndex = 22900;

class Class_3_55218236A0FD67BC : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::SkillType>* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55218236A0FD67BC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_59C91D10D1D461D5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55218236A0FD67BC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55218236A0FD67BC*&))((::PBYTE)hIl2Cpp + CLASS_3_55218236A0FD67BC_METHOD_3_59C91D10D1D461D5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55218236A0FD67BC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55218236A0FD67BC*))((::PBYTE)hIl2Cpp + CLASS_3_55218236A0FD67BC_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
