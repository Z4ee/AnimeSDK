#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_455124A410922D9D.h"

class Class_2_C04F0E8BF3A24739_Class_1_353E09EF44780E99;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C04F0E8BF3A24739_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0xA90EE40)
#define CLASS_2_C04F0E8BF3A24739_METHOD_2_78A1456A6DBF4558_OFFSET UNITYSDK_OFFSET(0xA90F600)
#define CLASS_2_C04F0E8BF3A24739_METHOD_2_84465D9BFA7C7FCE_OFFSET UNITYSDK_OFFSET(0xA90F200)
#define CLASS_2_C04F0E8BF3A24739_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA90F750)
#define CLASS_2_C04F0E8BF3A24739_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA90EDF0)
#define CLASS_2_C04F0E8BF3A24739_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0xA90F6C0)
#define CLASS_2_C04F0E8BF3A24739__CTOR_OFFSET UNITYSDK_OFFSET(0xA90F7E0)

inline static constexpr unsigned int Class_2_C04F0E8BF3A24739_TypeDefinitionIndex = 46469;

class Class_2_C04F0E8BF3A24739 : public ::Class_1_455124A410922D9D<::Class_2_C04F0E8BF3A24739*>
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_C04F0E8BF3A24739_Class_1_353E09EF44780E99*>* Field_2_2; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Int32 Method_2_84465D9BFA7C7FCE(::System::Single a1, ::System::Action_1<::System::Int32>* a2, ::System::String* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_84465D9BFA7C7FCE_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_78A1456A6DBF4558(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_78A1456A6DBF4558_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C04F0E8BF3A24739_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}
};
