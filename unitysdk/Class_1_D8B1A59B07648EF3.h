#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraTeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D8B1A59B07648EF3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141C95D0)
#define CLASS_1_D8B1A59B07648EF3_METHOD_1_34A0F0635B7F1CFC_OFFSET UNITYSDK_OFFSET(0x141C9840)
#define CLASS_1_D8B1A59B07648EF3_METHOD_1_5B54BCEEEE5A67F7_OFFSET UNITYSDK_OFFSET(0x141C9640)
#define CLASS_1_D8B1A59B07648EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x141C9880)

inline static constexpr unsigned int Class_1_D8B1A59B07648EF3_TypeDefinitionIndex = 59384;

class Class_1_D8B1A59B07648EF3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8B1A59B07648EF3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8B1A59B07648EF3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5B54BCEEEE5A67F7(::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*))((::PBYTE)hIl2Cpp + CLASS_1_D8B1A59B07648EF3_METHOD_1_5B54BCEEEE5A67F7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>* Method_1_34A0F0635B7F1CFC()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8B1A59B07648EF3_METHOD_1_34A0F0635B7F1CFC_OFFSET))(this);
	}
};
