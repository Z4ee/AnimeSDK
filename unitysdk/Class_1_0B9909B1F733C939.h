#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7F6A638FBAAEC90B_13;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B9909B1F733C939_GET_AVATARDAMAGEMAP_OFFSET UNITYSDK_OFFSET(0x18FCFF10)
#define CLASS_1_0B9909B1F733C939_GET_DEADAVATARIDS_OFFSET UNITYSDK_OFFSET(0x18FCFF00)
#define CLASS_1_0B9909B1F733C939_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x18FCFEE0)
#define CLASS_1_0B9909B1F733C939_METHOD_1_2899F90221CA674A_OFFSET UNITYSDK_OFFSET(0x18FD0800)
#define CLASS_1_0B9909B1F733C939_METHOD_1_6AB0047A1E525732_OFFSET UNITYSDK_OFFSET(0x18FCFF20)
#define CLASS_1_0B9909B1F733C939_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x18FCFEF0)
#define CLASS_1_0B9909B1F733C939__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD0BB0)

inline static constexpr unsigned int Class_1_0B9909B1F733C939_TypeDefinitionIndex = 63914;

class Class_1_0B9909B1F733C939 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* _AvatarDamageMap_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* _DeadAvatarIDs_k__BackingField; // 0x18
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
