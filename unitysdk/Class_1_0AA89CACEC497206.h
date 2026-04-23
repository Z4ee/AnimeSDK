#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/System/Object.h"

class Class_1_E7DB216A3FFF6C29_1;
class Class_1_FBDFBC4C2F16CDD1;
class Class_1_FF03248024BAA97A;
namespace RPG::Client { class FightPlayer; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0AA89CACEC497206_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x11D775E0)
#define CLASS_1_0AA89CACEC497206_GET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0x11D77620)
#define CLASS_1_0AA89CACEC497206_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x11D77600)
#define CLASS_1_0AA89CACEC497206_METHOD_1_A8B6BB090C66FB0F_OFFSET UNITYSDK_OFFSET(0x11D77B60)
#define CLASS_1_0AA89CACEC497206_METHOD_1_AA5BAF18E4B9F992_OFFSET UNITYSDK_OFFSET(0x11D77CD0)
#define CLASS_1_0AA89CACEC497206_METHOD_1_C9B5A277CDF0DAF2_OFFSET UNITYSDK_OFFSET(0x11D77640)
#define CLASS_1_0AA89CACEC497206_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11D77DB0)
#define CLASS_1_0AA89CACEC497206_METHOD_1_D9BE4F2CF1EDD883_OFFSET UNITYSDK_OFFSET(0x11D77760)
#define CLASS_1_0AA89CACEC497206_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11D77B10)
#define CLASS_1_0AA89CACEC497206_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x11D775F0)
#define CLASS_1_0AA89CACEC497206_SET_ROOMEXTINFO_OFFSET UNITYSDK_OFFSET(0x11D77630)
#define CLASS_1_0AA89CACEC497206_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x11D77610)
#define CLASS_1_0AA89CACEC497206__CTOR_OFFSET UNITYSDK_OFFSET(0x11D77710)

inline static constexpr unsigned int Class_1_0AA89CACEC497206_TypeDefinitionIndex = 63930;

class Class_1_0AA89CACEC497206 : public ::System::Object
{
public:
	::Class_1_E7DB216A3FFF6C29_1* _RoomExtInfo_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::FightPlayer*>* Field_1_3; // 0x18
	::System::UInt64 _RoomID_k__BackingField; // 0x20
	::Enum_3_A35B38E5F9115A76_2 _GameMode_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206__CTOR_OFFSET))(this);
	}

	::Enum_3_A35B38E5F9115A76_2 get_GameMode()
	{
		return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_GET_GAMEMODE_OFFSET))(this);
	}

	::System::Void set_GameMode(::Enum_3_A35B38E5F9115A76_2 value)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_SET_GAMEMODE_OFFSET))(this, value);
	}

	::System::UInt64 get_RoomID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_GET_ROOMID_OFFSET))(this);
	}

	::System::Void set_RoomID(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_SET_ROOMID_OFFSET))(this, value);
	}

	::Class_1_E7DB216A3FFF6C29_1* get_RoomExtInfo()
	{
		return ((::Class_1_E7DB216A3FFF6C29_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_GET_ROOMEXTINFO_OFFSET))(this);
	}

	::System::Void set_RoomExtInfo(::Class_1_E7DB216A3FFF6C29_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_SET_ROOMEXTINFO_OFFSET))(this, value);
	}

	static ::Class_1_0AA89CACEC497206* Method_1_C9B5A277CDF0DAF2(::Class_1_FBDFBC4C2F16CDD1* a1)
	{
		return ((::Class_1_0AA89CACEC497206*(*)(::Class_1_FBDFBC4C2F16CDD1*))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_C9B5A277CDF0DAF2_OFFSET))(a1);
	}

	::System::Void Method_1_D9BE4F2CF1EDD883(::System::Collections::Generic::IList_1<::Class_1_FF03248024BAA97A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FF03248024BAA97A*>*))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_D9BE4F2CF1EDD883_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_E7DB216A3FFF6C29_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_A8B6BB090C66FB0F()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_A8B6BB090C66FB0F_OFFSET))(this);
	}

	::RPG::Client::FightPlayer* Method_1_AA5BAF18E4B9F992(::System::UInt32 a1)
	{
		return ((::RPG::Client::FightPlayer*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_AA5BAF18E4B9F992_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
