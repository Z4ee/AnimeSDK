#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_115297B50AB60A5D_5_GET_AVAILABLEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xFA62B90)
#define CLASS_1_115297B50AB60A5D_5_GET_CARID_OFFSET UNITYSDK_OFFSET(0xFA62B70)
#define CLASS_1_115297B50AB60A5D_5_SET_AVAILABLEPARTIDLIST_OFFSET UNITYSDK_OFFSET(0xFA62BA0)
#define CLASS_1_115297B50AB60A5D_5_SET_CARID_OFFSET UNITYSDK_OFFSET(0xFA62B80)
#define CLASS_1_115297B50AB60A5D_5__CTOR_OFFSET UNITYSDK_OFFSET(0xFA62BB0)

inline static constexpr unsigned int Class_1_115297B50AB60A5D_5_TypeDefinitionIndex = 80374;

class Class_1_115297B50AB60A5D_5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePartIDList_k__BackingField; // 0x10
	::System::UInt32 _CarID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_5__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_CarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_5_GET_CARID_OFFSET))(this);
	}

	::System::Void set_CarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_5_SET_CARID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvailablePartIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_5_GET_AVAILABLEPARTIDLIST_OFFSET))(this);
	}

	::System::Void set_AvailablePartIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_115297B50AB60A5D_5_SET_AVAILABLEPARTIDLIST_OFFSET))(this, a1);
	}
};
