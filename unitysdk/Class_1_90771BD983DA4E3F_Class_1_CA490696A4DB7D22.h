#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace System { class Action; }

#define CLASS_1_90771BD983DA4E3F_CLASS_1_CA490696A4DB7D22_METHOD_1_60B1B2C4279DA9D9_OFFSET UNITYSDK_OFFSET(0x19934860)
#define CLASS_1_90771BD983DA4E3F_CLASS_1_CA490696A4DB7D22__CTOR_OFFSET UNITYSDK_OFFSET(0x19934850)

inline static constexpr unsigned int Class_1_90771BD983DA4E3F_Class_1_CA490696A4DB7D22_TypeDefinitionIndex = 77167;

class Class_1_90771BD983DA4E3F_Class_1_CA490696A4DB7D22 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_CA490696A4DB7D22__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60B1B2C4279DA9D9(::MoleMole::MonsterSpecialIdleConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterSpecialIdleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_CA490696A4DB7D22_METHOD_1_60B1B2C4279DA9D9_OFFSET))(this, a1);
	}
};
