#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_83722F5D09203949_2_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x18E0AEC0)
#define CLASS_1_83722F5D09203949_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18E0ADB0)
#define CLASS_1_83722F5D09203949_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x18E0AE50)
#define CLASS_1_83722F5D09203949_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0ADA0)

inline static constexpr unsigned int Class_1_83722F5D09203949_2_TypeDefinitionIndex = 67026;

class Class_1_83722F5D09203949_2 : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::IRogueMiracle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_2_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_2_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueMiracle* get_Miracle()
	{
		return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_2_GET_MIRACLE_OFFSET))(this);
	}
};
