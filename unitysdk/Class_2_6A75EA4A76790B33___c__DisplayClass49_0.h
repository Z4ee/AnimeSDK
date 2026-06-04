#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAC07B0)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS49_0__DOACTIVEPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0xAAC5770)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33___c__DisplayClass49_0_TypeDefinitionIndex = 46610;

class Class_2_6A75EA4A76790B33___c__DisplayClass49_0 : public ::System::Object
{
public:
	::System::Action* onChangeFinish; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Void _DoActiveProfile_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS49_0__DOACTIVEPROFILE_B__0_OFFSET))(this);
	}
};
