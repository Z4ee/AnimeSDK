#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_F8C627038C8DD30C_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x195B52A0)
#define CLASS_3_F8C627038C8DD30C_METHOD_3_B4C09A5853E73B8A_OFFSET UNITYSDK_OFFSET(0x195B5320)
#define CLASS_3_F8C627038C8DD30C__CTOR_OFFSET UNITYSDK_OFFSET(0x195B52F0)

inline static constexpr unsigned int Class_3_F8C627038C8DD30C_TypeDefinitionIndex = 20255;

class Class_3_F8C627038C8DD30C : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::SetJumpEnergyType Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F8C627038C8DD30C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F8C627038C8DD30C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F8C627038C8DD30C*&))((::PBYTE)hIl2Cpp + CLASS_3_F8C627038C8DD30C_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B4C09A5853E73B8A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F8C627038C8DD30C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F8C627038C8DD30C*))((::PBYTE)hIl2Cpp + CLASS_3_F8C627038C8DD30C_METHOD_3_B4C09A5853E73B8A_OFFSET))(a1, a2);
	}
};
