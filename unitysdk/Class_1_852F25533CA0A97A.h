#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueMiracle; }
namespace System { class String; }

#define CLASS_1_852F25533CA0A97A_GET_BROKENCHANGEHINTID_OFFSET UNITYSDK_OFFSET(0x1A83B6B0)
#define CLASS_1_852F25533CA0A97A_GET_BROKENCHANGEMIRACLEID_OFFSET UNITYSDK_OFFSET(0x1A83B6A0)
#define CLASS_1_852F25533CA0A97A_GET_MIRACLE_OFFSET UNITYSDK_OFFSET(0x1A83B690)
#define CLASS_1_852F25533CA0A97A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A83B3A0)
#define CLASS_1_852F25533CA0A97A_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1A83B520)
#define CLASS_1_852F25533CA0A97A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A83B390)

inline static constexpr unsigned int Class_1_852F25533CA0A97A_TypeDefinitionIndex = 67017;

class Class_1_852F25533CA0A97A : public ::System::Object
{
public:
	::RPG::Client::IRogueMiracle* _Miracle_k__BackingField; // 0x10
	::System::UInt32 _BrokenChangeMiracleID_k__BackingField; // 0x18
	::System::UInt32 _BrokenChangeHintID_k__BackingField; // 0x1C

	::System::Void _ctor(::RPG::Client::IRogueMiracle* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracle*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A_TRIGGERACTION_OFFSET))(this);
	}

	::RPG::Client::IRogueMiracle* get_Miracle()
	{
		return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A_GET_MIRACLE_OFFSET))(this);
	}

	::System::UInt32 get_BrokenChangeMiracleID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A_GET_BROKENCHANGEMIRACLEID_OFFSET))(this);
	}

	::System::UInt32 get_BrokenChangeHintID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_852F25533CA0A97A_GET_BROKENCHANGEHINTID_OFFSET))(this);
	}
};
