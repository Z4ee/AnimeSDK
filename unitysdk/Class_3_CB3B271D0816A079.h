#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_2_0206DD479BB5C906;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CB3B271D0816A079_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x114E1E70)
#define CLASS_3_CB3B271D0816A079_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x114E2130)
#define CLASS_3_CB3B271D0816A079_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x114E21C0)
#define CLASS_3_CB3B271D0816A079_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x114E20B0)
#define CLASS_3_CB3B271D0816A079_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x114E20A0)
#define CLASS_3_CB3B271D0816A079_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x114E1B80)
#define CLASS_3_CB3B271D0816A079__CCTOR_OFFSET UNITYSDK_OFFSET(0x114E1EC0)
#define CLASS_3_CB3B271D0816A079__CTOR_OFFSET UNITYSDK_OFFSET(0x114E1F40)

inline static constexpr unsigned int Class_3_CB3B271D0816A079_TypeDefinitionIndex = 72010;

class Class_3_CB3B271D0816A079 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_9 = 0x24; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* Field_3_7; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_0; // 0x50
	::Class_2_0206DD479BB5C906* Field_3_4; // 0x58
	::Class_2_0206DD479BB5C906* Field_3_5; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_1; // 0x68
	::System::Int32 Field_3_8; // 0x70
	::System::Boolean Field_3_2; // 0x74
	::System::Boolean Field_3_3; // 0x75
	::System::Boolean Field_3_6; // 0x76

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_CB3B271D0816A079* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_CB3B271D0816A079*(*)())((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_CB3B271D0816A079_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
