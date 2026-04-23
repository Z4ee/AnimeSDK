#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_E1E593E0262E3070_METHOD_3_A0C19895998C289D_OFFSET UNITYSDK_OFFSET(0x183BFAB0)
#define CLASS_3_E1E593E0262E3070_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x183BFA30)
#define CLASS_3_E1E593E0262E3070__CTOR_OFFSET UNITYSDK_OFFSET(0x183BFA80)

inline static constexpr unsigned int Class_3_E1E593E0262E3070_TypeDefinitionIndex = 21202;

class Class_3_E1E593E0262E3070 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1E593E0262E3070__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E1E593E0262E3070*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E1E593E0262E3070*&))((::PBYTE)hIl2Cpp + CLASS_3_E1E593E0262E3070_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A0C19895998C289D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E1E593E0262E3070* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E1E593E0262E3070*))((::PBYTE)hIl2Cpp + CLASS_3_E1E593E0262E3070_METHOD_3_A0C19895998C289D_OFFSET))(a1, a2);
	}
};
