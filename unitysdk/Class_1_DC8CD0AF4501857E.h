#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPlanPhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_584A0EBB2813A76B;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_DC8CD0AF4501857E_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1D047470)
#define CLASS_1_DC8CD0AF4501857E__CTOR_OFFSET UNITYSDK_OFFSET(0x1D047860)

inline static constexpr unsigned int Class_1_DC8CD0AF4501857E_TypeDefinitionIndex = 13961;

class Class_1_DC8CD0AF4501857E : public ::System::Object
{
public:
	::System::String* OOKONGHCFBP; // 0x10
	::Il2CppArray<::Class_1_584A0EBB2813A76B*>* OJBEKHJBIHL; // 0x18
	::System::String* FBKAMIHGLFK; // 0x20
	::RPG::Client::TextID JEJGIFKGBCO; // 0x28
	::System::UInt32 NFIKDONNJMD; // 0x38
	::RPG::Client::TextID CCHLHJCMFGM; // 0x40
	::RPG::Client::TextID AIFCBBLPHHI; // 0x50
	::System::UInt32 OPOPKLGBNKB; // 0x60
	::RPG::GameCore::LimaoNewsPlanPhaseType ABPCHBOBLNB; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC8CD0AF4501857E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_DC8CD0AF4501857E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_DC8CD0AF4501857E*&))((::PBYTE)hIl2Cpp + CLASS_1_DC8CD0AF4501857E_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
