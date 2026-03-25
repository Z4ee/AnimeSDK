#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_C1111D8DC4018EE3_METHOD_3_443B8314404AE95B_OFFSET UNITYSDK_OFFSET(0x179AE6B0)
#define CLASS_3_C1111D8DC4018EE3_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x179AE780)
#define CLASS_3_C1111D8DC4018EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x179AE730)

inline static constexpr unsigned int Class_3_C1111D8DC4018EE3_TypeDefinitionIndex = 21347;

class Class_3_C1111D8DC4018EE3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1111D8DC4018EE3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_443B8314404AE95B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1111D8DC4018EE3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1111D8DC4018EE3*&))((::PBYTE)hIl2Cpp + CLASS_3_C1111D8DC4018EE3_METHOD_3_443B8314404AE95B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1111D8DC4018EE3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1111D8DC4018EE3*))((::PBYTE)hIl2Cpp + CLASS_3_C1111D8DC4018EE3_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
