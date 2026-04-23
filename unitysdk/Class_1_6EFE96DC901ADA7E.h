#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Proto { class ItemList; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_6EFE96DC901ADA7E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11D6D8D0)
#define CLASS_1_6EFE96DC901ADA7E_METHOD_1_843C0FAAB92B5519_OFFSET UNITYSDK_OFFSET(0x11D6D7E0)
#define CLASS_1_6EFE96DC901ADA7E_METHOD_1_E6B4BD385011C9DA_OFFSET UNITYSDK_OFFSET(0x11D6D700)
#define CLASS_1_6EFE96DC901ADA7E__CTOR_OFFSET UNITYSDK_OFFSET(0x11D6D690)

inline static constexpr unsigned int Class_1_6EFE96DC901ADA7E_TypeDefinitionIndex = 69419;

class Class_1_6EFE96DC901ADA7E : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::Enum_3_0A3761FE34514D6C_43 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_0A3761FE34514D6C_43 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_43))((::PBYTE)hIl2Cpp + CLASS_1_6EFE96DC901ADA7E__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>* Method_1_E6B4BD385011C9DA()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EFE96DC901ADA7E_METHOD_1_E6B4BD385011C9DA_OFFSET))(this);
	}

	::System::Void Method_1_843C0FAAB92B5519(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6EFE96DC901ADA7E_METHOD_1_843C0FAAB92B5519_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EFE96DC901ADA7E_DISPOSE_OFFSET))(this);
	}
};
