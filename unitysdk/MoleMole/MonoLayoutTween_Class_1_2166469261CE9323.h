#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoLayoutTween; }
namespace System { class Action; }

#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_2166469261CE9323_METHOD_1_5D9BA1D54A3CDB62_OFFSET UNITYSDK_OFFSET(0x13AC1500)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_2166469261CE9323__CTOR_OFFSET UNITYSDK_OFFSET(0x13AC14F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_Class_1_2166469261CE9323_TypeDefinitionIndex = 75837;

	class MonoLayoutTween_Class_1_2166469261CE9323 : public ::System::Object
	{
	public:
		::MoleMole::MonoLayoutTween* Field_1_2; // 0x10
		::System::Action* Field_1_0; // 0x18
		::System::Single Field_1_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_2166469261CE9323__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_5D9BA1D54A3CDB62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_2166469261CE9323_METHOD_1_5D9BA1D54A3CDB62_OFFSET))(this);
		}
	};
}
