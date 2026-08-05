#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterMappingConfig; }
namespace System { class Action; }

#define CLASS_1_C8AA3B38C566F726_CLASS_1_83BEC393B42609F4_METHOD_1_6A532207822BD580_OFFSET UNITYSDK_OFFSET(0x126E5850)
#define CLASS_1_C8AA3B38C566F726_CLASS_1_83BEC393B42609F4__CTOR_OFFSET UNITYSDK_OFFSET(0x126E5840)

inline static constexpr unsigned int Class_1_C8AA3B38C566F726_Class_1_83BEC393B42609F4_TypeDefinitionIndex = 46876;

class Class_1_C8AA3B38C566F726_Class_1_83BEC393B42609F4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_83BEC393B42609F4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6A532207822BD580(::MoleMole::MonsterMappingConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterMappingConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C8AA3B38C566F726_CLASS_1_83BEC393B42609F4_METHOD_1_6A532207822BD580_OFFSET))(this, a1);
	}
};
