#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2A5C64D57FF4F5FE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelSkillButtonUltBaseController; }
namespace MoleMole { class UIInLevelSkillButtonUltChildWindowController; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D40845AA5D01EDA2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14124B10)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14125C70)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_13B8B036E1B01F5F_OFFSET UNITYSDK_OFFSET(0x14125650)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_2A6F35B5881B5E67_OFFSET UNITYSDK_OFFSET(0x14124CF0)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_311DDAC730F6D367_OFFSET UNITYSDK_OFFSET(0x14125440)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x14124B60)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x14125E70)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_7B32E6463125895B_OFFSET UNITYSDK_OFFSET(0x14125FF0)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14124980)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_A0DC5467BAA81F98_OFFSET UNITYSDK_OFFSET(0x14125A00)
#define CLASS_1_D40845AA5D01EDA2_METHOD_1_EE69EBBB80E49CCB_OFFSET UNITYSDK_OFFSET(0x14124FE0)
#define CLASS_1_D40845AA5D01EDA2__CTOR_OFFSET UNITYSDK_OFFSET(0x14124870)

inline static constexpr unsigned int Class_1_D40845AA5D01EDA2_TypeDefinitionIndex = 40033;

class Class_1_D40845AA5D01EDA2 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_5; // 0x20
	::MoleMole::UIWindowController* Field_1_4; // 0x28
	::MoleMole::UIInLevelSkillButtonUltBaseController* Field_1_2; // 0x30
	::MoleMole::UIInLevelSkillButtonUltChildWindowController* Field_1_1; // 0x38
	::System::Collections::Generic::Dictionary_2<::Enum_3_2A5C64D57FF4F5FE, ::MoleMole::UIInLevelSkillButtonUltBaseController*>* Field_1_0; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49
	::System::Boolean Field_1_6; // 0x4A

	::System::Void _ctor(::MoleMole::UIWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2A6F35B5881B5E67(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_2A6F35B5881B5E67_OFFSET))(this, a1);
	}

	::System::Void Method_1_311DDAC730F6D367(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_311DDAC730F6D367_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_EE69EBBB80E49CCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_EE69EBBB80E49CCB_OFFSET))(this);
	}

	::MoleMole::UIInLevelSkillButtonUltBaseController* Method_1_13B8B036E1B01F5F(::Enum_3_2A5C64D57FF4F5FE a1)
	{
		return ((::MoleMole::UIInLevelSkillButtonUltBaseController*(*)(::PVOID, ::Enum_3_2A5C64D57FF4F5FE))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_13B8B036E1B01F5F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0DC5467BAA81F98(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_A0DC5467BAA81F98_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_7B32E6463125895B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D40845AA5D01EDA2_METHOD_1_7B32E6463125895B_OFFSET))(this);
	}
};
