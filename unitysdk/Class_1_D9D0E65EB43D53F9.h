#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTalkTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_D9D0E65EB43D53F9_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1D0F1B30)
#define CLASS_1_D9D0E65EB43D53F9__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F1E10)

inline static constexpr unsigned int Class_1_D9D0E65EB43D53F9_TypeDefinitionIndex = 14443;

class Class_1_D9D0E65EB43D53F9 : public ::System::Object
{
public:
	::System::String* HGAOKKFGLBF; // 0x10
	::System::UInt32 NNDOABPFDMI; // 0x18
	::RPG::GameCore::PetMarbleTalkTriggerType LMFCOMHHEIG; // 0x1C
	::RPG::Client::TextID IBGNNBCPHFO; // 0x20
	::System::UInt32 PBLDLDIEFNC; // 0x30
	::System::Single HKGPLKJOCDH; // 0x34
	::System::Single FBPKGPODAJE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9D0E65EB43D53F9__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_D9D0E65EB43D53F9*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_D9D0E65EB43D53F9*&))((::PBYTE)hIl2Cpp + CLASS_1_D9D0E65EB43D53F9_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
