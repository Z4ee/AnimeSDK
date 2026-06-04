#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DD9E5E2B969CDC;
namespace RPG::Client { class AudiencePrefabSpecialTag_Blink; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B7F9A1269220FA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B26B20)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_37AACA8481A4B501_OFFSET UNITYSDK_OFFSET(0x13B26680)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_57C2A99C4A50D8FB_OFFSET UNITYSDK_OFFSET(0x13B26880)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x13B26B70)
#define CLASS_1_6B7F9A1269220FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x13B265F0)

inline static constexpr unsigned int Class_1_6B7F9A1269220FA8_TypeDefinitionIndex = 64662;

class Class_1_6B7F9A1269220FA8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::RPG::Client::AudiencePrefabSpecialTag_Blink* Field_1_1; // 0x18
	::Class_1_52DD9E5E2B969CDC* Field_1_2; // 0x20
	::RPG::GameCore::CharacterAtlasFaceSet* Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::Class_1_52DD9E5E2B969CDC* a1, ::RPG::Client::AudiencePrefabSpecialTag_Blink* a2, ::RPG::GameCore::CharacterAtlasFaceSet* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_52DD9E5E2B969CDC*, ::RPG::Client::AudiencePrefabSpecialTag_Blink*, ::RPG::GameCore::CharacterAtlasFaceSet*))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_37AACA8481A4B501()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8_METHOD_1_37AACA8481A4B501_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8_METHOD_1_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_57C2A99C4A50D8FB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8_METHOD_1_57C2A99C4A50D8FB_OFFSET))(this, a1);
	}
};
