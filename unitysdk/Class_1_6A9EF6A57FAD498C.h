#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/System/Object.h"

class Class_1_1DD6AC150642D284_1;
class Class_1_C50F5982E5600913;
class Class_1_FBDFBC4C2F16CDD1;
namespace RPG::Client { class FightPlayer; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A9EF6A57FAD498C_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC307F00)
#define CLASS_1_6A9EF6A57FAD498C_GET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xC307F40)
#define CLASS_1_6A9EF6A57FAD498C_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC307F20)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_2A60EB9704FFF426_OFFSET UNITYSDK_OFFSET(0xC308660)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_AEDF89B29D98ADF1_OFFSET UNITYSDK_OFFSET(0xC308080)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_B5536DD706514139_OFFSET UNITYSDK_OFFSET(0xC308800)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_C9B5A277CDF0DAF2_OFFSET UNITYSDK_OFFSET(0xC307F60)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC308900)
#define CLASS_1_6A9EF6A57FAD498C_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xC308610)
#define CLASS_1_6A9EF6A57FAD498C_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC307F10)
#define CLASS_1_6A9EF6A57FAD498C_SET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0xC307F50)
#define CLASS_1_6A9EF6A57FAD498C_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xC307F30)
#define CLASS_1_6A9EF6A57FAD498C__CTOR_OFFSET UNITYSDK_OFFSET(0xC308030)

inline static constexpr unsigned int Class_1_6A9EF6A57FAD498C_TypeDefinitionIndex = 69360;

class Class_1_6A9EF6A57FAD498C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::FightPlayer*>* EHGLKFLLBPD; // 0x10
	::Class_1_1DD6AC150642D284_1* _RoomExtInfo_k__BackingField; // 0x18
	::Enum_3_0F1B992870941C13_1 _GameMode_k__BackingField; // 0x20
	::System::UInt64 _RoomID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C__CTOR_OFFSET))(this);
	}

	::Enum_3_0F1B992870941C13_1 get_GameMode()
	{
		return ((::Enum_3_0F1B992870941C13_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_GET_GAMEMODE_OFFSET))(this);
	}

	::System::Void set_GameMode(::Enum_3_0F1B992870941C13_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_SET_GAMEMODE_OFFSET))(this, a1);
	}

	::System::UInt64 get_RoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_GET_ROOMID_OFFSET))(this);
	}

	::System::Void set_RoomID(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_SET_ROOMID_OFFSET))(this, a1);
	}

	::Class_1_1DD6AC150642D284_1* get_RoomExtInfo()
	{
		return ((::Class_1_1DD6AC150642D284_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_GET_ROOMEXTINFO_OFFSET))(this);
	}

	::System::Void set_RoomExtInfo(::Class_1_1DD6AC150642D284_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284_1*))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_SET_ROOMEXTINFO_OFFSET))(this, a1);
	}

	static ::Class_1_6A9EF6A57FAD498C* Method_1_C9B5A277CDF0DAF2(::Class_1_FBDFBC4C2F16CDD1* a1)
	{
		return ((::Class_1_6A9EF6A57FAD498C*(*)(::Class_1_FBDFBC4C2F16CDD1*))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_C9B5A277CDF0DAF2_OFFSET))(a1);
	}

	::System::Void Method_1_AEDF89B29D98ADF1(::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_AEDF89B29D98ADF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1DD6AC150642D284_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1DD6AC150642D284_1*))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_2A60EB9704FFF426()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_2A60EB9704FFF426_OFFSET))(this);
	}

	::RPG::Client::FightPlayer* Method_1_B5536DD706514139(::System::UInt32 a1)
	{
		return ((::RPG::Client::FightPlayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_B5536DD706514139_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
