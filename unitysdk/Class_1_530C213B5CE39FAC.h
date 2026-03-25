#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_530C213B5CE39FAC_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x10BE4080)
#define CLASS_1_530C213B5CE39FAC_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x10BE4090)
#define CLASS_1_530C213B5CE39FAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BE3F20)
#define CLASS_1_530C213B5CE39FAC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x10BE3FC0)
#define CLASS_1_530C213B5CE39FAC__CTOR_OFFSET UNITYSDK_OFFSET(0x10BE3F10)
#define CLASS_1_530C213B5CE39FAC___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10BE40A0)

inline static constexpr unsigned int Class_1_530C213B5CE39FAC_TypeDefinitionIndex = 54536;

class Class_1_530C213B5CE39FAC : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
	::Enum_3_63BCB6C405BA8A1D_1 _Source_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueMiracle* a1, ::Enum_3_63BCB6C405BA8A1D_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::Enum_3_63BCB6C405BA8A1D_1))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueMiracle* get_Miracle()
	{
		return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC_GET_MIRACLE_OFFSET))(this);
	}

	::Enum_3_63BCB6C405BA8A1D_1 get_Source()
	{
		return ((::Enum_3_63BCB6C405BA8A1D_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC_GET_SOURCE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
