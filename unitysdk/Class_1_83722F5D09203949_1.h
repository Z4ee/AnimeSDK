#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_83722F5D09203949_1_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x1136A960)
#define CLASS_1_83722F5D09203949_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1136A850)
#define CLASS_1_83722F5D09203949_1_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1136A8F0)
#define CLASS_1_83722F5D09203949_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1136A840)
#define CLASS_1_83722F5D09203949_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1136A970)

inline static constexpr unsigned int Class_1_83722F5D09203949_1_TypeDefinitionIndex = 54544;

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

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83722F5D09203949_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
