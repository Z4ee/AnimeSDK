#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_4_GET_CARID_OFFSET UNITYSDK_OFFSET(0xB9EC980)
#define CLASS_1_115297B50AB60A5D_4_GET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB9EC9E0)
#define CLASS_1_115297B50AB60A5D_4_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0xB9EC9A0)
#define CLASS_1_115297B50AB60A5D_4_GET_PAINTID_OFFSET UNITYSDK_OFFSET(0xB9EC9C0)
#define CLASS_1_115297B50AB60A5D_4_SET_CARID_OFFSET UNITYSDK_OFFSET(0xB9EC990)
#define CLASS_1_115297B50AB60A5D_4_SET_EQUIPPEDPARTIDS_OFFSET UNITYSDK_OFFSET(0xB9EC9F0)
#define CLASS_1_115297B50AB60A5D_4_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0xB9EC9B0)
#define CLASS_1_115297B50AB60A5D_4_SET_PAINTID_OFFSET UNITYSDK_OFFSET(0xB9EC9D0)
#define CLASS_1_115297B50AB60A5D_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB9ECA00)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_4_TypeDefinitionIndex = 80375;

class Class_1_115297B50AB60A5D_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _EquippedPartIDs_k__BackingField; // 0x10
	::System::UInt32 _Number_k__BackingField; // 0x18
	::System::UInt32 _PaintID_k__BackingField; // 0x1C
	::System::UInt32 _CarID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_GET_CARID_OFFSET))(this);
	}

	::System::Void set_CarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_SET_CARID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Number()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_GET_NUMBER_OFFSET))(this);
	}

	::System::Void set_Number(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_SET_NUMBER_OFFSET))(this, a1);
	}

	::System::UInt32 get_PaintID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_GET_PAINTID_OFFSET))(this);
	}

	::System::Void set_PaintID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_SET_PAINTID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_EquippedPartIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_GET_EQUIPPEDPARTIDS_OFFSET))(this);
	}

	::System::Void set_EquippedPartIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_4_SET_EQUIPPEDPARTIDS_OFFSET))(this, a1);
	}
};
