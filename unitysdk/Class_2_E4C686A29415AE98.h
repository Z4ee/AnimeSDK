#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_5;
namespace RPG::Client { class GridFightBonusResultData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_E4C686A29415AE98_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x13D1B1E0)
#define CLASS_2_E4C686A29415AE98_METHOD_2_4EAC90433F8D078E_OFFSET UNITYSDK_OFFSET(0x13D1B690)
#define CLASS_2_E4C686A29415AE98_METHOD_2_A1D868D08A5B8F47_OFFSET UNITYSDK_OFFSET(0x13D1B9F0)
#define CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13D1B8D0)
#define CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x13D1B740)
#define CLASS_2_E4C686A29415AE98_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13D1B230)
#define CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x13D1B7F0)
#define CLASS_2_E4C686A29415AE98__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1B920)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x13D1B930)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x13D1BA50)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x13D1B990)
#define CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x13D1BAB0)

inline static constexpr unsigned int Class_2_E4C686A29415AE98_TypeDefinitionIndex = 60724;

class Class_2_E4C686A29415AE98 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightEquipItemData* Field_2_0; // 0x10
	::RPG::Client::GridFightBonusResultData* Field_2_1; // 0x18
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

	::System::Void Method_2_4EAC90433F8D078E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_4EAC90433F8D078E_OFFSET))(this, a1);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_UPDATEDONE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1D868D08A5B8F47(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98_METHOD_2_A1D868D08A5B8F47_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateDone()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4C686A29415AE98___IFIXBASEPROXY_UPDATEDONE_OFFSET))(this);
	}
};
