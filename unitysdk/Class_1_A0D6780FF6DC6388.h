#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
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

#define CLASS_1_A0D6780FF6DC6388_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12598980)
#define CLASS_1_A0D6780FF6DC6388_METHOD_1_22480F729441D318_OFFSET UNITYSDK_OFFSET(0x12599880)
#define CLASS_1_A0D6780FF6DC6388_METHOD_1_24073417D15337B9_OFFSET UNITYSDK_OFFSET(0x12598D00)
#define CLASS_1_A0D6780FF6DC6388_METHOD_1_5480331AA6A0764C_OFFSET UNITYSDK_OFFSET(0x12599300)
#define CLASS_1_A0D6780FF6DC6388_METHOD_1_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0x125989E0)
#define CLASS_1_A0D6780FF6DC6388_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x125997E0)
#define CLASS_1_A0D6780FF6DC6388__CTOR_OFFSET UNITYSDK_OFFSET(0x12598950)

inline static constexpr unsigned int Class_1_A0D6780FF6DC6388_TypeDefinitionIndex = 87051;

class Class_1_A0D6780FF6DC6388 : public ::System::Object
{
public:
	::Class_3_1A58F01F41846A1D* Field_1_11; // 0x10
	::System::Action* Field_1_10; // 0x18
	::Foundation::Variable_1<::UnityEngine::Quaternion> Field_1_2; // 0x20
	::Class_3_C93CC3D2C2AC4067* Field_1_4; // 0x48
	::Class_3_883E597458B91E77* Field_1_5; // 0x50
	::UnityEngine::Vector2 Field_1_0; // 0x58
	::UnityEngine::Vector2 Field_1_1; // 0x60
	::System::Int32 Field_1_7; // 0x68
	::System::Boolean Field_1_6; // 0x6C

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::Foundation::Variable_1<::UnityEngine::Quaternion> a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Foundation::Variable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94AEC135B3D3BA4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_METHOD_1_94AEC135B3D3BA4F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_24073417D15337B9(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_METHOD_1_24073417D15337B9_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_5480331AA6A0764C(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_METHOD_1_5480331AA6A0764C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_22480F729441D318()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0D6780FF6DC6388_METHOD_1_22480F729441D318_OFFSET))(this);
	}
};
