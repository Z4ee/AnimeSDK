#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_CD25C7317D812EE7_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10F58470)
#define CLASS_3_CD25C7317D812EE7_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x10F58510)
#define CLASS_3_CD25C7317D812EE7_METHOD_3_F43DABB11AEB8CA2_OFFSET UNITYSDK_OFFSET(0x10F585A0)
#define CLASS_3_CD25C7317D812EE7__CTOR_OFFSET UNITYSDK_OFFSET(0x10F584C0)

inline static constexpr unsigned int Class_3_CD25C7317D812EE7_TypeDefinitionIndex = 63407;

class Class_3_CD25C7317D812EE7 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CD25C7317D812EE7__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CD25C7317D812EE7_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_CD25C7317D812EE7_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_F43DABB11AEB8CA2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_CD25C7317D812EE7_METHOD_3_F43DABB11AEB8CA2_OFFSET))(a1);
	}
};
