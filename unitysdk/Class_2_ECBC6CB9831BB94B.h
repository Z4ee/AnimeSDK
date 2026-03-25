#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_7;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_ECBC6CB9831BB94B_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x87DB980)
#define CLASS_2_ECBC6CB9831BB94B_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x87DBD00)
#define CLASS_2_ECBC6CB9831BB94B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87DBD60)
#define CLASS_2_ECBC6CB9831BB94B_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x87DBB50)
#define CLASS_2_ECBC6CB9831BB94B_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x87DBBE0)
#define CLASS_2_ECBC6CB9831BB94B_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x87DB9D0)
#define CLASS_2_ECBC6CB9831BB94B__CTOR_OFFSET UNITYSDK_OFFSET(0x87DBDB0)
#define CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x87DBDC0)
#define CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x87DBEA0)
#define CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x87DBF10)
#define CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x87DBE30)

inline static constexpr unsigned int Class_2_ECBC6CB9831BB94B_TypeDefinitionIndex = 52929;

class Class_2_ECBC6CB9831BB94B : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x10
	::RPG::Client::GridFightRole* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_7* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_7*))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_ECBC6CB9831BB94B___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
