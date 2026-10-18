#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class OnlinePlayRoomModule; }

#define CLASS_1_8FF3E84A179507BA_METHOD_1_2642645F56741D95_OFFSET UNITYSDK_OFFSET(0xCC8D800)
#define CLASS_1_8FF3E84A179507BA_METHOD_1_436C2366467DD1D0_OFFSET UNITYSDK_OFFSET(0xCC8DD10)
#define CLASS_1_8FF3E84A179507BA_METHOD_1_913CB72E8346A481_OFFSET UNITYSDK_OFFSET(0xCC8DC80)
#define CLASS_1_8FF3E84A179507BA__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8DFD0)

inline static constexpr unsigned int Class_1_8FF3E84A179507BA_TypeDefinitionIndex = 66396;

class Class_1_8FF3E84A179507BA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FF3E84A179507BA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2642645F56741D95(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_8FF3E84A179507BA_METHOD_1_2642645F56741D95_OFFSET))(this, a1);
	}

	::System::Void Method_1_436C2366467DD1D0(::RPG::Client::ChatMessageData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CLASS_1_8FF3E84A179507BA_METHOD_1_436C2366467DD1D0_OFFSET))(this, a1);
	}

	::RPG::Client::OnlinePlayRoomModule* Method_1_913CB72E8346A481()
	{
		return ((::RPG::Client::OnlinePlayRoomModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8FF3E84A179507BA_METHOD_1_913CB72E8346A481_OFFSET))(this);
	}
};
