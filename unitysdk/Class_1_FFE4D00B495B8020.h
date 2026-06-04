#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Proto { class ItemList; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_FFE4D00B495B8020_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136116A0)
#define CLASS_1_FFE4D00B495B8020_METHOD_1_C53E7A79AA70FC4A_OFFSET UNITYSDK_OFFSET(0x136115B0)
#define CLASS_1_FFE4D00B495B8020_METHOD_1_E6B4BD385011C9DA_OFFSET UNITYSDK_OFFSET(0x136114D0)
#define CLASS_1_FFE4D00B495B8020__CTOR_OFFSET UNITYSDK_OFFSET(0x13611450)

inline static constexpr unsigned int Class_1_FFE4D00B495B8020_TypeDefinitionIndex = 70231;

class Class_1_FFE4D00B495B8020 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::Enum_3_0A3761FE34514D6C_43 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_0A3761FE34514D6C_43 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_43))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>* Method_1_E6B4BD385011C9DA()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_43>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020_METHOD_1_E6B4BD385011C9DA_OFFSET))(this);
	}

	::System::Void Method_1_C53E7A79AA70FC4A(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020_METHOD_1_C53E7A79AA70FC4A_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020_DISPOSE_OFFSET))(this);
	}
};
