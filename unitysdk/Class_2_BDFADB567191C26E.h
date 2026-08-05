#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_BDFADB567191C26E_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x14940490)
#define CLASS_2_BDFADB567191C26E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x14940620)
#define CLASS_2_BDFADB567191C26E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x149406D0)
#define CLASS_2_BDFADB567191C26E__CTOR_OFFSET UNITYSDK_OFFSET(0x149406C0)

inline static constexpr unsigned int Class_2_BDFADB567191C26E_TypeDefinitionIndex = 48839;

class Class_2_BDFADB567191C26E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDFADB567191C26E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BDFADB567191C26E_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDFADB567191C26E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BDFADB567191C26E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
