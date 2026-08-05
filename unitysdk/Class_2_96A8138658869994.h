#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_96A8138658869994_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x11238420)
#define CLASS_2_96A8138658869994_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x112382E0)
#define CLASS_2_96A8138658869994__CTOR_OFFSET UNITYSDK_OFFSET(0x112383B0)

inline static constexpr unsigned int Class_2_96A8138658869994_TypeDefinitionIndex = 53174;

class Class_2_96A8138658869994 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96A8138658869994__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96A8138658869994_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96A8138658869994_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
