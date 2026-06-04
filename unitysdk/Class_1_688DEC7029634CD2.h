#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/Struct_2_F58FBBBFAD28B36A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1118;
class Class_1_4BC03BAAC61C4531;
class Class_1_A0E178FC9445316D_1;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_688DEC7029634CD2_GET_AGENT_OFFSET UNITYSDK_OFFSET(0xA8FB7E0)
#define CLASS_1_688DEC7029634CD2_GET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0xA8FB7C0)
#define CLASS_1_688DEC7029634CD2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA8FB810)
#define CLASS_1_688DEC7029634CD2_GET_ID_OFFSET UNITYSDK_OFFSET(0xA8FB780)
#define CLASS_1_688DEC7029634CD2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA8FB830)
#define CLASS_1_688DEC7029634CD2_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA8FB7A0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_09B2392180F5188E_OFFSET UNITYSDK_OFFSET(0xA8FB860)
#define CLASS_1_688DEC7029634CD2_METHOD_1_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0xA8FBFC0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_37A06FA845920D33_OFFSET UNITYSDK_OFFSET(0xA8FB790)
#define CLASS_1_688DEC7029634CD2_METHOD_1_465E1A882592F1A4_OFFSET UNITYSDK_OFFSET(0xA8FBF30)
#define CLASS_1_688DEC7029634CD2_METHOD_1_4B1BE3FE00B6A945_OFFSET UNITYSDK_OFFSET(0xA8FB850)
#define CLASS_1_688DEC7029634CD2_METHOD_1_839EE942BB9B3961_OFFSET UNITYSDK_OFFSET(0xA8FC0E0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xA8FC230)
#define CLASS_1_688DEC7029634CD2_METHOD_1_BD3B5A99ADAD6E94_OFFSET UNITYSDK_OFFSET(0xA8FBCF0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_C48F4E649FDE1158_OFFSET UNITYSDK_OFFSET(0xA8FBB90)
#define CLASS_1_688DEC7029634CD2_METHOD_1_ECB347824F83DB8C_OFFSET UNITYSDK_OFFSET(0xA8FBD80)
#define CLASS_1_688DEC7029634CD2_METHOD_1_F1565C734BC7F2C2_OFFSET UNITYSDK_OFFSET(0xA8FB9B0)
#define CLASS_1_688DEC7029634CD2_SET_AGENT_OFFSET UNITYSDK_OFFSET(0xA8FB800)
#define CLASS_1_688DEC7029634CD2_SET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0xA8FB7D0)
#define CLASS_1_688DEC7029634CD2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA8FB820)
#define CLASS_1_688DEC7029634CD2_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA8FB840)
#define CLASS_1_688DEC7029634CD2__CTOR_OFFSET UNITYSDK_OFFSET(0xA8FBE40)

inline static constexpr unsigned int Class_1_688DEC7029634CD2_TypeDefinitionIndex = 69651;

class Class_1_688DEC7029634CD2 : public ::System::Object
{
public:
	::Class_1_4BC03BAAC61C4531* Field_1_0; // 0x10
	::System::String* _ConnectPointKey_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_1118*>* Field_1_2; // 0x20
	::System::UInt32 _InstanceID_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x2C
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x30
	::Struct_2_F58FBBBFAD28B36A _Agent_k__BackingField; // 0x3C
	::System::UInt32 _GroupID_k__BackingField; // 0x48

	::System::Void _ctor(::Class_1_4BC03BAAC61C4531* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4BC03BAAC61C4531*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_ID_OFFSET))(this);
	}

	::RPG::Client::NavMap::NavVertexType Method_1_37A06FA845920D33()
	{
		return ((::RPG::Client::NavMap::NavVertexType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_37A06FA845920D33_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_POSITION_OFFSET))(this);
	}

	::System::String* get_ConnectPointKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_CONNECTPOINTKEY_OFFSET))(this);
	}

	::System::Void set_ConnectPointKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_CONNECTPOINTKEY_OFFSET))(this, a1);
	}

	::Struct_2_F58FBBBFAD28B36A get_Agent()
	{
		return ((::Struct_2_F58FBBBFAD28B36A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_AGENT_OFFSET))(this);
	}

	::System::Void set_Agent(::Struct_2_F58FBBBFAD28B36A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F58FBBBFAD28B36A))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_AGENT_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::RPG::Client::NavMap::NavSpaceType Method_1_4B1BE3FE00B6A945()
	{
		return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_4B1BE3FE00B6A945_OFFSET))(this);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_09B2392180F5188E(::Class_1_4BC03BAAC61C4531* a1, ::System::String* a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_4BC03BAAC61C4531*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_09B2392180F5188E_OFFSET))(a1, a2);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_BD3B5A99ADAD6E94(::Class_1_4BC03BAAC61C4531* a1, ::Class_1_A0E178FC9445316D_1* a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_4BC03BAAC61C4531*, ::Class_1_A0E178FC9445316D_1*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_BD3B5A99ADAD6E94_OFFSET))(a1, a2);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_ECB347824F83DB8C(::Class_1_4BC03BAAC61C4531* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_4BC03BAAC61C4531*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_ECB347824F83DB8C_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_C48F4E649FDE1158(::Class_1_4BC03BAAC61C4531* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_4BC03BAAC61C4531*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_C48F4E649FDE1158_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F1565C734BC7F2C2(::RPG::Client::NavMap::IMapDataSource* a1, ::System::String* a2, ::Struct_2_F58FBBBFAD28B36A& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::String*, ::Struct_2_F58FBBBFAD28B36A&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_F1565C734BC7F2C2_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_1118* Method_1_465E1A882592F1A4(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_1118*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_465E1A882592F1A4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_0EA837295AE4519F_OFFSET))(this, a1);
	}

	::System::Void Method_1_839EE942BB9B3961(::System::UInt32 a1, ::Class_0_16E4307DCC419505_1118* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_1118*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_839EE942BB9B3961_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}
};
