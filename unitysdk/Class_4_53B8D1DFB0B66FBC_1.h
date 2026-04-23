#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_53B8D1DFB0B66FBC_1_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18969B10)
#define CLASS_4_53B8D1DFB0B66FBC_1_METHOD_4_0C2DE072D09B1F26_OFFSET UNITYSDK_OFFSET(0x189698C0)
#define CLASS_4_53B8D1DFB0B66FBC_1_METHOD_4_637CBE131CC2826D_OFFSET UNITYSDK_OFFSET(0x189697A0)
#define CLASS_4_53B8D1DFB0B66FBC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18969840)

inline static constexpr unsigned int Class_4_53B8D1DFB0B66FBC_1_TypeDefinitionIndex = 23152;

class Class_4_53B8D1DFB0B66FBC_1 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x18
	::System::String* Field_4_0; // 0x20
	::RPG::GameCore::DynamicFloat* Field_4_4; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_3; // 0x30
	::RPG::GameCore::DynamicValueContextScope Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_637CBE131CC2826D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_53B8D1DFB0B66FBC_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_53B8D1DFB0B66FBC_1*&))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_1_METHOD_4_637CBE131CC2826D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_0C2DE072D09B1F26(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_53B8D1DFB0B66FBC_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_53B8D1DFB0B66FBC_1*))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_1_METHOD_4_0C2DE072D09B1F26_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_53B8D1DFB0B66FBC_1_GETDYNAMICKEY_OFFSET))(this);
	}
};
