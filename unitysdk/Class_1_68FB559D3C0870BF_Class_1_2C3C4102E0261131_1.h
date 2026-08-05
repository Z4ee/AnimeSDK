#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2A983612414FECFE;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x140B5370)
#define CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_NUM_OFFSET UNITYSDK_OFFSET(0x140B5350)
#define CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x140B5380)
#define CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140B53A0)

inline static constexpr unsigned int Class_1_68FB559D3C0870BF_Class_1_2C3C4102E0261131_1_TypeDefinitionIndex = 75599;

class Class_1_68FB559D3C0870BF_Class_1_2C3C4102E0261131_1 : public ::System::Object
{
public:
	::Class_2_2A983612414FECFE* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_2A983612414FECFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2A983612414FECFE*))((::PBYTE)hIl2Cpp + CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Extension::UILocalizationText* get_Num()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_NUM_OFFSET))(this);
	}

	::UnityEngine::Animation* get_Anim()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_ANIM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_Root()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68FB559D3C0870BF_CLASS_1_2C3C4102E0261131_1_GET_ROOT_OFFSET))(this);
	}
};
