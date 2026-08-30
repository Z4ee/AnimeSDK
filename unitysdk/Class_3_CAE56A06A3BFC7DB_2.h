#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_CAE56A06A3BFC7DB_2_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CD09DF0)
#define CLASS_3_CAE56A06A3BFC7DB_2_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CD09E30)
#define CLASS_3_CAE56A06A3BFC7DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD09E20)

inline static constexpr unsigned int Class_3_CAE56A06A3BFC7DB_2_TypeDefinitionIndex = 21271;

class Class_3_CAE56A06A3BFC7DB_2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* GMJKHCGCNKA; // 0x18
	::System::String* MNDFOPKBHKP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CAE56A06A3BFC7DB_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAE56A06A3BFC7DB_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAE56A06A3BFC7DB_2*&))((::PBYTE)hIl2Cpp + CLASS_3_CAE56A06A3BFC7DB_2_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CAE56A06A3BFC7DB_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CAE56A06A3BFC7DB_2*))((::PBYTE)hIl2Cpp + CLASS_3_CAE56A06A3BFC7DB_2_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
