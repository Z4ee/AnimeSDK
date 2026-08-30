#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_530C213B5CE39FAC_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0xB7931F0)
#define CLASS_1_530C213B5CE39FAC_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB793200)
#define CLASS_1_530C213B5CE39FAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB7930A0)
#define CLASS_1_530C213B5CE39FAC_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xB793140)
#define CLASS_1_530C213B5CE39FAC__CTOR_OFFSET UNITYSDK_OFFSET(0xB793090)

inline static constexpr unsigned int Class_1_530C213B5CE39FAC_TypeDefinitionIndex = 67015;

class Class_1_530C213B5CE39FAC : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
	::Enum_3_63BCB6C405BA8A1D_3 _Source_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::IRogueMiracle* a1, ::Enum_3_63BCB6C405BA8A1D_3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::Enum_3_63BCB6C405BA8A1D_3))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC__CTOR_OFFSET))(this, a1, a2);
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

	::Enum_3_63BCB6C405BA8A1D_3 get_Source()
	{
		return ((::Enum_3_63BCB6C405BA8A1D_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_530C213B5CE39FAC_GET_SOURCE_OFFSET))(this);
	}
};
