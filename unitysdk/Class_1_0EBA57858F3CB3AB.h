#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
class Class_3_1A58F01F41846A1D;
class Class_3_883E597458B91E77;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_1_0EBA57858F3CB3AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC6F440)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_22480F729441D318_OFFSET UNITYSDK_OFFSET(0xDC700E0)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xDC6FFE0)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0xDC70060)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_93A78F02F0BA479D_OFFSET UNITYSDK_OFFSET(0xDC6FCE0)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0xDC6F4A0)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0xDC6FF40)
#define CLASS_1_0EBA57858F3CB3AB_METHOD_1_F449451B866AE6B3_OFFSET UNITYSDK_OFFSET(0xDC6F7C0)
#define CLASS_1_0EBA57858F3CB3AB__CTOR_OFFSET UNITYSDK_OFFSET(0xDC6F420)

inline static constexpr unsigned int Class_1_0EBA57858F3CB3AB_TypeDefinitionIndex = 68874;

class Class_1_0EBA57858F3CB3AB : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::Class_3_C93CC3D2C2AC4067* Field_1_14; // 0x18
	::Class_3_1A58F01F41846A1D* Field_1_13; // 0x20
	::Class_3_883E597458B91E77* Field_1_15; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::UnityEngine::Vector2 Field_1_6; // 0x34
	::UnityEngine::Vector2 Field_1_0; // 0x3C
	::System::Int32 Field_1_11; // 0x44
	::System::Single Field_1_5; // 0x48
	::System::Boolean Field_1_10; // 0x4C
	::System::Boolean Field_1_9; // 0x4D
	::System::Single Field_1_7; // 0x50

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94AEC135B3D3BA4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_94AEC135B3D3BA4F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F449451B866AE6B3(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_F449451B866AE6B3_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_93A78F02F0BA479D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_93A78F02F0BA479D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Single Method_1_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_705AF43C01ED360A_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_22480F729441D318()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EBA57858F3CB3AB_METHOD_1_22480F729441D318_OFFSET))(this);
	}
};
