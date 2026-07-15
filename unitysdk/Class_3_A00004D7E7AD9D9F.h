#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A00004D7E7AD9D9F_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1B462E50)
#define CLASS_3_A00004D7E7AD9D9F_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1B462E90)
#define CLASS_3_A00004D7E7AD9D9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B462E80)

inline static constexpr unsigned int Class_3_A00004D7E7AD9D9F_TypeDefinitionIndex = 20747;

class Class_3_A00004D7E7AD9D9F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A00004D7E7AD9D9F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A00004D7E7AD9D9F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A00004D7E7AD9D9F*&))((::PBYTE)hIl2Cpp + CLASS_3_A00004D7E7AD9D9F_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A00004D7E7AD9D9F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A00004D7E7AD9D9F*))((::PBYTE)hIl2Cpp + CLASS_3_A00004D7E7AD9D9F_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
