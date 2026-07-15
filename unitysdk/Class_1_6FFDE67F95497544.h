#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06F7995EB381C93A;
class Class_1_7807B2B04302CD7B_31;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_6FFDE67F95497544_CLEAR_OFFSET UNITYSDK_OFFSET(0x16357D30)
#define CLASS_1_6FFDE67F95497544_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16357D70)
#define CLASS_1_6FFDE67F95497544_METHOD_1_2952BDB843A11AE8_OFFSET UNITYSDK_OFFSET(0x16359CF0)
#define CLASS_1_6FFDE67F95497544_METHOD_1_3F0FD78B8CD1529B_OFFSET UNITYSDK_OFFSET(0x16357DE0)
#define CLASS_1_6FFDE67F95497544_METHOD_1_89F52D1287C9BCEC_OFFSET UNITYSDK_OFFSET(0x1635C460)
#define CLASS_1_6FFDE67F95497544_METHOD_1_CA63D2769FEA284C_1_OFFSET UNITYSDK_OFFSET(0x16359420)
#define CLASS_1_6FFDE67F95497544_METHOD_1_CA63D2769FEA284C_OFFSET UNITYSDK_OFFSET(0x16358B50)
#define CLASS_1_6FFDE67F95497544__CTOR_OFFSET UNITYSDK_OFFSET(0x1635CA00)

inline static constexpr unsigned int Class_1_6FFDE67F95497544_TypeDefinitionIndex = 64566;

class Class_1_6FFDE67F95497544 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_3F0FD78B8CD1529B(::Class_1_06F7995EB381C93A* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_06F7995EB381C93A*))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_METHOD_1_3F0FD78B8CD1529B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA63D2769FEA284C(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_METHOD_1_CA63D2769FEA284C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA63D2769FEA284C_1(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_METHOD_1_CA63D2769FEA284C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2952BDB843A11AE8(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_31*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_31*>*))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_METHOD_1_2952BDB843A11AE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89F52D1287C9BCEC(::System::IO::BinaryWriter* a1, ::Class_1_7807B2B04302CD7B_31* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::Class_1_7807B2B04302CD7B_31*))((::PBYTE)hIl2Cpp + CLASS_1_6FFDE67F95497544_METHOD_1_89F52D1287C9BCEC_OFFSET))(this, a1, a2);
	}
};
