#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"
#include "unitysdk/RPG/Client/GridFightRoleChangeType.h"

class Class_1_B1FF62FAE312BC49_5;
class Class_2_7863085D9949E875_Class_3_6340F8F348E84260;
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7863085D9949E875_METHOD_2_353896F556C1593D_OFFSET UNITYSDK_OFFSET(0x13B1BF60)
#define CLASS_2_7863085D9949E875_METHOD_2_846FB62C6EE72A8A_OFFSET UNITYSDK_OFFSET(0x13B1BC70)
#define CLASS_2_7863085D9949E875_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x13B1C1B0)
#define CLASS_2_7863085D9949E875_METHOD_2_B4BFAA75B7B94C85_OFFSET UNITYSDK_OFFSET(0x13B1BAF0)
#define CLASS_2_7863085D9949E875_METHOD_2_CFCEA107D822E3B3_OFFSET UNITYSDK_OFFSET(0x13B1B6C0)
#define CLASS_2_7863085D9949E875_METHOD_2_FC279EE69113F51F_OFFSET UNITYSDK_OFFSET(0x13B1BE10)
#define CLASS_2_7863085D9949E875_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x13B1B670)
#define CLASS_2_7863085D9949E875__CTOR_OFFSET UNITYSDK_OFFSET(0x13B1B4C0)
#define CLASS_2_7863085D9949E875___IFIXBASEPROXY_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x13B1C150)

inline static constexpr unsigned int Class_2_7863085D9949E875_TypeDefinitionIndex = 60960;

class Class_2_7863085D9949E875 : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Collections::Generic::List_1<::Class_2_7863085D9949E875_Class_3_6340F8F348E84260*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875__CTOR_OFFSET))(this);
	}

	::System::Void UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFCEA107D822E3B3(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_CFCEA107D822E3B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B4BFAA75B7B94C85(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_B4BFAA75B7B94C85_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::GridFightRole* Method_2_846FB62C6EE72A8A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4, ::System::UInt32 a5)
	{
		return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_846FB62C6EE72A8A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_FC279EE69113F51F(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_FC279EE69113F51F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_353896F556C1593D(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::GridFightRoleChangeType& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::GridFightRoleChangeType&))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_353896F556C1593D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_UpdateAddRole(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875___IFIXBASEPROXY_UPDATEADDROLE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_B1FF62FAE312BC49_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B1FF62FAE312BC49_5*))((::PBYTE)hIl2Cpp + CLASS_2_7863085D9949E875_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}
};
