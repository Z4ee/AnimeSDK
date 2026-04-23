#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A;
class Class_2_3547B9D7F2C7CCA9;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_231E8E73584B3379_OFFSET UNITYSDK_OFFSET(0x900F050)
#define CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x90025C0)
#define CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_FF62DE71174B7351_OFFSET UNITYSDK_OFFSET(0x900F380)
#define CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x8FFC5B0)

inline static constexpr unsigned int Class_1_56FF45D7B2C55655_Class_1_83B01E15DC3B0CEC_TypeDefinitionIndex = 67984;

class Class_1_56FF45D7B2C55655_Class_1_83B01E15DC3B0CEC : public ::System::Object
{
public:
	::Class_2_3547B9D7F2C7CCA9* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_3547B9D7F2C7CCA9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3547B9D7F2C7CCA9*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A* Method_1_231E8E73584B3379(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::Action_1<::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>* a5, ::System::Boolean a6)
	{
		return ((::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Action_1<::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_231E8E73584B3379_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A* Method_1_FF62DE71174B7351(::System::String* a1, ::System::String* a2, ::System::Action_1<::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>* a3)
	{
		return ((::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::Class_1_56FF45D7B2C55655_Class_1_33E4080F71CF646A*>*))((::PBYTE)hIl2Cpp + CLASS_1_56FF45D7B2C55655_CLASS_1_83B01E15DC3B0CEC_METHOD_1_FF62DE71174B7351_OFFSET))(this, a1, a2, a3);
	}
};
