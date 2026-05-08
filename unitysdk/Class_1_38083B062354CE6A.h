#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
class Class_3_1A58F01F41846A1D;
class Class_3_883E597458B91E77;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_1_38083B062354CE6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11EC2150)
#define CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11EC2EC0)
#define CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0x11EC2CD0)
#define CLASS_1_38083B062354CE6A_METHOD_1_77B144CA42B820F0_OFFSET UNITYSDK_OFFSET(0x11EC24D0)
#define CLASS_1_38083B062354CE6A_METHOD_1_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0x11EC21B0)
#define CLASS_1_38083B062354CE6A_METHOD_1_B88F221B047B1528_OFFSET UNITYSDK_OFFSET(0x11EC29E0)
#define CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x11EC2C30)
#define CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET UNITYSDK_OFFSET(0x11EC2D50)
#define CLASS_1_38083B062354CE6A__CTOR_OFFSET UNITYSDK_OFFSET(0x11EC2130)

inline static constexpr unsigned int Class_1_38083B062354CE6A_TypeDefinitionIndex = 70111;

class Class_1_38083B062354CE6A : public ::System::Object
{
public:
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_10; // 0x10
	::Class_3_883E597458B91E77* Field_1_9; // 0x18
	::Class_3_1A58F01F41846A1D* Field_1_11; // 0x20
	::System::Action* Field_1_8; // 0x28
	::UnityEngine::Vector2 Field_1_2; // 0x30
	::System::Int32 Field_1_4; // 0x38
	::System::Single Field_1_1; // 0x3C
	::System::Single Field_1_3; // 0x40
	::UnityEngine::Vector2 Field_1_0; // 0x44
	::System::Boolean Field_1_7; // 0x4C
	::System::Boolean Field_1_6; // 0x4D
	::System::Int32 Field_1_5; // 0x50

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_94AEC135B3D3BA4F(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_94AEC135B3D3BA4F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_77B144CA42B820F0(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_77B144CA42B820F0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_B88F221B047B1528(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_B88F221B047B1528_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Single Method_1_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_FA113CD55D99F4AF()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
