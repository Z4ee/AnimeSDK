#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::BlindBox::Trade { class IBlindBoxTradeOrder; }
namespace System { class String; }

#define CLASS_1_07DB488F656E8F82_METHOD_1_1E0AB7F698786A1A_OFFSET UNITYSDK_OFFSET(0x162FB570)
#define CLASS_1_07DB488F656E8F82_METHOD_1_E859CDC9A214B5CE_OFFSET UNITYSDK_OFFSET(0x162FB870)

inline static constexpr unsigned int Class_1_07DB488F656E8F82_TypeDefinitionIndex = 74867;

class Class_1_07DB488F656E8F82 : public ::System::Object
{
public:
	// static const ::System::String* CFBOAKOLGAJ; // 0x0

	static ::System::Boolean Method_1_1E0AB7F698786A1A(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_07DB488F656E8F82_METHOD_1_1E0AB7F698786A1A_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_E859CDC9A214B5CE(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder* a1)
	{
		return ((::System::UInt64(*)(::RPG::Client::BlindBox::Trade::IBlindBoxTradeOrder*))((::PBYTE)hIl2Cpp + CLASS_1_07DB488F656E8F82_METHOD_1_E859CDC9A214B5CE_OFFSET))(a1);
	}
};
