#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class RidusGotBooSkillEx; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4EFD54D633BB1EB__CTOR_OFFSET UNITYSDK_OFFSET(0xD223B30)

inline static constexpr unsigned int Class_1_E4EFD54D633BB1EB_TypeDefinitionIndex = 39189;

class Class_1_E4EFD54D633BB1EB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::RidusGotBooSkillEx*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4EFD54D633BB1EB__CTOR_OFFSET))(this);
	}
};
