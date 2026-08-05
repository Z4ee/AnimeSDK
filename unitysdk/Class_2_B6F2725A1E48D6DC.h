#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_B6F2725A1E48D6DC_Class_2_1516209BF7170BD4;
class Class_2_B6F2725A1E48D6DC_Class_2_461B63A16E760DEF;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B6F2725A1E48D6DC_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x12374160)
#define CLASS_2_B6F2725A1E48D6DC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x12374390)
#define CLASS_2_B6F2725A1E48D6DC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x123744A0)
#define CLASS_2_B6F2725A1E48D6DC__CTOR_OFFSET UNITYSDK_OFFSET(0x12374490)

inline static constexpr unsigned int Class_2_B6F2725A1E48D6DC_TypeDefinitionIndex = 59626;

class Class_2_B6F2725A1E48D6DC : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_7; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_B6F2725A1E48D6DC_Class_2_1516209BF7170BD4*>* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_0; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_B6F2725A1E48D6DC_Class_2_461B63A16E760DEF*>* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6F2725A1E48D6DC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B6F2725A1E48D6DC_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B6F2725A1E48D6DC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B6F2725A1E48D6DC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
