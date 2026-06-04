#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

namespace RPG::Client { class GridFightPlayerChangeData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_24A342C260E0D0D3_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x13697F90)
#define CLASS_2_24A342C260E0D0D3_METHOD_2_5AD7EA9F1126DF19_OFFSET UNITYSDK_OFFSET(0x136980A0)
#define CLASS_2_24A342C260E0D0D3_METHOD_2_B38DD5E8D6679D46_OFFSET UNITYSDK_OFFSET(0x13697EC0)
#define CLASS_2_24A342C260E0D0D3_METHOD_2_BE18C04CD91E0748_OFFSET UNITYSDK_OFFSET(0x136987D0)
#define CLASS_2_24A342C260E0D0D3_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13697FF0)
#define CLASS_2_24A342C260E0D0D3_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x136981C0)
#define CLASS_2_24A342C260E0D0D3_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x13698330)
#define CLASS_2_24A342C260E0D0D3_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x136985C0)
#define CLASS_2_24A342C260E0D0D3__CTOR_OFFSET UNITYSDK_OFFSET(0x13698720)
#define CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x13698730)
#define CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13698780)
#define CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATECOIN_OFFSET UNITYSDK_OFFSET(0x13698820)
#define CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATELEVELANDEXP_OFFSET UNITYSDK_OFFSET(0x13698870)
#define CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATEMAXROLENUM_OFFSET UNITYSDK_OFFSET(0x136988C0)

inline static constexpr unsigned int Class_2_24A342C260E0D0D3_TypeDefinitionIndex = 60846;

class Class_2_24A342C260E0D0D3 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightPlayerChangeData* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_2_B38DD5E8D6679D46(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_METHOD_2_B38DD5E8D6679D46_OFFSET))(this, a1, a2);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5AD7EA9F1126DF19(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_METHOD_2_5AD7EA9F1126DF19_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateMaxRoleNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_UPDATEMAXROLENUM_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BE18C04CD91E0748(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3_METHOD_2_BE18C04CD91E0748_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateCoin(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATECOIN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateLevelAndExp(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATELEVELANDEXP_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_UpdateMaxRoleNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_24A342C260E0D0D3___IFIXBASEPROXY_UPDATEMAXROLENUM_OFFSET))(this, a1);
	}
};
