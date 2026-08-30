#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateRoundInfoItem; }

#define CLASS_1_9768E42F45878509_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x18A71B80)
#define CLASS_1_9768E42F45878509_METHOD_1_E53A8107F93E0213_OFFSET UNITYSDK_OFFSET(0x18A71AE0)
#define CLASS_1_9768E42F45878509__CTOR_OFFSET UNITYSDK_OFFSET(0x18A71AD0)

inline static constexpr unsigned int Class_1_9768E42F45878509_TypeDefinitionIndex = 64175;

class Class_1_9768E42F45878509 : public ::System::Object
{
public:
	::System::UInt32 MIAPFDLEOLF; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9768E42F45878509__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FateRoundInfoItem* Method_1_E53A8107F93E0213(::System::UInt32 a1, ::RPG::GameCore::FateRoundType a2)
	{
		return ((::RPG::Client::FateRoundInfoItem*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRoundType))((::PBYTE)hIl2Cpp + CLASS_1_9768E42F45878509_METHOD_1_E53A8107F93E0213_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9768E42F45878509_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}
};
