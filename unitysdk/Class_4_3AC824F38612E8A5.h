#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_3AC824F38612E8A5_METHOD_4_DC9F2B18FBAB6ADB_OFFSET UNITYSDK_OFFSET(0x1D1FD7D0)
#define CLASS_4_3AC824F38612E8A5_METHOD_4_E8248A0562730A66_OFFSET UNITYSDK_OFFSET(0x1D1FD770)
#define CLASS_4_3AC824F38612E8A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FD7B0)

inline static constexpr unsigned int Class_4_3AC824F38612E8A5_TypeDefinitionIndex = 23795;

class Class_4_3AC824F38612E8A5 : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* GNOKEEBHONE; // 0x18
	::RPG::GameCore::FixPoint GAFENHHEBPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3AC824F38612E8A5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_E8248A0562730A66(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3AC824F38612E8A5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3AC824F38612E8A5*&))((::PBYTE)hIl2Cpp + CLASS_4_3AC824F38612E8A5_METHOD_4_E8248A0562730A66_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_DC9F2B18FBAB6ADB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3AC824F38612E8A5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3AC824F38612E8A5*))((::PBYTE)hIl2Cpp + CLASS_4_3AC824F38612E8A5_METHOD_4_DC9F2B18FBAB6ADB_OFFSET))(a1, a2);
	}
};
