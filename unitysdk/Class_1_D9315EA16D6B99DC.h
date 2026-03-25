#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D9315EA16D6B99DC_METHOD_1_0254728C266F0B18_OFFSET UNITYSDK_OFFSET(0x104A53E0)
#define CLASS_1_D9315EA16D6B99DC_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x104A55B0)
#define CLASS_1_D9315EA16D6B99DC_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x104A54D0)
#define CLASS_1_D9315EA16D6B99DC__CTOR_OFFSET UNITYSDK_OFFSET(0x104A54C0)

inline static constexpr unsigned int Class_1_D9315EA16D6B99DC_TypeDefinitionIndex = 55706;

class Class_1_D9315EA16D6B99DC : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9315EA16D6B99DC__CTOR_OFFSET))(this);
	}

	static ::Class_1_D9315EA16D6B99DC* Method_1_0254728C266F0B18(::RPG::Client::TutorialBlockType a1)
	{
		return ((::Class_1_D9315EA16D6B99DC*(*)(::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + CLASS_1_D9315EA16D6B99DC_METHOD_1_0254728C266F0B18_OFFSET))(a1);
	}

	static ::Class_1_D9315EA16D6B99DC* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_D9315EA16D6B99DC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9315EA16D6B99DC_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9315EA16D6B99DC_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}
};
