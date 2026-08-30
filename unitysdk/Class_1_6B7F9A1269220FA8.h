#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DD9E5E2B969CDC;
namespace RPG::Client { class AudiencePrefabSpecialTag_Blink; }
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B7F9A1269220FA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A9D30)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_37AACA8481A4B501_OFFSET UNITYSDK_OFFSET(0x159A9990)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x159A9D80)
#define CLASS_1_6B7F9A1269220FA8_METHOD_1_FD1A8012013ED9C5_OFFSET UNITYSDK_OFFSET(0x159A9B90)
#define CLASS_1_6B7F9A1269220FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x159A9900)

inline static constexpr unsigned int Class_1_6B7F9A1269220FA8_TypeDefinitionIndex = 69102;

class Class_1_6B7F9A1269220FA8 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterAtlasFaceSet* IBOHAFFKOJN; // 0x10
	::RPG::Client::AudiencePrefabSpecialTag_Blink* EIALGCHCOCN; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* OIKPPAFNOEJ; // 0x20
	::Class_1_52DD9E5E2B969CDC* EDLCJHNBKDN; // 0x28
	::System::Single CLLHFCJIAHB; // 0x30
	::System::Single MLHIGPBLBPN; // 0x34

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

	::System::Void Method_1_FD1A8012013ED9C5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6B7F9A1269220FA8_METHOD_1_FD1A8012013ED9C5_OFFSET))(this, a1);
	}
};
