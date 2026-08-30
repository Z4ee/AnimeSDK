#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sofa { class BaseSofaControl; }
namespace System { class Type; }

#define CLASS_1_2A2D3312991AED22_METHOD_1_2B99BEB96C90DA1F_OFFSET UNITYSDK_OFFSET(0xC384F10)
#define CLASS_1_2A2D3312991AED22_METHOD_1_495557EC6157C8D7_OFFSET UNITYSDK_OFFSET(0xC384EA0)
#define CLASS_1_2A2D3312991AED22_METHOD_1_8BFA2A3B956AE810_OFFSET UNITYSDK_OFFSET(0xC384BF0)

inline static constexpr unsigned int Class_1_2A2D3312991AED22_TypeDefinitionIndex = 50107;

class Class_1_2A2D3312991AED22 : public ::System::Object
{
public:
	static ::System::Type* Method_1_8BFA2A3B956AE810(::System::Type* a1)
	{
		return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_2A2D3312991AED22_METHOD_1_8BFA2A3B956AE810_OFFSET))(a1);
	}

	static ::System::Type* Method_1_495557EC6157C8D7(::Sofa::BaseSofaControl* a1)
	{
		return ((::System::Type*(*)(::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + CLASS_1_2A2D3312991AED22_METHOD_1_495557EC6157C8D7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2B99BEB96C90DA1F(::Sofa::BaseSofaControl* a1, ::System::Type* a2)
	{
		return ((::System::Boolean(*)(::Sofa::BaseSofaControl*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_2A2D3312991AED22_METHOD_1_2B99BEB96C90DA1F_OFFSET))(a1, a2);
	}
};
