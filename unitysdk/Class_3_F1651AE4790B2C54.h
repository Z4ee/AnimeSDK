#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_F1651AE4790B2C54_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x18787070)
#define CLASS_3_F1651AE4790B2C54_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x18786F90)
#define CLASS_3_F1651AE4790B2C54__CTOR_OFFSET UNITYSDK_OFFSET(0x18786FD0)

inline static constexpr unsigned int Class_3_F1651AE4790B2C54_TypeDefinitionIndex = 23080;

class Class_3_F1651AE4790B2C54 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x20
	::System::String* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1651AE4790B2C54__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1651AE4790B2C54*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1651AE4790B2C54*&))((::PBYTE)hIl2Cpp + CLASS_3_F1651AE4790B2C54_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_F1651AE4790B2C54* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_F1651AE4790B2C54*))((::PBYTE)hIl2Cpp + CLASS_3_F1651AE4790B2C54_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
