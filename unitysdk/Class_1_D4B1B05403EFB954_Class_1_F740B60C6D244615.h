#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class CinemaSingleBeatMapConfig; }
namespace System { class Action; }

#define CLASS_1_D4B1B05403EFB954_CLASS_1_F740B60C6D244615_METHOD_1_48583FA13F58D42D_OFFSET UNITYSDK_OFFSET(0xDED11F0)
#define CLASS_1_D4B1B05403EFB954_CLASS_1_F740B60C6D244615__CTOR_OFFSET UNITYSDK_OFFSET(0xDED11E0)

inline static constexpr unsigned int Class_1_D4B1B05403EFB954_Class_1_F740B60C6D244615_TypeDefinitionIndex = 66381;

class Class_1_D4B1B05403EFB954_Class_1_F740B60C6D244615 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_F740B60C6D244615__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_48583FA13F58D42D(::MoleMole::CinemaSingleBeatMapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D4B1B05403EFB954_CLASS_1_F740B60C6D244615_METHOD_1_48583FA13F58D42D_OFFSET))(this, a1);
	}
};
