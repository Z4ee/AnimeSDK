#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }

#define CLASS_1_30700BDD5BCB4E91_METHOD_1_DEA11431BE9F8B28_OFFSET UNITYSDK_OFFSET(0x13B9F290)
#define CLASS_1_30700BDD5BCB4E91__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9F080)

inline static constexpr unsigned int Class_1_30700BDD5BCB4E91_TypeDefinitionIndex = 60540;

class Class_1_30700BDD5BCB4E91 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30700BDD5BCB4E91__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_DEA11431BE9F8B28(::RPG::Client::GridFightGameRefData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + CLASS_1_30700BDD5BCB4E91_METHOD_1_DEA11431BE9F8B28_OFFSET))(this, a1);
	}
};
