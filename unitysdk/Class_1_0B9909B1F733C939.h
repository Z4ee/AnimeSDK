#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B9909B1F733C939_GET_AVATARDAMAGEMAP_OFFSET UNITYSDK_OFFSET(0xB6D17D0)
#define CLASS_1_0B9909B1F733C939_GET_DEADAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB6D17C0)
#define CLASS_1_0B9909B1F733C939_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB6D17A0)
#define CLASS_1_0B9909B1F733C939_METHOD_1_2899F90221CA674A_OFFSET UNITYSDK_OFFSET(0xB6D20C0)
#define CLASS_1_0B9909B1F733C939_METHOD_1_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0xB6D17E0)
#define CLASS_1_0B9909B1F733C939_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xB6D17B0)
#define CLASS_1_0B9909B1F733C939__CTOR_OFFSET UNITYSDK_OFFSET(0xB6D2470)

inline static constexpr unsigned int Class_1_0B9909B1F733C939_TypeDefinitionIndex = 63914;

class Class_1_0B9909B1F733C939 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _DeadAvatarIDs_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* _AvatarDamageMap_k__BackingField; // 0x18
	::System::UInt32 _LevelID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_LevelID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_GET_LEVELID_OFFSET))(this);
	}

	::System::Void set_LevelID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_SET_LEVELID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_DeadAvatarIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_GET_DEADAVATARIDS_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* get_AvatarDamageMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_GET_AVATARDAMAGEMAP_OFFSET))(this);
	}

	::System::Void Method_1_6AB0047A1E525732(::Class_1_7F6A638FBAAEC90B_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_13*))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_METHOD_1_6AB0047A1E525732_OFFSET))(this, a1);
	}

	::Class_1_0B9909B1F733C939* Method_1_2899F90221CA674A()
	{
		return ((::Class_1_0B9909B1F733C939*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B9909B1F733C939_METHOD_1_2899F90221CA674A_OFFSET))(this);
	}
};
