#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_C3B700CCA3D6D767_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x14DD7B10)
#define CLASS_2_C3B700CCA3D6D767_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x14DD79A0)
#define CLASS_2_C3B700CCA3D6D767_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14DD7BA0)
#define CLASS_2_C3B700CCA3D6D767__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD7B90)

inline static constexpr unsigned int Class_2_C3B700CCA3D6D767_TypeDefinitionIndex = 60034;

class Class_2_C3B700CCA3D6D767 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3B700CCA3D6D767_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
