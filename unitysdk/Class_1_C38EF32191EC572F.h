#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C38EF32191EC572F_Enum_3_3DC591911FF43A91.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_9;
namespace System { class String; }

#define CLASS_1_C38EF32191EC572F_METHOD_1_9AA287E6599C0659_OFFSET UNITYSDK_OFFSET(0x14F1E180)
#define CLASS_1_C38EF32191EC572F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14F1E0B0)
#define CLASS_1_C38EF32191EC572F__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1E370)

inline static constexpr unsigned int Class_1_C38EF32191EC572F_TypeDefinitionIndex = 17570;

class Class_1_C38EF32191EC572F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_9* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_9* Field_1_1; // 0x18
	::Class_1_C38EF32191EC572F_Enum_3_3DC591911FF43A91 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C38EF32191EC572F__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C38EF32191EC572F_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_1_9AA287E6599C0659()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C38EF32191EC572F_METHOD_1_9AA287E6599C0659_OFFSET))(this);
	}
};
