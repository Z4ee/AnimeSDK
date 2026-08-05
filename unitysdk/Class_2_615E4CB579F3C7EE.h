#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_615E4CB579F3C7EE_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13D073F0)
#define CLASS_2_615E4CB579F3C7EE_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x13D07280)
#define CLASS_2_615E4CB579F3C7EE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13D07480)
#define CLASS_2_615E4CB579F3C7EE__CTOR_OFFSET UNITYSDK_OFFSET(0x13D07470)

inline static constexpr unsigned int Class_2_615E4CB579F3C7EE_TypeDefinitionIndex = 46257;

class Class_2_615E4CB579F3C7EE : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
