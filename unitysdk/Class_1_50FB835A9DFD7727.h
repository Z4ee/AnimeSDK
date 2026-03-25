#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9768E42F45878509;
namespace RPG::Client { class FatePhaseInfoItem; }

#define CLASS_1_50FB835A9DFD7727_METHOD_1_A689E218E49DD125_OFFSET UNITYSDK_OFFSET(0x8C662C0)
#define CLASS_1_50FB835A9DFD7727_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x8C665B0)
#define CLASS_1_50FB835A9DFD7727__CTOR_OFFSET UNITYSDK_OFFSET(0x8C66270)

inline static constexpr unsigned int Class_1_50FB835A9DFD7727_TypeDefinitionIndex = 52028;

class Class_1_50FB835A9DFD7727 : public ::System::Object
{
public:
	::Class_1_9768E42F45878509* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_50FB835A9DFD7727__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::FatePhaseInfoItem* Method_1_A689E218E49DD125(::System::UInt32 a1)
	{
		return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_50FB835A9DFD7727_METHOD_1_A689E218E49DD125_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50FB835A9DFD7727_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}
};
