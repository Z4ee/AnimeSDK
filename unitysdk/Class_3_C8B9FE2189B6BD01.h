#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_C8B9FE2189B6BD01_METHOD_3_1AB393A627D53235_OFFSET UNITYSDK_OFFSET(0x16BE0270)
#define CLASS_3_C8B9FE2189B6BD01_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x16BE01F0)
#define CLASS_3_C8B9FE2189B6BD01__CTOR_OFFSET UNITYSDK_OFFSET(0x16BE0240)

inline static constexpr unsigned int Class_3_C8B9FE2189B6BD01_TypeDefinitionIndex = 19643;

class Class_3_C8B9FE2189B6BD01 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_1; // 0x18
	::RPG::GameCore::DynamicString* Field_3_0; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8B9FE2189B6BD01__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C8B9FE2189B6BD01*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C8B9FE2189B6BD01*&))((::PBYTE)hIl2Cpp + CLASS_3_C8B9FE2189B6BD01_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_1AB393A627D53235(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C8B9FE2189B6BD01* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C8B9FE2189B6BD01*))((::PBYTE)hIl2Cpp + CLASS_3_C8B9FE2189B6BD01_METHOD_3_1AB393A627D53235_OFFSET))(a1, a2);
	}
};
