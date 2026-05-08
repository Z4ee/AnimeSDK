#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define MONOUISUBITEMPARAMDICT_SUBITEMPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D94BB0)

inline static constexpr unsigned int MonoUISubItemParamDict_SubItemParam_TypeDefinitionIndex = 73314;

class MonoUISubItemParamDict_SubItemParam : public ::System::Object
{
public:
	::UnityEngine::Color SelectedColor1; // 0x10
	::UnityEngine::Color SelectedColor2; // 0x20
	::System::Single AlphaTiling; // 0x30
	::System::Single AlphaOffset; // 0x34
	::System::Single ChangeTime; // 0x38
	::System::Single SubRootExpandTime; // 0x3C
	::System::Single SubItemFadeTime; // 0x40
	::System::Single SubItemFixTime; // 0x44
	::System::Single SubItemFadeInterval; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUISUBITEMPARAMDICT_SUBITEMPARAM__CTOR_OFFSET))(this);
	}
};
