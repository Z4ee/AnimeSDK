#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class LineLightingV2;
namespace UnityEngine { class Transform; }

#define CLASS_1_D1E36A18B0B6134C_METHOD_1_BC9469D0AE2CE5A1_OFFSET UNITYSDK_OFFSET(0x11D55250)
#define CLASS_1_D1E36A18B0B6134C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D551E0)
#define CLASS_1_D1E36A18B0B6134C_METHOD_1_D20BD6C944921F7A_OFFSET UNITYSDK_OFFSET(0x11D550E0)
#define CLASS_1_D1E36A18B0B6134C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11D552F0)
#define CLASS_1_D1E36A18B0B6134C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D550D0)

inline static constexpr unsigned int Class_1_D1E36A18B0B6134C_TypeDefinitionIndex = 65518;

class Class_1_D1E36A18B0B6134C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_9; // 0x10
	::MoleMole::EntityHandle Field_1_11; // 0x18
	::LineLightingV2* Field_1_0; // 0x28
	::UnityEngine::Transform* Field_1_10; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_1; // 0x3C
	::System::Boolean Field_1_14; // 0x40
	::System::Boolean Field_1_15; // 0x41
	::System::Boolean Field_1_7; // 0x42
	::System::Single Field_1_6; // 0x44
	::System::Single Field_1_2; // 0x48
	::System::Single Field_1_13; // 0x4C
	::System::Single Field_1_3; // 0x50
	::System::Boolean Field_1_8; // 0x54
	::System::Boolean Field_1_12; // 0x55
	::System::Single Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E36A18B0B6134C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D20BD6C944921F7A(::Class_1_D1E36A18B0B6134C* a1)
	{
		return ((::System::Void(*)(::Class_1_D1E36A18B0B6134C*))((::PBYTE)hIl2Cpp + CLASS_1_D1E36A18B0B6134C_METHOD_1_D20BD6C944921F7A_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E36A18B0B6134C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_D1E36A18B0B6134C* Method_1_BC9469D0AE2CE5A1()
	{
		return ((::Class_1_D1E36A18B0B6134C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E36A18B0B6134C_METHOD_1_BC9469D0AE2CE5A1_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E36A18B0B6134C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
