#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InitCharacterPerform; }
namespace System { class Action; }

#define CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA_METHOD_1_5BABAB8716C38EBF_OFFSET UNITYSDK_OFFSET(0xF3B8050)
#define CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B8040)

inline static constexpr unsigned int Class_1_35AE87745AB78B30_Class_1_DA776135800DAFEA_TypeDefinitionIndex = 38168;

class Class_1_35AE87745AB78B30_Class_1_DA776135800DAFEA : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BABAB8716C38EBF(::MoleMole::InitCharacterPerform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InitCharacterPerform*))((::PBYTE)hIl2Cpp + CLASS_1_35AE87745AB78B30_CLASS_1_DA776135800DAFEA_METHOD_1_5BABAB8716C38EBF_OFFSET))(this, a1);
	}
};
