#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1096;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_41A69663520EB918_DISPOSE_OFFSET UNITYSDK_OFFSET(0x97C0060)
#define CLASS_1_41A69663520EB918_METHOD_1_48406879F1ED15E9_OFFSET UNITYSDK_OFFSET(0x97C0750)
#define CLASS_1_41A69663520EB918_METHOD_1_5FF2B4FEB7C6CA45_OFFSET UNITYSDK_OFFSET(0x97C04B0)
#define CLASS_1_41A69663520EB918_METHOD_1_87BD4DF5EA15A3A8_OFFSET UNITYSDK_OFFSET(0x97C01A0)
#define CLASS_1_41A69663520EB918_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x97C0A90)
#define CLASS_1_41A69663520EB918__CTOR_OFFSET UNITYSDK_OFFSET(0x97C0B10)

inline static constexpr unsigned int Class_1_41A69663520EB918_TypeDefinitionIndex = 69380;

class Class_1_41A69663520EB918 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_1_2; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_87BD4DF5EA15A3A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918_METHOD_1_87BD4DF5EA15A3A8_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1096*>* Method_1_5FF2B4FEB7C6CA45(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1096*>*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918_METHOD_1_5FF2B4FEB7C6CA45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48406879F1ED15E9(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918_METHOD_1_48406879F1ED15E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_41A69663520EB918_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}
};
