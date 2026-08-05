#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4FF383C362EB84A8_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x158D5FB0)
#define CLASS_2_4FF383C362EB84A8_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x158D5E40)
#define CLASS_2_4FF383C362EB84A8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x158D6040)
#define CLASS_2_4FF383C362EB84A8__CTOR_OFFSET UNITYSDK_OFFSET(0x158D6030)

inline static constexpr unsigned int Class_2_4FF383C362EB84A8_TypeDefinitionIndex = 40448;

class Class_2_4FF383C362EB84A8 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FF383C362EB84A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4FF383C362EB84A8_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4FF383C362EB84A8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4FF383C362EB84A8_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
