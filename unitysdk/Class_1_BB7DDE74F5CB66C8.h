#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68_1.h"
#include "unitysdk/System/Object.h"

class Class_1_424D497930AB4C44;
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BB7DDE74F5CB66C8_METHOD_1_81D4FE699CC17D37_OFFSET UNITYSDK_OFFSET(0x17FDB620)
#define CLASS_1_BB7DDE74F5CB66C8__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDB700)

inline static constexpr unsigned int Class_1_BB7DDE74F5CB66C8_TypeDefinitionIndex = 78794;

class Class_1_BB7DDE74F5CB66C8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB7DDE74F5CB66C8__CTOR_OFFSET))(this);
	}

	static ::Class_1_424D497930AB4C44* Method_1_81D4FE699CC17D37(::Enum_3_63CDB6C405C8FD68_1 a1, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* a2)
	{
		return ((::Class_1_424D497930AB4C44*(*)(::Enum_3_63CDB6C405C8FD68_1, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_BB7DDE74F5CB66C8_METHOD_1_81D4FE699CC17D37_OFFSET))(a1, a2);
	}
};
