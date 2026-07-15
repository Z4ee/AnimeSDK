#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_635;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_694420008A5D823D_2_METHOD_1_5AD104402F3C0576_OFFSET UNITYSDK_OFFSET(0x170BC9E0)
#define CLASS_1_694420008A5D823D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x170BCA60)

inline static constexpr unsigned int Class_1_694420008A5D823D_2_TypeDefinitionIndex = 61232;

class Class_1_694420008A5D823D_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_694420008A5D823D_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_635* Method_1_5AD104402F3C0576(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_635*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_694420008A5D823D_2_METHOD_1_5AD104402F3C0576_OFFSET))(this, a1);
	}
};
