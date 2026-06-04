#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D_1;
namespace RPG::Client { class MonopolyContentTrigger; }

#define CLASS_1_B7C68DA4355CEF9B_METHOD_1_1B621BE94362F864_OFFSET UNITYSDK_OFFSET(0x13FFBC90)

inline static constexpr unsigned int Class_1_B7C68DA4355CEF9B_TypeDefinitionIndex = 61969;

class Class_1_B7C68DA4355CEF9B : public ::System::Object
{
public:
	static ::RPG::Client::MonopolyContentTrigger* Method_1_1B621BE94362F864(::Class_1_F0A446EC7AE7E87D_1* a1)
	{
		return ((::RPG::Client::MonopolyContentTrigger*(*)(::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + CLASS_1_B7C68DA4355CEF9B_METHOD_1_1B621BE94362F864_OFFSET))(a1);
	}
};
