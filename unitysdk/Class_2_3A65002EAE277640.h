#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_3A65002EAE277640_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x12C0DE60)
#define CLASS_2_3A65002EAE277640_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x12C0DCD0)
#define CLASS_2_3A65002EAE277640_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12C0DF50)
#define CLASS_2_3A65002EAE277640__CTOR_OFFSET UNITYSDK_OFFSET(0x12C0DF40)

inline static constexpr unsigned int Class_2_3A65002EAE277640_TypeDefinitionIndex = 80132;

class Class_2_3A65002EAE277640 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x28
	::MoleMole::NotificationBadge* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A65002EAE277640__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A65002EAE277640_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A65002EAE277640_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3A65002EAE277640_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
