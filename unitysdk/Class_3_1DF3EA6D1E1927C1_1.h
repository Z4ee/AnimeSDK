#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7.h"
#include "unitysdk/Class_2_D5115202A5A8225D.h"

namespace System { class String; }

#define CLASS_3_1DF3EA6D1E1927C1_1_METHOD_3_5C68E8C9A1245113_OFFSET UNITYSDK_OFFSET(0x13AC75D0)
#define CLASS_3_1DF3EA6D1E1927C1_1_METHOD_3_7095CC938A9799B6_OFFSET UNITYSDK_OFFSET(0x13AC7710)
#define CLASS_3_1DF3EA6D1E1927C1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC75B0)

inline static constexpr unsigned int Class_3_1DF3EA6D1E1927C1_1_TypeDefinitionIndex = 80560;

class Class_3_1DF3EA6D1E1927C1_1 : public ::Class_2_D5115202A5A8225D
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1DF3EA6D1E1927C1_1__CTOR_OFFSET))(this, a1);
	}

	::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_5C68E8C9A1245113(::System::String* a1)
	{
		return ((::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1DF3EA6D1E1927C1_1_METHOD_3_5C68E8C9A1245113_OFFSET))(this, a1);
	}

	::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_7095CC938A9799B6(::System::String* a1)
	{
		return ((::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_1DF3EA6D1E1927C1_1_METHOD_3_7095CC938A9799B6_OFFSET))(this, a1);
	}
};
