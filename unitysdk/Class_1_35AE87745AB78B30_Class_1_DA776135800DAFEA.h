#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InitCharacterPerform; }
namespace System { class Action; }

#define CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA_METHOD_1_5BABAB8716C38EBF_OFFSET UNITYSDK_OFFSET(0x142F5BB0)
#define CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA__CTOR_OFFSET UNITYSDK_OFFSET(0x142F59D0)

inline static constexpr unsigned int Class_1_35AE87745AB78B30_Class_1_DA776135800DAFEA_TypeDefinitionIndex = 45123;

class Class_1_35AE87745AB78B30_Class_1_DA776135800DAFEA : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BABAB8716C38EBF(::MoleMole::InitCharacterPerform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InitCharacterPerform*))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA_METHOD_1_5BABAB8716C38EBF_OFFSET))(this, a1);
	}
};
