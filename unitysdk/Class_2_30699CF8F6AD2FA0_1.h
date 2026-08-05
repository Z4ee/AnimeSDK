#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_30699CF8F6AD2FA0_1_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x15BB4EE0)
#define CLASS_2_30699CF8F6AD2FA0_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15BB5020)
#define CLASS_2_30699CF8F6AD2FA0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB5010)

inline static constexpr unsigned int Class_2_30699CF8F6AD2FA0_1_TypeDefinitionIndex = 49307;

class Class_2_30699CF8F6AD2FA0_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_7; // 0x18
	::UnityEngine::Transform* Field_2_1; // 0x20
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_1_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_30699CF8F6AD2FA0_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
