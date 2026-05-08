#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_80AC63F59C5E376B;
class Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9_METHOD_1_76D5BDC564508CD8_OFFSET UNITYSDK_OFFSET(0x14C97350)
#define CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9_METHOD_1_9A5E606F81CD7EDA_OFFSET UNITYSDK_OFFSET(0x14C96BE0)
#define CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9__CTOR_OFFSET UNITYSDK_OFFSET(0x14C96BD0)

inline static constexpr unsigned int Class_2_80AC63F59C5E376B_Class_1_A5AA64B3D91D28A9_TypeDefinitionIndex = 72479;

class Class_2_80AC63F59C5E376B_Class_1_A5AA64B3D91D28A9 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_2_80AC63F59C5E376B* Field_1_2; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A5E606F81CD7EDA(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9_METHOD_1_9A5E606F81CD7EDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_76D5BDC564508CD8(::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_98CC9643C32C6170_Class_1_DBE45A2B69DC33BB*))((::PBYTE)hIl2Cpp + CLASS_2_80AC63F59C5E376B_CLASS_1_A5AA64B3D91D28A9_METHOD_1_76D5BDC564508CD8_OFFSET))(this, a1);
	}
};
