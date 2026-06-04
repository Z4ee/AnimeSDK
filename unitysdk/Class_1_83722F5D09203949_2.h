#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_83722F5D09203949_2_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xA51A7C0)
#define CLASS_1_83722F5D09203949_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA51A6B0)
#define CLASS_1_83722F5D09203949_2_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xA51A750)
#define CLASS_1_83722F5D09203949_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA51A6A0)
#define CLASS_1_83722F5D09203949_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA51A7D0)

inline static constexpr unsigned int Class_1_83722F5D09203949_2_TypeDefinitionIndex = 62668;

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

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
