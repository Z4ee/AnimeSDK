#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E6C82E78B01898D_CLASS_1_924E685997FDA08A_METHOD_1_2EF7520697B2890A_OFFSET UNITYSDK_OFFSET(0x101D8310)
#define CLASS_1_5E6C82E78B01898D_CLASS_1_924E685997FDA08A__CTOR_OFFSET UNITYSDK_OFFSET(0x101D8300)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_Class_1_924E685997FDA08A_TypeDefinitionIndex = 44037;

class Class_1_5E6C82E78B01898D_Class_1_924E685997FDA08A : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_924E685997FDA08A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2EF7520697B2890A(::MoleMole::Cameras::VNoiseSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_924E685997FDA08A_METHOD_1_2EF7520697B2890A_OFFSET))(this, a1);
	}
};
