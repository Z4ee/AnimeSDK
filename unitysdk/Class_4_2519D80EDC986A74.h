#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_2519D80EDC986A74_METHOD_4_2925F5E32466503A_OFFSET UNITYSDK_OFFSET(0x183A30B0)
#define CLASS_4_2519D80EDC986A74_METHOD_4_CFBE19BA3CA584C8_OFFSET UNITYSDK_OFFSET(0x183A3190)
#define CLASS_4_2519D80EDC986A74__CTOR_OFFSET UNITYSDK_OFFSET(0x183A3130)

inline static constexpr unsigned int Class_4_2519D80EDC986A74_TypeDefinitionIndex = 20829;

class Class_4_2519D80EDC986A74 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::RPG::GameCore::TargetEvaluator* Field_4_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2519D80EDC986A74__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_2925F5E32466503A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2519D80EDC986A74*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2519D80EDC986A74*&))((::PBYTE)hIl2Cpp + CLASS_4_2519D80EDC986A74_METHOD_4_2925F5E32466503A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_CFBE19BA3CA584C8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_2519D80EDC986A74* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_2519D80EDC986A74*))((::PBYTE)hIl2Cpp + CLASS_4_2519D80EDC986A74_METHOD_4_CFBE19BA3CA584C8_OFFSET))(a1, a2);
	}
};
