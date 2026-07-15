#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ModifyDamageDisplayData; }
namespace System { class String; }

#define CLASS_1_5E9C16BFAA602EE3_METHOD_1_E8485B126CCCF227_OFFSET UNITYSDK_OFFSET(0x16F8CEB0)
#define CLASS_1_5E9C16BFAA602EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8CFE0)

inline static constexpr unsigned int Class_1_5E9C16BFAA602EE3_TypeDefinitionIndex = 51955;

class Class_1_5E9C16BFAA602EE3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E9C16BFAA602EE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E8485B126CCCF227(::RPG::GameCore::ModifyDamageDisplayData*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifyDamageDisplayData*&))((::PBYTE)hIl2Cpp + CLASS_1_5E9C16BFAA602EE3_METHOD_1_E8485B126CCCF227_OFFSET))(this, a1);
	}
};
