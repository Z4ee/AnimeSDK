#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_DF6C1BC2963BF275_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x184A68B0)
#define CLASS_4_DF6C1BC2963BF275_METHOD_4_0C2DE072D09B1F26_OFFSET UNITYSDK_OFFSET(0x184A6660)
#define CLASS_4_DF6C1BC2963BF275_METHOD_4_61ACBD6DF6FE15E4_OFFSET UNITYSDK_OFFSET(0x184A6580)
#define CLASS_4_DF6C1BC2963BF275__CTOR_OFFSET UNITYSDK_OFFSET(0x184A6600)

inline static constexpr unsigned int Class_4_DF6C1BC2963BF275_TypeDefinitionIndex = 22164;

class Class_4_DF6C1BC2963BF275 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_4_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x28
	::RPG::GameCore::DynamicValueContextScope Field_4_3; // 0x30
	::RPG::GameCore::HPDetailParamType Field_4_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF6C1BC2963BF275__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_61ACBD6DF6FE15E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DF6C1BC2963BF275*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DF6C1BC2963BF275*&))((::PBYTE)hIl2Cpp + CLASS_4_DF6C1BC2963BF275_METHOD_4_61ACBD6DF6FE15E4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_0C2DE072D09B1F26(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_DF6C1BC2963BF275* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_DF6C1BC2963BF275*))((::PBYTE)hIl2Cpp + CLASS_4_DF6C1BC2963BF275_METHOD_4_0C2DE072D09B1F26_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_DF6C1BC2963BF275_GETDYNAMICKEY_OFFSET))(this);
	}
};
