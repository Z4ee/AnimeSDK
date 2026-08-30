#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_83722F5D09203949_1_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xBADE0B0)
#define CLASS_1_83722F5D09203949_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBADDFA0)
#define CLASS_1_83722F5D09203949_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xBADE040)
#define CLASS_1_83722F5D09203949_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBADDF90)

inline static constexpr unsigned int Class_1_83722F5D09203949_1_TypeDefinitionIndex = 67023;

class Class_1_83722F5D09203949_1 : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::IRogueMiracle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_1_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_1_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueMiracle* get_Miracle()
	{
		return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_1_GET_MIRACLE_OFFSET))(this);
	}
};
