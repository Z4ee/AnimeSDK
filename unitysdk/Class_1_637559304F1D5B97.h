#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPet; }

#define CLASS_1_637559304F1D5B97_METHOD_1_4D2A473556700CDC_1_OFFSET UNITYSDK_OFFSET(0x15A13590)
#define CLASS_1_637559304F1D5B97_METHOD_1_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x15A134B0)
#define CLASS_1_637559304F1D5B97_METHOD_1_70FA83A7C3518732_1_OFFSET UNITYSDK_OFFSET(0x15A13210)
#define CLASS_1_637559304F1D5B97_METHOD_1_70FA83A7C3518732_OFFSET UNITYSDK_OFFSET(0x15A12F70)

inline static constexpr unsigned int Class_1_637559304F1D5B97_TypeDefinitionIndex = 75720;

class Class_1_637559304F1D5B97 : public ::System::Object
{
public:
	static ::System::Void Method_1_70FA83A7C3518732(::RPG::Client::Pet::IPet* a1)
	{
		return ((::System::Void(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + CLASS_1_637559304F1D5B97_METHOD_1_70FA83A7C3518732_OFFSET))(a1);
	}

	static ::System::Void Method_1_70FA83A7C3518732_1(::RPG::Client::Pet::IPet* a1)
	{
		return ((::System::Void(*)(::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + CLASS_1_637559304F1D5B97_METHOD_1_70FA83A7C3518732_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D2A473556700CDC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_637559304F1D5B97_METHOD_1_4D2A473556700CDC_OFFSET))();
	}

	static ::System::Void Method_1_4D2A473556700CDC_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_637559304F1D5B97_METHOD_1_4D2A473556700CDC_1_OFFSET))();
	}
};
