#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ResourceModeBase.h"

namespace System { class Action; }

#define CLASS_2_97FDBE0605E8F690_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x16802940)
#define CLASS_2_97FDBE0605E8F690__CTOR_OFFSET UNITYSDK_OFFSET(0x168028D0)

inline static constexpr unsigned int Class_2_97FDBE0605E8F690_TypeDefinitionIndex = 44426;

class Class_2_97FDBE0605E8F690 : public ::ResourceModeBase
{
public:
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_97FDBE0605E8F690__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97FDBE0605E8F690_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}
};
