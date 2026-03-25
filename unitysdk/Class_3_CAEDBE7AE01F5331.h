#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_CAEDBE7AE01F5331_METHOD_3_2166CB70112347ED_OFFSET UNITYSDK_OFFSET(0x16DB4BD0)
#define CLASS_3_CAEDBE7AE01F5331_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x16DB4C70)
#define CLASS_3_CAEDBE7AE01F5331__CTOR_OFFSET UNITYSDK_OFFSET(0x16DB4C30)

inline static constexpr unsigned int Class_3_CAEDBE7AE01F5331_TypeDefinitionIndex = 19672;

class Class_3_CAEDBE7AE01F5331 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Single Field_3_2; // 0x18
	::System::Single Field_3_3; // 0x1C
	::RPG::GameCore::FiveDimPlayerResetMode Field_3_0; // 0x20
	::RPG::GameCore::FiveDimPlayerResetSweepDirection Field_3_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAEDBE7AE01F5331__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2166CB70112347ED(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAEDBE7AE01F5331*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAEDBE7AE01F5331*&))((::PBYTE)hIl2Cpp + CLASS_3_CAEDBE7AE01F5331_METHOD_3_2166CB70112347ED_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAEDBE7AE01F5331* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAEDBE7AE01F5331*))((::PBYTE)hIl2Cpp + CLASS_3_CAEDBE7AE01F5331_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
