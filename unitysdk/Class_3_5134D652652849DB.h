#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_5134D652652849DB_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x1B14ECC0)
#define CLASS_3_5134D652652849DB_METHOD_3_A2326BE0630DF75E_OFFSET UNITYSDK_OFFSET(0x1B14EC80)
#define CLASS_3_5134D652652849DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B14ECB0)

inline static constexpr unsigned int Class_3_5134D652652849DB_TypeDefinitionIndex = 22534;

class Class_3_5134D652652849DB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A2326BE0630DF75E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB*&))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_METHOD_3_A2326BE0630DF75E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB*))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
