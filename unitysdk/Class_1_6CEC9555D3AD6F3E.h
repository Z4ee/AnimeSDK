#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EF84C297A4543223.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DragableRectController_Class_3_50D343C44D28BEFB_7; }
namespace MoleMole { class DragableRectController_Class_3_50D343C44D28BEFB_8; }

#define CLASS_1_6CEC9555D3AD6F3E_METHOD_1_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x14C937F0)
#define CLASS_1_6CEC9555D3AD6F3E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x14C93840)
#define CLASS_1_6CEC9555D3AD6F3E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14C937A0)
#define CLASS_1_6CEC9555D3AD6F3E__CTOR_OFFSET UNITYSDK_OFFSET(0x14C93790)

inline static constexpr unsigned int Class_1_6CEC9555D3AD6F3E_TypeDefinitionIndex = 68899;

class Class_1_6CEC9555D3AD6F3E : public ::System::Object
{
public:
	::MoleMole::DragableRectController_Class_3_50D343C44D28BEFB_7* Field_1_5; // 0x10
	::MoleMole::DragableRectController_Class_3_50D343C44D28BEFB_8* Field_1_6; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::Enum_3_EF84C297A4543223 Field_1_0; // 0x28
	::System::Single Field_1_4; // 0x2C
	::UnityEngine::Vector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEC9555D3AD6F3E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEC9555D3AD6F3E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AA8656BCDBBD4870(::Enum_3_EF84C297A4543223 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_EF84C297A4543223))((::PBYTE)hIl2Cpp + CLASS_1_6CEC9555D3AD6F3E_METHOD_1_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CEC9555D3AD6F3E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
