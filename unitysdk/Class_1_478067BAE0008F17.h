#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9768E42F45878509;
namespace RPG::Client { class FatePhaseInfoItem; }

#define CLASS_1_478067BAE0008F17_METHOD_1_61739C627444D414_OFFSET UNITYSDK_OFFSET(0xBAB8070)
#define CLASS_1_478067BAE0008F17_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0xBAB82D0)
#define CLASS_1_478067BAE0008F17__CTOR_OFFSET UNITYSDK_OFFSET(0xBAB8020)

inline static constexpr unsigned int Class_1_478067BAE0008F17_TypeDefinitionIndex = 64111;

class Class_1_478067BAE0008F17 : public ::System::Object
{
public:
	::Class_1_9768E42F45878509* OOMJLEJJJKI; // 0x10
	::System::UInt32 MIAPFDLEOLF; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_478067BAE0008F17__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FatePhaseInfoItem* Method_1_61739C627444D414(::System::UInt32 a1)
	{
		return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_478067BAE0008F17_METHOD_1_61739C627444D414_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_478067BAE0008F17_METHOD_1_9CA35E5BF1A50E77_OFFSET))(this);
	}
};
