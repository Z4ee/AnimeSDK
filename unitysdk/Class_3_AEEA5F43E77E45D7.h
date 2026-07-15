#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_2F326B57B6445F8D;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_AEEA5F43E77E45D7_METHOD_3_03AAA6DBB5BE6FBE_OFFSET UNITYSDK_OFFSET(0x1BE8B2E0)
#define CLASS_3_AEEA5F43E77E45D7_METHOD_3_14756EFE7C5E4FA5_OFFSET UNITYSDK_OFFSET(0x1BE8B380)
#define CLASS_3_AEEA5F43E77E45D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE8B340)

inline static constexpr unsigned int Class_3_AEEA5F43E77E45D7_TypeDefinitionIndex = 22368;

class Class_3_AEEA5F43E77E45D7 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::Class_2_2F326B57B6445F8D*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AEEA5F43E77E45D7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_03AAA6DBB5BE6FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEEA5F43E77E45D7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEEA5F43E77E45D7*&))((::PBYTE)hIl2Cpp + CLASS_3_AEEA5F43E77E45D7_METHOD_3_03AAA6DBB5BE6FBE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_14756EFE7C5E4FA5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AEEA5F43E77E45D7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AEEA5F43E77E45D7*))((::PBYTE)hIl2Cpp + CLASS_3_AEEA5F43E77E45D7_METHOD_3_14756EFE7C5E4FA5_OFFSET))(a1, a2);
	}
};
