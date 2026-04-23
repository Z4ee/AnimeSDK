#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_B1FF62FAE312BC49_4;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_4B114749C53358D1_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x124B3680)
#define CLASS_2_4B114749C53358D1_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x124B3BD0)
#define CLASS_2_4B114749C53358D1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124B3C30)
#define CLASS_2_4B114749C53358D1_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x124B39D0)
#define CLASS_2_4B114749C53358D1_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x124B3A60)
#define CLASS_2_4B114749C53358D1_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x124B36D0)
#define CLASS_2_4B114749C53358D1__CTOR_OFFSET UNITYSDK_OFFSET(0x124B3C80)
#define CLASS_2_4B114749C53358D1___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x124B3C90)
#define CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x124B3D70)
#define CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x124B3DE0)
#define CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x124B3D00)

inline static constexpr unsigned int Class_2_4B114749C53358D1_TypeDefinitionIndex = 60008;

class Class_2_4B114749C53358D1 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::RPG::Client::GridFightRole* Field_2_0; // 0x10
	::RPG::Client::GridFightRole* Field_2_1; // 0x18
	::System::UInt32 Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_4* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_4*))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_4B114749C53358D1___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
