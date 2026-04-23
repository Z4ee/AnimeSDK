#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/STTaskExecutePhase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_4_9444E6BEB01CEA6F_METHOD_4_B9CA7374CC83C96D_OFFSET UNITYSDK_OFFSET(0x18225BA0)
#define CLASS_4_9444E6BEB01CEA6F_METHOD_4_F50D6F293391C101_OFFSET UNITYSDK_OFFSET(0x18225AD0)
#define CLASS_4_9444E6BEB01CEA6F__CTOR_OFFSET UNITYSDK_OFFSET(0x18225B50)

inline static constexpr unsigned int Class_4_9444E6BEB01CEA6F_TypeDefinitionIndex = 21326;

class Class_4_9444E6BEB01CEA6F : public ::RPG::GameCore::STTaskConfig
{
public:
	::System::String* Field_4_2; // 0x18
	::System::String* Field_4_1; // 0x20
	::RPG::GameCore::STTaskExecutePhase Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9444E6BEB01CEA6F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_F50D6F293391C101(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9444E6BEB01CEA6F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9444E6BEB01CEA6F*&))((::PBYTE)hIl2Cpp + CLASS_4_9444E6BEB01CEA6F_METHOD_4_F50D6F293391C101_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B9CA7374CC83C96D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_9444E6BEB01CEA6F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_9444E6BEB01CEA6F*))((::PBYTE)hIl2Cpp + CLASS_4_9444E6BEB01CEA6F_METHOD_4_B9CA7374CC83C96D_OFFSET))(a1, a2);
	}
};
