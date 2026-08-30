#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_12121D6A4A8DB72D.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1406;
class Class_1_618FDACA68478222;
namespace RPG::Client::B51Racing { class B51RacingGameplayResultDialogViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01B4FEE4DF325C8A_METHOD_1_3430D83EEB3B7041_OFFSET UNITYSDK_OFFSET(0x1632DEE0)
#define CLASS_1_01B4FEE4DF325C8A_METHOD_1_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0x1632E060)
#define CLASS_1_01B4FEE4DF325C8A_METHOD_1_69E4E2830F304445_OFFSET UNITYSDK_OFFSET(0x1632DF90)
#define CLASS_1_01B4FEE4DF325C8A_METHOD_1_DA7689CA52ABF496_OFFSET UNITYSDK_OFFSET(0x1632E270)
#define CLASS_1_01B4FEE4DF325C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1632E2E0)

inline static constexpr unsigned int Class_1_01B4FEE4DF325C8A_TypeDefinitionIndex = 80614;

class Class_1_01B4FEE4DF325C8A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01B4FEE4DF325C8A__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1406* Method_1_3430D83EEB3B7041()
	{
		return ((::Class_0_16E4307DCC419505_1406*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01B4FEE4DF325C8A_METHOD_1_3430D83EEB3B7041_OFFSET))(this);
	}

	::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* Method_1_69E4E2830F304445(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>* a3, ::System::Int32 a4, ::System::String* a5, ::System::Single a6, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a7)
	{
		return ((::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_12121D6A4A8DB72D>*, ::System::Int32, ::System::String*, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_01B4FEE4DF325C8A_METHOD_1_69E4E2830F304445_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_DA7689CA52ABF496(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_01B4FEE4DF325C8A_METHOD_1_DA7689CA52ABF496_OFFSET))(this, a1);
	}

	static ::Class_1_618FDACA68478222* Method_1_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_618FDACA68478222*(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B4FEE4DF325C8A_METHOD_1_53D01BC7BE0C0CAC_OFFSET))();
	}
};
