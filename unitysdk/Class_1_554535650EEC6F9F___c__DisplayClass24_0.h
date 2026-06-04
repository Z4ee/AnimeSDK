#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define CLASS_1_554535650EEC6F9F___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET UNITYSDK_OFFSET(0xA992250)
#define CLASS_1_554535650EEC6F9F___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA9911B0)

inline static constexpr unsigned int Class_1_554535650EEC6F9F___c__DisplayClass24_0_TypeDefinitionIndex = 60472;

class Class_1_554535650EEC6F9F___c__DisplayClass24_0 : public ::System::Object
{
public:
	::System::UInt32 roleID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _ContainsRoleID_b__0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::GridFightFormationRole*>))((::PBYTE)hIl2Cpp + CLASS_1_554535650EEC6F9F___C__DISPLAYCLASS24_0__CONTAINSROLEID_B__0_OFFSET))(this, a1);
	}
};
