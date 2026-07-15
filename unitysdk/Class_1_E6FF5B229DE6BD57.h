#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_603;
class Class_1_1CD633F3449963C2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_E6FF5B229DE6BD57_METHOD_1_33B1F092BFC5FA01_OFFSET UNITYSDK_OFFSET(0x16E75350)
#define CLASS_1_E6FF5B229DE6BD57_METHOD_1_7FD21012F3CD729F_OFFSET UNITYSDK_OFFSET(0x16E75CA0)
#define CLASS_1_E6FF5B229DE6BD57__CTOR_OFFSET UNITYSDK_OFFSET(0x16E756A0)

inline static constexpr unsigned int Class_1_E6FF5B229DE6BD57_TypeDefinitionIndex = 65204;

class Class_1_E6FF5B229DE6BD57 : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::Class_1_1CD633F3449963C2*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57__CTOR_OFFSET))(this, a1);
	}

	static ::Class_0_16E4307DCC419505_603* Method_1_33B1F092BFC5FA01(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::Class_0_16E4307DCC419505_603*(*)(::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57_METHOD_1_33B1F092BFC5FA01_OFFSET))(a1);
	}

	::System::Boolean Method_1_7FD21012F3CD729F(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E6FF5B229DE6BD57_METHOD_1_7FD21012F3CD729F_OFFSET))(this, a1);
	}
};
