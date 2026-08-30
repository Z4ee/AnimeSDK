#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6BEDC8B44117355B_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1CA4F7E0)
#define CLASS_1_6BEDC8B44117355B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA4FBF0)

inline static constexpr unsigned int Class_1_6BEDC8B44117355B_TypeDefinitionIndex = 11484;

class Class_1_6BEDC8B44117355B : public ::System::Object
{
public:
	::System::String* DMMLHHHPBMO; // 0x10
	::System::String* BELPGNDDELK; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* MDEBFIFOKHH; // 0x20
	::System::UInt32 LKFAGDDOFED; // 0x28
	::RPG::GameCore::FateClazzType LEKEEONHDLP; // 0x2C
	::RPG::Client::TextID OHGFMOPCOKM; // 0x30
	::RPG::Client::TextID KBNHPKIOGLH; // 0x40
	::RPG::Client::TextID LAFABGLMPIA; // 0x50
	::System::UInt32 ACCJKGEKHKP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BEDC8B44117355B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6BEDC8B44117355B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6BEDC8B44117355B*&))((::PBYTE)hIl2Cpp + CLASS_1_6BEDC8B44117355B_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
