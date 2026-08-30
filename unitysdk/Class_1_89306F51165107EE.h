#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_1_43BD383C98B4C0C5_115;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_89306F51165107EE_METHOD_1_1CBD8C810F27A595_OFFSET UNITYSDK_OFFSET(0xBC42930)
#define CLASS_1_89306F51165107EE_METHOD_1_69468F98916CB04C_OFFSET UNITYSDK_OFFSET(0xBC42280)
#define CLASS_1_89306F51165107EE_METHOD_1_9D2B2A131CA29F85_OFFSET UNITYSDK_OFFSET(0xBC42790)
#define CLASS_1_89306F51165107EE_METHOD_1_F3D5D87801723542_OFFSET UNITYSDK_OFFSET(0xBC42420)
#define CLASS_1_89306F51165107EE__CTOR_OFFSET UNITYSDK_OFFSET(0xBC42A90)

inline static constexpr unsigned int Class_1_89306F51165107EE_TypeDefinitionIndex = 65373;

class Class_1_89306F51165107EE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_115*>* OHHACMNMMAN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89306F51165107EE__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_69468F98916CB04C(::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* a1, ::Class_1_43BD383C98B4C0C5_115* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*, ::Class_1_43BD383C98B4C0C5_115*))((::PBYTE)hIl2Cpp + CLASS_1_89306F51165107EE_METHOD_1_69468F98916CB04C_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_9D2B2A131CA29F85(::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_115*>* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_43BD383C98B4C0C5_115*>*))((::PBYTE)hIl2Cpp + CLASS_1_89306F51165107EE_METHOD_1_9D2B2A131CA29F85_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_F3D5D87801723542(::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_1_89306F51165107EE_METHOD_1_F3D5D87801723542_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_1CBD8C810F27A595(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_1_89306F51165107EE_METHOD_1_1CBD8C810F27A595_OFFSET))(this, a1, a2);
	}
};
