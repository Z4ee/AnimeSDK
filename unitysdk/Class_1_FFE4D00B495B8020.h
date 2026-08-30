#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Proto { class ItemList; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_FFE4D00B495B8020_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153CCA20)
#define CLASS_1_FFE4D00B495B8020_METHOD_1_6A17DC2E1FF2754E_OFFSET UNITYSDK_OFFSET(0x153CC7D0)
#define CLASS_1_FFE4D00B495B8020_METHOD_1_C53E7A79AA70FC4A_OFFSET UNITYSDK_OFFSET(0x153CC930)
#define CLASS_1_FFE4D00B495B8020__CTOR_OFFSET UNITYSDK_OFFSET(0x153CC750)

inline static constexpr unsigned int Class_1_FFE4D00B495B8020_TypeDefinitionIndex = 75061;

class Class_1_FFE4D00B495B8020 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45>>* DACMHFNGKCG; // 0x10
	::Enum_3_0A3761FE34514D6C_45 GMCNLFICNOB; // 0x18
	::System::UInt32 ANOPNMFJLMI; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::Enum_3_0A3761FE34514D6C_45 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45>>* Method_1_6A17DC2E1FF2754E()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::ValueTuple_2<::Proto::ItemList*, ::Enum_3_0A3761FE34514D6C_45>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFE4D00B495B8020_METHOD_1_6A17DC2E1FF2754E_OFFSET))(this);
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
