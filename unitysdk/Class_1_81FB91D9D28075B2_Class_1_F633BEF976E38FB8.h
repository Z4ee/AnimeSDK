#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace System { class Action; }

#define CLASS_1_81FB91D9D28075B2_CLASS_1_F633BEF976E38FB8_METHOD_1_163E23C24ADDB37E_OFFSET UNITYSDK_OFFSET(0xF64D170)
#define CLASS_1_81FB91D9D28075B2_CLASS_1_F633BEF976E38FB8__CTOR_OFFSET UNITYSDK_OFFSET(0xF64D160)

inline static constexpr unsigned int Class_1_81FB91D9D28075B2_Class_1_F633BEF976E38FB8_TypeDefinitionIndex = 77268;

class Class_1_81FB91D9D28075B2_Class_1_F633BEF976E38FB8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_CLASS_1_F633BEF976E38FB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_163E23C24ADDB37E(::MoleMole::Config::OverlayOutlineCollectionConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OverlayOutlineCollectionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_81FB91D9D28075B2_CLASS_1_F633BEF976E38FB8_METHOD_1_163E23C24ADDB37E_OFFSET))(this, a1);
	}
};
