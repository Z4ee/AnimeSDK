#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_0A6AEAAB98E550F1_4_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1AF23B90)
#define CLASS_3_0A6AEAAB98E550F1_4_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1AF23BD0)
#define CLASS_3_0A6AEAAB98E550F1_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF23BC0)

inline static constexpr unsigned int Class_3_0A6AEAAB98E550F1_4_TypeDefinitionIndex = 23288;

class Class_3_0A6AEAAB98E550F1_4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0A6AEAAB98E550F1_4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0A6AEAAB98E550F1_4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0A6AEAAB98E550F1_4*&))((::PBYTE)hIl2Cpp + CLASS_3_0A6AEAAB98E550F1_4_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0A6AEAAB98E550F1_4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0A6AEAAB98E550F1_4*))((::PBYTE)hIl2Cpp + CLASS_3_0A6AEAAB98E550F1_4_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
