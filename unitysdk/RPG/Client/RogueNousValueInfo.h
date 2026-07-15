#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_5;

#define RPG_CLIENT_ROGUENOUSVALUEINFO_CLEARINLEVELDATA_OFFSET UNITYSDK_OFFSET(0x1982D0A0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1982D0F0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GETAREALIMIT_OFFSET UNITYSDK_OFFSET(0x1982D1E0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_CURNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D280)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMAXNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2E0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMINNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2C0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_GET_LASTNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2A0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1982CEF0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_CURNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D290)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMAXNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2F0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMINNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2D0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SET_LASTNOUSVALUE_OFFSET UNITYSDK_OFFSET(0x1982D2B0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1982D170)
#define RPG_CLIENT_ROGUENOUSVALUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1982CEE0)
#define RPG_CLIENT_ROGUENOUSVALUEINFO__INITCONSTVALUES_OFFSET UNITYSDK_OFFSET(0x1982CF60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousValueInfo_TypeDefinitionIndex = 64491;

	class RogueNousValueInfo : public ::System::Object
	{
	public:
		::System::Int32 _CurNousValue_k__BackingField; // 0x10
		::System::Int32 _GlobMaxNousValue_k__BackingField; // 0x14
		::System::Int32 _GlobMinNousValue_k__BackingField; // 0x18
		::System::Int32 _LastNousValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearInLevelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_CLEARINLEVELDATA_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_EA5A5E4D07C4CF2B_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void GetAreaLimit(::System::UInt32 a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GETAREALIMIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InitConstValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO__INITCONSTVALUES_OFFSET))(this);
		}

		::System::Int32 get_CurNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_CURNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_CurNousValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_CURNOUSVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_LastNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_LASTNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_LastNousValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_LASTNOUSVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_GlobMinNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMINNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_GlobMinNousValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMINNOUSVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_GlobMaxNousValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_GET_GLOBMAXNOUSVALUE_OFFSET))(this);
		}

		::System::Void set_GlobMaxNousValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSVALUEINFO_SET_GLOBMAXNOUSVALUE_OFFSET))(this, a1);
		}
	};
}
