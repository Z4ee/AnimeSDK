#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CharacterCommonDatas; }
namespace System { class Action; }

#define CLASS_1_BFE58BAA2844CD47_CLASS_1_6D816E2BC84B47F1_METHOD_1_F90BAE042F1CCB2F_OFFSET UNITYSDK_OFFSET(0x1481C7C0)
#define CLASS_1_BFE58BAA2844CD47_CLASS_1_6D816E2BC84B47F1__CTOR_OFFSET UNITYSDK_OFFSET(0x1481C7B0)

inline static constexpr unsigned int Class_1_BFE58BAA2844CD47_Class_1_6D816E2BC84B47F1_TypeDefinitionIndex = 76605;

class Class_1_BFE58BAA2844CD47_Class_1_6D816E2BC84B47F1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_CLASS_1_6D816E2BC84B47F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F90BAE042F1CCB2F(::MoleMole::CharacterCommonDatas* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterCommonDatas*))((::PBYTE)hIl2Cpp + CLASS_1_BFE58BAA2844CD47_CLASS_1_6D816E2BC84B47F1_METHOD_1_F90BAE042F1CCB2F_OFFSET))(this, a1);
	}
};
