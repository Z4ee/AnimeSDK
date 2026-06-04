#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_5134D652652849DB_METHOD_3_3AD4360E2346F7A3_OFFSET UNITYSDK_OFFSET(0x19E974C0)
#define CLASS_3_5134D652652849DB_METHOD_3_910CE6381099E090_OFFSET UNITYSDK_OFFSET(0x19E97440)
#define CLASS_3_5134D652652849DB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E97490)

inline static constexpr unsigned int Class_3_5134D652652849DB_TypeDefinitionIndex = 22098;

class Class_3_5134D652652849DB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_910CE6381099E090(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB*&))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_METHOD_3_910CE6381099E090_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_3AD4360E2346F7A3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5134D652652849DB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5134D652652849DB*))((::PBYTE)hIl2Cpp + CLASS_3_5134D652652849DB_METHOD_3_3AD4360E2346F7A3_OFFSET))(a1, a2);
	}
};
