#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_4_929A66137EFAB305_METHOD_4_9968A253B5B328D1_OFFSET UNITYSDK_OFFSET(0x18440E00)
#define CLASS_4_929A66137EFAB305_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x18440ED0)
#define CLASS_4_929A66137EFAB305__CTOR_OFFSET UNITYSDK_OFFSET(0x18440E80)

inline static constexpr unsigned int Class_4_929A66137EFAB305_TypeDefinitionIndex = 23211;

class Class_4_929A66137EFAB305 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::EnumStatusType Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_929A66137EFAB305__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_9968A253B5B328D1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_929A66137EFAB305*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_929A66137EFAB305*&))((::PBYTE)hIl2Cpp + CLASS_4_929A66137EFAB305_METHOD_4_9968A253B5B328D1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_929A66137EFAB305* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_929A66137EFAB305*))((::PBYTE)hIl2Cpp + CLASS_4_929A66137EFAB305_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
