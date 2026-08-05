#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E6C82E78B01898D_CLASS_1_7D6A23F0C34C43B0_METHOD_1_8EAC26ACC0299D25_OFFSET UNITYSDK_OFFSET(0x147C8E50)
#define CLASS_1_5E6C82E78B01898D_CLASS_1_7D6A23F0C34C43B0__CTOR_OFFSET UNITYSDK_OFFSET(0x147C8E40)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_Class_1_7D6A23F0C34C43B0_TypeDefinitionIndex = 44821;

class Class_1_5E6C82E78B01898D_Class_1_7D6A23F0C34C43B0 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_7D6A23F0C34C43B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EAC26ACC0299D25(::MoleMole::Cameras::VNoiseSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_7D6A23F0C34C43B0_METHOD_1_8EAC26ACC0299D25_OFFSET))(this, a1);
	}
};
