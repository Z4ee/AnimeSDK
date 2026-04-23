#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_4;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E4C686A29415AE98_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1186F300)
#define CLASS_2_E4C686A29415AE98_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0x1186FAE0)
#define CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1186F9A0)
#define CLASS_2_E4C686A29415AE98_METHOD_2_FE036F51CDA6E1ED_OFFSET UNITYSDK_OFFSET(0x1186F730)
#define CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1186F810)
#define CLASS_2_E4C686A29415AE98_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1186F350)
#define CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1186F8C0)
#define CLASS_2_E4C686A29415AE98__CTOR_OFFSET UNITYSDK_OFFSET(0x1186F9F0)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1186FA00)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x1186FB50)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1186FA70)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1186FBC0)

inline static constexpr unsigned int Class_2_E4C686A29415AE98_TypeDefinitionIndex = 59789;

class Class_2_E4C686A29415AE98 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightEquipItemData* Field_2_1; // 0x10
	::RPG::Client::GridFightBonusResultData* Field_2_0; // 0x18
	::RPG::Client::GridFightRole* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE036F51CDA6E1ED(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_FE036F51CDA6E1ED_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
	}
};
