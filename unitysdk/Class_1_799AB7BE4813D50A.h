#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }

#define CLASS_1_799AB7BE4813D50A_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x115B0440)
#define CLASS_1_799AB7BE4813D50A_GET_ISSHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x115B0450)
#define CLASS_1_799AB7BE4813D50A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x115B0300)
#define CLASS_1_799AB7BE4813D50A_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x115B03C0)
#define CLASS_1_799AB7BE4813D50A__CTOR_OFFSET UNITYSDK_OFFSET(0x115B02F0)
#define CLASS_1_799AB7BE4813D50A___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x115B0460)

inline static constexpr unsigned int Class_1_799AB7BE4813D50A_TypeDefinitionIndex = 54499;

class Class_1_799AB7BE4813D50A : public ::System::Object
{
public:
	::RPG::Client::RogueBuffData* _Buff_k__BackingField; // 0x10
	::System::Boolean _IsShowImmediately_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::RogueBuffData* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::RogueBuffData* get_Buff()
	{
		return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A_GET_BUFF_OFFSET))(this);
	}

	::System::Boolean get_IsShowImmediately()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A_GET_ISSHOWIMMEDIATELY_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_799AB7BE4813D50A___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
