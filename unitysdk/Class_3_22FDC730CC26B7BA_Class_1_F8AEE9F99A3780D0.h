#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_F8AEE9F99A3780D0__CTOR_OFFSET UNITYSDK_OFFSET(0x145A6CC0)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_F8AEE9F99A3780D0_TypeDefinitionIndex = 74559;

class Class_3_22FDC730CC26B7BA_Class_1_F8AEE9F99A3780D0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::Enum_3_0A3761FE34514D6C_1 Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_F8AEE9F99A3780D0__CTOR_OFFSET))(this);
	}
};
