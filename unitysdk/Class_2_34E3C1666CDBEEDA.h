#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace RPG::Client { class GridFightPlayerChangeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_34E3C1666CDBEEDA_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x12B48540)
#define CLASS_2_34E3C1666CDBEEDA_METHOD_2_39403F1F919F447A_OFFSET UNITYSDK_OFFSET(0x12B48DC0)
#define CLASS_2_34E3C1666CDBEEDA_METHOD_2_600F21A3B717E2D0_OFFSET UNITYSDK_OFFSET(0x12B48650)
#define CLASS_2_34E3C1666CDBEEDA_METHOD_2_B38DD5E8D6679D46_OFFSET UNITYSDK_OFFSET(0x12B48470)
#define CLASS_2_34E3C1666CDBEEDA_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x12B485A0)
#define CLASS_2_34E3C1666CDBEEDA_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x12B48770)
#define CLASS_2_34E3C1666CDBEEDA_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x12B488E0)
#define CLASS_2_34E3C1666CDBEEDA_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x12B48B70)
#define CLASS_2_34E3C1666CDBEEDA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B48CD0)
#define CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x12B48CE0)
#define CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x12B48D50)
#define CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x12B48E30)
#define CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x12B48EA0)
#define CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x12B48F10)

inline static constexpr unsigned int Class_2_34E3C1666CDBEEDA_TypeDefinitionIndex = 59911;

class Class_2_34E3C1666CDBEEDA : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightPlayerChangeData* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_B38DD5E8D6679D46(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_METHOD_2_B38DD5E8D6679D46_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_600F21A3B717E2D0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_METHOD_2_600F21A3B717E2D0_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_UPDATEMAXROLENUM_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_39403F1F919F447A(::System::UInt32 P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA_METHOD_2_39403F1F919F447A_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateLevelAndExp(::System::UInt32 P0, ::System::UInt32 P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATELEVELANDEXP_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateMaxRoleNum(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_34E3C1666CDBEEDA___IFIXBASEPROXY_UPDATEMAXROLENUM_OFFSET))(this, P0);
	}
};
