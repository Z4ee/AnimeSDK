#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B6441625E3D7D3E0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F15DE20134ACD401_GET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC3B0)
#define CLASS_1_F15DE20134ACD401_GET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC3F0)
#define CLASS_1_F15DE20134ACD401_GET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC3D0)
#define CLASS_1_F15DE20134ACD401_METHOD_1_A893986B31156888_OFFSET UNITYSDK_OFFSET(0x179AC410)
#define CLASS_1_F15DE20134ACD401_SET_MASTERCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC3C0)
#define CLASS_1_F15DE20134ACD401_SET_NEUTRALCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC400)
#define CLASS_1_F15DE20134ACD401_SET_SERVANTCARDIDS_OFFSET UNITYSDK_OFFSET(0x179AC3E0)
#define CLASS_1_F15DE20134ACD401__CTOR_OFFSET UNITYSDK_OFFSET(0x179AC640)

inline static constexpr unsigned int Class_1_F15DE20134ACD401_TypeDefinitionIndex = 76180;

class Class_1_F15DE20134ACD401 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _MasterCardIDs_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _NeutralCardIDs_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* _ServantCardIDs_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_MasterCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_GET_MASTERCARDIDS_OFFSET))(this);
	}

	::System::Void set_MasterCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_SET_MASTERCARDIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ServantCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_GET_SERVANTCARDIDS_OFFSET))(this);
	}

	::System::Void set_ServantCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_SET_SERVANTCARDIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_NeutralCardIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_GET_NEUTRALCARDIDS_OFFSET))(this);
	}

	::System::Void set_NeutralCardIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_SET_NEUTRALCARDIDS_OFFSET))(this, a1);
	}

	static ::Class_1_F15DE20134ACD401* Method_1_A893986B31156888(::Class_1_B6441625E3D7D3E0* a1)
	{
		return ((::Class_1_F15DE20134ACD401*(*)(::Class_1_B6441625E3D7D3E0*))((::PBYTE)hIl2Cpp + CLASS_1_F15DE20134ACD401_METHOD_1_A893986B31156888_OFFSET))(a1);
	}
};
