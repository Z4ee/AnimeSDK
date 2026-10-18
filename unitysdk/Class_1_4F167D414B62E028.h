#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }

#define CLASS_1_4F167D414B62E028__CTOR_OFFSET UNITYSDK_OFFSET(0x1C970000)

inline static constexpr unsigned int Class_1_4F167D414B62E028_TypeDefinitionIndex = 41934;

class Class_1_4F167D414B62E028 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelEffectConfig* HPBAMMEFDMK; // 0x10
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::ChimeraDuelBuffType LMIODAHFGOA; // 0x20
	::System::UInt32 BOKJJKFCFME; // 0x24
	::System::Int32 GICAACBGEIP; // 0x28
	::System::Int32 IEHPFADHJFD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F167D414B62E028__CTOR_OFFSET))(this);
	}
};
