#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7.h"
#include "unitysdk/Class_2_D5115202A5A8225D.h"

namespace System { class String; }

#define CLASS_3_C0D923288BE7C3A8_METHOD_3_5641D3A97A4AAE20_OFFSET UNITYSDK_OFFSET(0x15978860)
#define CLASS_3_C0D923288BE7C3A8_METHOD_3_7095CC938A9799B6_OFFSET UNITYSDK_OFFSET(0x159789A0)
#define CLASS_3_C0D923288BE7C3A8__CTOR_OFFSET UNITYSDK_OFFSET(0x15978850)

inline static constexpr unsigned int Class_3_C0D923288BE7C3A8_TypeDefinitionIndex = 67581;

class Class_3_C0D923288BE7C3A8 : public ::Class_2_D5115202A5A8225D
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C0D923288BE7C3A8__CTOR_OFFSET))(this, a1);
	}

	::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_5641D3A97A4AAE20(::System::String* a1)
	{
		return ((::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C0D923288BE7C3A8_METHOD_3_5641D3A97A4AAE20_OFFSET))(this, a1);
	}

	::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7 Method_3_7095CC938A9799B6(::System::String* a1)
	{
		return ((::Class_1_8B550A61FC9DDA82_Enum_3_F1DF3CE6FAEE3AB7(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_C0D923288BE7C3A8_METHOD_3_7095CC938A9799B6_OFFSET))(this, a1);
	}
};
