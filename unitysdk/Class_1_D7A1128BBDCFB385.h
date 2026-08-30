#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06F7995EB381C93A;
class Class_1_7807B2B04302CD7B_32;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_D7A1128BBDCFB385_CLEAR_OFFSET UNITYSDK_OFFSET(0x172B1020)
#define CLASS_1_D7A1128BBDCFB385_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172B1060)
#define CLASS_1_D7A1128BBDCFB385_METHOD_1_4446CE9032C1E992_OFFSET UNITYSDK_OFFSET(0x172B10D0)
#define CLASS_1_D7A1128BBDCFB385_METHOD_1_89F52D1287C9BCEC_OFFSET UNITYSDK_OFFSET(0x172B5810)
#define CLASS_1_D7A1128BBDCFB385_METHOD_1_C1153B372DBB8DB6_OFFSET UNITYSDK_OFFSET(0x172B3020)
#define CLASS_1_D7A1128BBDCFB385_METHOD_1_CA63D2769FEA284C_1_OFFSET UNITYSDK_OFFSET(0x172B2750)
#define CLASS_1_D7A1128BBDCFB385_METHOD_1_CA63D2769FEA284C_OFFSET UNITYSDK_OFFSET(0x172B1E80)
#define CLASS_1_D7A1128BBDCFB385__CTOR_OFFSET UNITYSDK_OFFSET(0x172B5DB0)

inline static constexpr unsigned int Class_1_D7A1128BBDCFB385_TypeDefinitionIndex = 67562;

class Class_1_D7A1128BBDCFB385 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_CLEAR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_4446CE9032C1E992(::Class_1_06F7995EB381C93A* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_06F7995EB381C93A*))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_METHOD_1_4446CE9032C1E992_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA63D2769FEA284C(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_METHOD_1_CA63D2769FEA284C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA63D2769FEA284C_1(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_METHOD_1_CA63D2769FEA284C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C1153B372DBB8DB6(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_32*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::Collections::Generic::IList_1<::Class_1_7807B2B04302CD7B_32*>*))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_METHOD_1_C1153B372DBB8DB6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89F52D1287C9BCEC(::System::IO::BinaryWriter* a1, ::Class_1_7807B2B04302CD7B_32* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::Class_1_7807B2B04302CD7B_32*))((::PBYTE)hIl2Cpp + CLASS_1_D7A1128BBDCFB385_METHOD_1_89F52D1287C9BCEC_OFFSET))(this, a1, a2);
	}
};
