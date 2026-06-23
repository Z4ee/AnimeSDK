#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CommonDitherConfigs; }
namespace System { class Action; }

#define CLASS_1_51D0AC0E0849A7FC_CLASS_1_C7BFE955BD0CAE32_METHOD_1_FB02D27CAC1A6A77_OFFSET UNITYSDK_OFFSET(0x17917C40)
#define CLASS_1_51D0AC0E0849A7FC_CLASS_1_C7BFE955BD0CAE32__CTOR_OFFSET UNITYSDK_OFFSET(0x17917C30)

inline static constexpr unsigned int Class_1_51D0AC0E0849A7FC_Class_1_C7BFE955BD0CAE32_TypeDefinitionIndex = 56372;

class Class_1_51D0AC0E0849A7FC_Class_1_C7BFE955BD0CAE32 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_CLASS_1_C7BFE955BD0CAE32__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB02D27CAC1A6A77(::MoleMole::Config::CommonDitherConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CommonDitherConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_51D0AC0E0849A7FC_CLASS_1_C7BFE955BD0CAE32_METHOD_1_FB02D27CAC1A6A77_OFFSET))(this, a1);
	}
};
