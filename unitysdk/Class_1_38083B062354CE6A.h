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

#define CLASS_1_38083B062354CE6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE888C40)
#define CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xE889720)
#define CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0xE8899B0)
#define CLASS_1_38083B062354CE6A_METHOD_1_77B144CA42B820F0_OFFSET UNITYSDK_OFFSET(0xE888FC0)
#define CLASS_1_38083B062354CE6A_METHOD_1_94AEC135B3D3BA4F_OFFSET UNITYSDK_OFFSET(0xE888CA0)
#define CLASS_1_38083B062354CE6A_METHOD_1_B88F221B047B1528_OFFSET UNITYSDK_OFFSET(0xE8894D0)
#define CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0xE8897A0)
#define CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET UNITYSDK_OFFSET(0xE889840)
#define CLASS_1_38083B062354CE6A__CTOR_OFFSET UNITYSDK_OFFSET(0xE888C20)

inline static constexpr unsigned int Class_1_38083B062354CE6A_TypeDefinitionIndex = 45376;

class Class_1_38083B062354CE6A : public ::System::Object
{
public:
	::Class_3_1A58F01F41846A1D* Field_1_11; // 0x10
	::Class_3_883E597458B91E77* Field_1_9; // 0x18
	::System::Action* Field_1_8; // 0x20
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_10; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::UnityEngine::Vector2 Field_1_0; // 0x34
	::System::Int32 Field_1_5; // 0x3C
	::System::Boolean Field_1_7; // 0x40
	::System::Boolean Field_1_6; // 0x41
	::System::Single Field_1_1; // 0x44
	::System::Single Field_1_3; // 0x48
	::UnityEngine::Vector2 Field_1_2; // 0x4C

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

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_FA113CD55D99F4AF()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET))(this);
	}

	::System::Single Method_1_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET))(this);
	}
};
