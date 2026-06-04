#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9768E42F45878509;
namespace RPG::Client { class FatePhaseInfoItem; }

#define CLASS_1_478067BAE0008F17_METHOD_1_61739C627444D414_OFFSET UNITYSDK_OFFSET(0xA87FF50)
#define CLASS_1_478067BAE0008F17_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0xA8801B0)
#define CLASS_1_478067BAE0008F17__CTOR_OFFSET UNITYSDK_OFFSET(0xA87FF00)

inline static constexpr unsigned int Class_1_478067BAE0008F17_TypeDefinitionIndex = 59907;

class Class_1_478067BAE0008F17 : public ::System::Object
{
public:
	::Class_1_9768E42F45878509* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

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
