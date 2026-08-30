#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_638;
class Class_1_1CD633F3449963C2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_E6FF5B229DE6BD57_METHOD_1_33B1F092BFC5FA01_OFFSET UNITYSDK_OFFSET(0x18BD5C30)
#define CLASS_1_E6FF5B229DE6BD57_METHOD_1_7FD21012F3CD729F_OFFSET UNITYSDK_OFFSET(0x18BD6580)
#define CLASS_1_E6FF5B229DE6BD57__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD5F80)

inline static constexpr unsigned int Class_1_E6FF5B229DE6BD57_TypeDefinitionIndex = 68212;

class Class_1_E6FF5B229DE6BD57 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_1_1CD633F3449963C2*>* PGBBLHBBDPM; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57__CTOR_OFFSET))(this, a1);
	}

	static ::Class_0_16E4307DCC419505_638* Method_1_33B1F092BFC5FA01(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_638*(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57_METHOD_1_33B1F092BFC5FA01_OFFSET))(a1);
	}

	::System::Boolean Method_1_7FD21012F3CD729F(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57_METHOD_1_7FD21012F3CD729F_OFFSET))(this, a1);
	}
};
