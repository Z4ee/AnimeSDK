#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_615E4CB579F3C7EE_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x13771700)
#define CLASS_2_615E4CB579F3C7EE_METHOD_2_4B641F764AEF5BEB_OFFSET UNITYSDK_OFFSET(0x13771590)
#define CLASS_2_615E4CB579F3C7EE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13771790)
#define CLASS_2_615E4CB579F3C7EE__CTOR_OFFSET UNITYSDK_OFFSET(0x13771780)

inline static constexpr unsigned int Class_2_615E4CB579F3C7EE_TypeDefinitionIndex = 52384;

class Class_2_615E4CB579F3C7EE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_2; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4B641F764AEF5BEB(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_4B641F764AEF5BEB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_615E4CB579F3C7EE_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
