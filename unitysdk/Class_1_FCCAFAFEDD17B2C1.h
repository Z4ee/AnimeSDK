#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIThreeDMapConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_1_0663552609274C64;

#define CLASS_1_FCCAFAFEDD17B2C1__CTOR_OFFSET UNITYSDK_OFFSET(0x113F39D0)

inline static constexpr unsigned int Class_1_FCCAFAFEDD17B2C1_TypeDefinitionIndex = 62840;

class Class_1_FCCAFAFEDD17B2C1 : public ::System::Object
{
public:
	::MoleMole::UIThreeDMapConfig* Field_1_6; // 0x10
	::System::String* Field_1_7; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20
	::Class_1_0663552609274C64<::UnityEngine::GameObject*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCCAFAFEDD17B2C1__CTOR_OFFSET))(this);
	}
};
