#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_5134D652652849DB_1_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1CE288E0)
#define CLASS_3_5134D652652849DB_1_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1CE288A0)
#define CLASS_3_5134D652652849DB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE288D0)

inline static constexpr unsigned int Class_3_5134D652652849DB_1_TypeDefinitionIndex = 23371;

class Class_3_5134D652652849DB_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* EGEBAPINIOG; // 0x18
	::System::Boolean MOKNCFJICIC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB_1*&))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_1_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB_1*))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_1_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
