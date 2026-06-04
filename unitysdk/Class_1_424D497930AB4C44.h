#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_424D497930AB4C44__CTOR_OFFSET UNITYSDK_OFFSET(0x118F6430)

inline static constexpr unsigned int Class_1_424D497930AB4C44_TypeDefinitionIndex = 73593;

class Class_1_424D497930AB4C44 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_424D497930AB4C44__CTOR_OFFSET))(this);
	}
};
