#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }

#define CLASS_1_BFE58BAA2844CD47_CLASS_1_D8DF7669BBCFDD32_METHOD_1_DB90C328AA4776F4_OFFSET UNITYSDK_OFFSET(0x13FB1160)
#define CLASS_1_BFE58BAA2844CD47_CLASS_1_D8DF7669BBCFDD32__CTOR_OFFSET UNITYSDK_OFFSET(0x13FB1150)

inline static constexpr unsigned int Class_1_BFE58BAA2844CD47_Class_1_D8DF7669BBCFDD32_TypeDefinitionIndex = 66196;

class Class_1_BFE58BAA2844CD47_Class_1_D8DF7669BBCFDD32 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_CLASS_1_D8DF7669BBCFDD32__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DB90C328AA4776F4(::MoleMole::CharacterCommonDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterCommonDatas*))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_CLASS_1_D8DF7669BBCFDD32_METHOD_1_DB90C328AA4776F4_OFFSET))(this, a1);
	}
};
