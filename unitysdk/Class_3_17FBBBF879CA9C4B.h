#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F50EE9166BE7CA48.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xB910CC0)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xB910BF0)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xB910B90)
#define CLASS_3_17FBBBF879CA9C4B__CTOR_OFFSET UNITYSDK_OFFSET(0xB910D90)
#define CLASS_3_17FBBBF879CA9C4B__ONBIND_OFFSET UNITYSDK_OFFSET(0xB910B10)

inline static constexpr unsigned int Class_3_17FBBBF879CA9C4B_TypeDefinitionIndex = 71341;

class Class_3_17FBBBF879CA9C4B : public ::Class_2_F50EE9166BE7CA48
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::UnityEngine::Animation* PMOJILOJEPE; // 0x70
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x78
	::System::String* KDODNCFEJFD; // 0x80
	::System::String* NMHICHPNEHN; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_3_078D85152011B919_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_1_OFFSET))(this);
	}
};
