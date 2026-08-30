#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ElfBehaviorStateType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C7455059347036F5_METHOD_1_30ED64A115354B2C_OFFSET UNITYSDK_OFFSET(0x1C3B26B0)
#define CLASS_1_C7455059347036F5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1C3B28A0)
#define CLASS_1_C7455059347036F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B2920)

inline static constexpr unsigned int Class_1_C7455059347036F5_TypeDefinitionIndex = 40505;

class Class_1_C7455059347036F5 : public ::System::Object
{
public:
	::System::String* KBEPAIAFLHL; // 0x10
	::System::String* DOPHFLLNGPJ; // 0x18
	::System::Single KIPAGNCANAJ; // 0x20
	::RPG::Client::TextID MNAIAJJKGNG; // 0x28
	::System::Boolean AEPILOPAFKG; // 0x38
	::RPG::GameCore::ElfBehaviorStateType NIKECAGLOCE; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7455059347036F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30ED64A115354B2C(::System::String* a1, ::RPG::Client::TextID a2, ::System::String* a3, ::RPG::GameCore::ElfBehaviorStateType a4, ::System::Single a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TextID, ::System::String*, ::RPG::GameCore::ElfBehaviorStateType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7455059347036F5_METHOD_1_30ED64A115354B2C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7455059347036F5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
