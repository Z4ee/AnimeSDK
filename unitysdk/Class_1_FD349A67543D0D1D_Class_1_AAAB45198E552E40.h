#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTimeSlows; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD349A67543D0D1D_CLASS_1_AAAB45198E552E40__CTOR_OFFSET UNITYSDK_OFFSET(0x142E15F0)

inline static constexpr unsigned int Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40_TypeDefinitionIndex = 81652;

class Class_1_FD349A67543D0D1D_Class_1_AAAB45198E552E40 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTimeSlows*>* Field_1_0; // 0x10
	::System::Action* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD349A67543D0D1D_CLASS_1_AAAB45198E552E40__CTOR_OFFSET))(this);
	}
};
