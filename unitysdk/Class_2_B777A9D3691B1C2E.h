#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_A5536A8EDCDEB606.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B777A9D3691B1C2E_METHOD_2_4B8BB754EBD146AC_OFFSET UNITYSDK_OFFSET(0x12AA25B0)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12AA2790)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12AA2730)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x12AA1E20)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_895E6BF2EDCD95D0_OFFSET UNITYSDK_OFFSET(0x12AA2620)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x12AA1CB0)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_B5EA5DD8B4C0957C_OFFSET UNITYSDK_OFFSET(0x12AA26B0)
#define CLASS_2_B777A9D3691B1C2E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12AA2560)
#define CLASS_2_B777A9D3691B1C2E__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA2720)

inline static constexpr unsigned int Class_2_B777A9D3691B1C2E_TypeDefinitionIndex = 50402;

class Class_2_B777A9D3691B1C2E : public ::Class_1_321489CFFF7B18E7
{
public:
	::RPG::GameCore::TransformComponent* Field_2_0; // 0x18
	::System::String* Field_2_1; // 0x20
	::RPG::GameCore::CharacterModelComponent* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::Struct_2_A5536A8EDCDEB606 Field_2_4; // 0x34
	::RPG::MVector3 Field_2_5; // 0x74
	::System::Single Field_2_6; // 0x80
	::System::Single Field_2_7; // 0x84
	::RPG::MVector3 Field_2_8; // 0x88
	::System::Int32 Field_2_9; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_4B8BB754EBD146AC()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_4B8BB754EBD146AC_OFFSET))(this);
	}

	::Struct_2_A5536A8EDCDEB606 Method_2_895E6BF2EDCD95D0()
	{
		return ((::Struct_2_A5536A8EDCDEB606(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_895E6BF2EDCD95D0_OFFSET))(this);
	}

	::RPG::MVector3 Method_2_B5EA5DD8B4C0957C()
	{
		return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_B5EA5DD8B4C0957C_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B777A9D3691B1C2E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
