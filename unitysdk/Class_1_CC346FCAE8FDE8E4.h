#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D5328C5CE4F15537.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CC346FCAE8FDE8E4_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1285D4B0)
#define CLASS_1_CC346FCAE8FDE8E4_METHOD_1_4E2CD7C64D22603F_OFFSET UNITYSDK_OFFSET(0x1285D410)
#define CLASS_1_CC346FCAE8FDE8E4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1285D310)
#define CLASS_1_CC346FCAE8FDE8E4_METHOD_1_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1285D380)
#define CLASS_1_CC346FCAE8FDE8E4_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1285D2F0)
#define CLASS_1_CC346FCAE8FDE8E4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_ZIPLINE_ZIPLINEINPUTCOMMAND__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1285D0F0)
#define CLASS_1_CC346FCAE8FDE8E4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1285D190)
#define CLASS_1_CC346FCAE8FDE8E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1285CDA0)
#define CLASS_1_CC346FCAE8FDE8E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1285D290)

inline static constexpr unsigned int Class_1_CC346FCAE8FDE8E4_TypeDefinitionIndex = 70852;

class Class_1_CC346FCAE8FDE8E4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_D5328C5CE4F15537>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Struct_2_D5328C5CE4F15537>* System_Collections_Generic_IEnumerable_MoleMole_ZipLine_ZipLineInputCommand__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Struct_2_D5328C5CE4F15537>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_ZIPLINE_ZIPLINEINPUTCOMMAND__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_BCCEF225A11BDA90(::Struct_2_D5328C5CE4F15537 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D5328C5CE4F15537))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_METHOD_1_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1_Enumerator<::Struct_2_D5328C5CE4F15537> Method_1_4E2CD7C64D22603F()
	{
		return ((::System::Collections::Generic::List_1_Enumerator<::Struct_2_D5328C5CE4F15537>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_METHOD_1_4E2CD7C64D22603F_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC346FCAE8FDE8E4_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
