#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ADA63C49E63DAE8E_Class_1_7F887305F1FA7173;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ADA63C49E63DAE8E_METHOD_1_6BAE34C717407C75_OFFSET UNITYSDK_OFFSET(0x1DA3BB80)
#define CLASS_1_ADA63C49E63DAE8E_METHOD_1_7C5833C04DA1B77C_OFFSET UNITYSDK_OFFSET(0x1DA3BA70)
#define CLASS_1_ADA63C49E63DAE8E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DA3BB40)
#define CLASS_1_ADA63C49E63DAE8E_METHOD_1_CCFD131833AE484B_OFFSET UNITYSDK_OFFSET(0x1DA3B910)
#define CLASS_1_ADA63C49E63DAE8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B8B0)

inline static constexpr unsigned int Class_1_ADA63C49E63DAE8E_TypeDefinitionIndex = 8302;

class Class_1_ADA63C49E63DAE8E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_ADA63C49E63DAE8E_Class_1_7F887305F1FA7173*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA63C49E63DAE8E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CCFD131833AE484B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA63C49E63DAE8E_METHOD_1_CCFD131833AE484B_OFFSET))(this);
	}

	::System::Void Method_1_7C5833C04DA1B77C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA63C49E63DAE8E_METHOD_1_7C5833C04DA1B77C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA63C49E63DAE8E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_1_ADA63C49E63DAE8E* Method_1_6BAE34C717407C75(::System::Int32 a1)
	{
		return ((::Class_1_ADA63C49E63DAE8E*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_ADA63C49E63DAE8E_METHOD_1_6BAE34C717407C75_OFFSET))(a1);
	}
};
