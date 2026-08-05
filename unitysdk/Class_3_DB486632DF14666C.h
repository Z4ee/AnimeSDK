#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_DB486632DF14666C_Enum_3_2D42152837537601.h"

class Class_1_22AF1BA6B9A53CBF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_DB486632DF14666C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1780CE40)
#define CLASS_3_DB486632DF14666C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1780D250)
#define CLASS_3_DB486632DF14666C_METHOD_3_AD677364DBCC6607_OFFSET UNITYSDK_OFFSET(0x1780CF20)
#define CLASS_3_DB486632DF14666C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1780D1D0)
#define CLASS_3_DB486632DF14666C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1780C9C0)
#define CLASS_3_DB486632DF14666C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1780CE90)
#define CLASS_3_DB486632DF14666C__CTOR_OFFSET UNITYSDK_OFFSET(0x1780CF10)

inline static constexpr unsigned int Class_3_DB486632DF14666C_TypeDefinitionIndex = 57129;

class Class_3_DB486632DF14666C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_9 = 0x97; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_22AF1BA6B9A53CBF*>* Field_3_1; // 0x48
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_7; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x58
	::System::Collections::Generic::List_1<::Class_1_22AF1BA6B9A53CBF*>* Field_3_2; // 0x60
	::UnityEngine::GameObject* Field_3_4; // 0x68
	::System::Action_1<::Class_3_DB486632DF14666C*>* Field_3_5; // 0x70
	::Class_3_DB486632DF14666C_Enum_3_2D42152837537601 Field_3_10; // 0x78
	::System::Boolean Field_3_11; // 0x7C
	::System::Boolean Field_3_6; // 0x7D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_AD677364DBCC6607(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C_METHOD_3_AD677364DBCC6607_OFFSET))(this, a1);
	}

	static ::Class_3_DB486632DF14666C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_DB486632DF14666C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB486632DF14666C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
