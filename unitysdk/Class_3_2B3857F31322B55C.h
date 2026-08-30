#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_2B3857F31322B55C_METHOD_3_400CD15A8456AED9_OFFSET UNITYSDK_OFFSET(0x1CB55DD0)
#define CLASS_3_2B3857F31322B55C_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x1CB55E10)
#define CLASS_3_2B3857F31322B55C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB55E00)

inline static constexpr unsigned int Class_3_2B3857F31322B55C_TypeDefinitionIndex = 22599;

class Class_3_2B3857F31322B55C : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* JIKLHKCEFNL; // 0x18
	::System::String* APIFGFCGEPG; // 0x20
	::System::String* ILOCBPNKFGN; // 0x28
	::System::String* NECBFCLKAJI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2B3857F31322B55C__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_400CD15A8456AED9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B3857F31322B55C*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B3857F31322B55C*&))((::PBYTE)hIl2Cpp + CLASS_3_2B3857F31322B55C_METHOD_3_400CD15A8456AED9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_2B3857F31322B55C* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_2B3857F31322B55C*))((::PBYTE)hIl2Cpp + CLASS_3_2B3857F31322B55C_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
