#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_93DB885148852DA6_CLASS_1_6672F1FA769BB71C_METHOD_1_6974378DF0FD9565_OFFSET UNITYSDK_OFFSET(0x10B35820)
#define CLASS_1_93DB885148852DA6_CLASS_1_6672F1FA769BB71C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B35810)

inline static constexpr unsigned int Class_1_93DB885148852DA6_Class_1_6672F1FA769BB71C_TypeDefinitionIndex = 53451;

class Class_1_93DB885148852DA6_Class_1_6672F1FA769BB71C : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_6672F1FA769BB71C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6974378DF0FD9565(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_93DB885148852DA6_CLASS_1_6672F1FA769BB71C_METHOD_1_6974378DF0FD9565_OFFSET))(this, a1);
	}
};
