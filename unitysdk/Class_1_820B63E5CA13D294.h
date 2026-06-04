#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropTagComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_820B63E5CA13D294_METHOD_1_762E3C67537EDE80_OFFSET UNITYSDK_OFFSET(0xA603030)
#define CLASS_1_820B63E5CA13D294__CTOR_OFFSET UNITYSDK_OFFSET(0xA603250)

inline static constexpr unsigned int Class_1_820B63E5CA13D294_TypeDefinitionIndex = 54017;

class Class_1_820B63E5CA13D294 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::RPG::GameCore::PropTagComponent*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820B63E5CA13D294__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_762E3C67537EDE80(::RPG::GameCore::PropConfig* a1, ::RPG::Client::MapPropDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_1_820B63E5CA13D294_METHOD_1_762E3C67537EDE80_OFFSET))(this, a1, a2);
	}
};
