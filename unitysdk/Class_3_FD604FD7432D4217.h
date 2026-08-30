#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_FD604FD7432D4217_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CB8A5F0)
#define CLASS_3_FD604FD7432D4217_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1CB8A5A0)
#define CLASS_3_FD604FD7432D4217__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A5E0)

inline static constexpr unsigned int Class_3_FD604FD7432D4217_TypeDefinitionIndex = 23828;

class Class_3_FD604FD7432D4217 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
	::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD604FD7432D4217__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FD604FD7432D4217*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FD604FD7432D4217*&))((::PBYTE)hIl2Cpp + CLASS_3_FD604FD7432D4217_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FD604FD7432D4217* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FD604FD7432D4217*))((::PBYTE)hIl2Cpp + CLASS_3_FD604FD7432D4217_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
