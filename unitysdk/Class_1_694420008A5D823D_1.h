#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_671;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_694420008A5D823D_1_METHOD_1_5AD104402F3C0576_OFFSET UNITYSDK_OFFSET(0x153E2960)
#define CLASS_1_694420008A5D823D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x153E29E0)

inline static constexpr unsigned int Class_1_694420008A5D823D_1_TypeDefinitionIndex = 64209;

class Class_1_694420008A5D823D_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_694420008A5D823D_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_671* Method_1_5AD104402F3C0576(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_671*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_694420008A5D823D_1_METHOD_1_5AD104402F3C0576_OFFSET))(this, a1);
	}
};
