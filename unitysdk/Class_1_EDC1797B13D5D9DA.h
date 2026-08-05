#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EDC1797B13D5D9DA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15B38370)
#define CLASS_1_EDC1797B13D5D9DA_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x15B383B0)

inline static constexpr unsigned int Class_1_EDC1797B13D5D9DA_TypeDefinitionIndex = 48030;

class Class_1_EDC1797B13D5D9DA : public ::System::Object
{
public:
	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDC1797B13D5D9DA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EDC1797B13D5D9DA_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}
};
