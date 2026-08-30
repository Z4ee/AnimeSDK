#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9768E42F45878509;
namespace RPG::Client { class FatePhaseInfoItem; }

#define CLASS_1_4EEB4FFFB0700647_METHOD_1_35E1ABCF9350CB1D_OFFSET UNITYSDK_OFFSET(0x19CC7C60)
#define CLASS_1_4EEB4FFFB0700647_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x19CC7ED0)
#define CLASS_1_4EEB4FFFB0700647__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC7C10)

inline static constexpr unsigned int Class_1_4EEB4FFFB0700647_TypeDefinitionIndex = 64173;

class Class_1_4EEB4FFFB0700647 : public ::System::Object
{
public:
	::Class_1_9768E42F45878509* OOMJLEJJJKI; // 0x10
	::System::UInt32 MIAPFDLEOLF; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EEB4FFFB0700647__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FatePhaseInfoItem* Method_1_35E1ABCF9350CB1D(::System::UInt32 a1)
	{
		return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EEB4FFFB0700647_METHOD_1_35E1ABCF9350CB1D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4EEB4FFFB0700647_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}
};
