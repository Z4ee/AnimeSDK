#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F50EE9166BE7CA48.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0x1875FD70)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1875FCA0)
#define CLASS_3_17FBBBF879CA9C4B_METHOD_3_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1875FC40)
#define CLASS_3_17FBBBF879CA9C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x1875FE40)
#define CLASS_3_17FBBBF879CA9C4B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1875FBC0)

inline static constexpr unsigned int Class_3_17FBBBF879CA9C4B_TypeDefinitionIndex = 71340;

class Class_3_17FBBBF879CA9C4B : public ::Class_2_F50EE9166BE7CA48
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::System::String* NMHICHPNEHN; // 0x70
	::System::String* KDODNCFEJFD; // 0x78
	::UnityEngine::Animation* PMOJILOJEPE; // 0x80
	::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x88

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
