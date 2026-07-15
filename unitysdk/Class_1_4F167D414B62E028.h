#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }

#define CLASS_1_4F167D414B62E028__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2B6C0)

inline static constexpr unsigned int Class_1_4F167D414B62E028_TypeDefinitionIndex = 39476;

class Class_1_4F167D414B62E028 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelEffectConfig* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::UInt32 Field_1_4; // 0x28
	::RPG::GameCore::ChimeraDuelBuffType Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F167D414B62E028__CTOR_OFFSET))(this);
	}
};
