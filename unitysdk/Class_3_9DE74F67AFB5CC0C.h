#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinModePropertyType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_9DE74F67AFB5CC0C_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1849BE40)
#define CLASS_3_9DE74F67AFB5CC0C_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1849BE80)
#define CLASS_3_9DE74F67AFB5CC0C__CTOR_OFFSET UNITYSDK_OFFSET(0x1849BE70)

inline static constexpr unsigned int Class_3_9DE74F67AFB5CC0C_TypeDefinitionIndex = 19118;

class Class_3_9DE74F67AFB5CC0C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::FateRinModePropertyType Field_3_1; // 0x20
	::RPG::GameCore::PropertyModifyFunction Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9DE74F67AFB5CC0C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9DE74F67AFB5CC0C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9DE74F67AFB5CC0C*&))((::PBYTE)hIl2Cpp + CLASS_3_9DE74F67AFB5CC0C_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9DE74F67AFB5CC0C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9DE74F67AFB5CC0C*))((::PBYTE)hIl2Cpp + CLASS_3_9DE74F67AFB5CC0C_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
