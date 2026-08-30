#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_33CFB36424333436_GET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x15BA6850)
#define CLASS_1_33CFB36424333436_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15BA6870)
#define CLASS_1_33CFB36424333436_SET_AVATARIDS_OFFSET UNITYSDK_OFFSET(0x15BA6860)
#define CLASS_1_33CFB36424333436_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15BA6880)
#define CLASS_1_33CFB36424333436__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6890)

inline static constexpr unsigned int Class_1_33CFB36424333436_TypeDefinitionIndex = 68242;

class Class_1_33CFB36424333436 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDs_k__BackingField; // 0x10
	::System::Int64 _ExpireTime_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_33CFB36424333436__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CFB36424333436_GET_AVATARIDS_OFFSET))(this);
	}

	::System::Void set_AvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_33CFB36424333436_SET_AVATARIDS_OFFSET))(this, a1);
	}

	::System::Int64 get_ExpireTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33CFB36424333436_GET_EXPIRETIME_OFFSET))(this);
	}

	::System::Void set_ExpireTime(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_33CFB36424333436_SET_EXPIRETIME_OFFSET))(this, a1);
	}
};
