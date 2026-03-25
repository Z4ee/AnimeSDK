#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/Struct_2_F58FBBBFAD28B36A.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_951;
class Class_1_A95E67A566D40246;
class Class_1_BE0E97EFC15B9DBB;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_688DEC7029634CD2_GET_AGENT_OFFSET UNITYSDK_OFFSET(0x8BA2470)
#define CLASS_1_688DEC7029634CD2_GET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0x8BA2450)
#define CLASS_1_688DEC7029634CD2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8BA24A0)
#define CLASS_1_688DEC7029634CD2_GET_ID_OFFSET UNITYSDK_OFFSET(0x8BA2410)
#define CLASS_1_688DEC7029634CD2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x8BA24C0)
#define CLASS_1_688DEC7029634CD2_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8BA2430)
#define CLASS_1_688DEC7029634CD2_METHOD_1_09B2392180F5188E_OFFSET UNITYSDK_OFFSET(0x8BA24F0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_0F29DB2C983A3B9B_OFFSET UNITYSDK_OFFSET(0x8BA2BC0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x8BA2F70)
#define CLASS_1_688DEC7029634CD2_METHOD_1_37A06FA845920D33_OFFSET UNITYSDK_OFFSET(0x8BA2420)
#define CLASS_1_688DEC7029634CD2_METHOD_1_4B1BE3FE00B6A945_OFFSET UNITYSDK_OFFSET(0x8BA24E0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_8A3EB355C470E8A9_OFFSET UNITYSDK_OFFSET(0x8BA2C80)
#define CLASS_1_688DEC7029634CD2_METHOD_1_BCC9FB53FB64B99F_OFFSET UNITYSDK_OFFSET(0x8BA2DE0)
#define CLASS_1_688DEC7029634CD2_METHOD_1_BD3B5A99ADAD6E94_OFFSET UNITYSDK_OFFSET(0x8BA2980)
#define CLASS_1_688DEC7029634CD2_METHOD_1_C48F4E649FDE1158_OFFSET UNITYSDK_OFFSET(0x8BA2820)
#define CLASS_1_688DEC7029634CD2_METHOD_1_ECB347824F83DB8C_OFFSET UNITYSDK_OFFSET(0x8BA2A10)
#define CLASS_1_688DEC7029634CD2_METHOD_1_F1565C734BC7F2C2_OFFSET UNITYSDK_OFFSET(0x8BA2640)
#define CLASS_1_688DEC7029634CD2_SET_AGENT_OFFSET UNITYSDK_OFFSET(0x8BA2490)
#define CLASS_1_688DEC7029634CD2_SET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0x8BA2460)
#define CLASS_1_688DEC7029634CD2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8BA24B0)
#define CLASS_1_688DEC7029634CD2_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x8BA24D0)
#define CLASS_1_688DEC7029634CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA2AD0)

inline static constexpr unsigned int Class_1_688DEC7029634CD2_TypeDefinitionIndex = 61332;

class Class_1_688DEC7029634CD2 : public ::System::Object
{
public:
	::Class_1_BE0E97EFC15B9DBB* Field_1_0; // 0x10
	::System::String* _ConnectPointKey_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_951*>* Field_1_7; // 0x20
	::System::UInt32 _ID_k__BackingField; // 0x28
	::Struct_2_F58FBBBFAD28B36A _Agent_k__BackingField; // 0x2C
	::System::UInt32 _InstanceID_k__BackingField; // 0x38
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x3C
	::System::UInt32 _GroupID_k__BackingField; // 0x48

	::System::Void _ctor(::Class_1_BE0E97EFC15B9DBB* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE0E97EFC15B9DBB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void set_ConnectPointKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_CONNECTPOINTKEY_OFFSET))(this, value);
	}

	::Struct_2_F58FBBBFAD28B36A get_Agent()
	{
		return ((::Struct_2_F58FBBBFAD28B36A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_AGENT_OFFSET))(this);
	}

	::System::Void set_Agent(::Struct_2_F58FBBBFAD28B36A value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F58FBBBFAD28B36A))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_AGENT_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_SET_INSTANCEID_OFFSET))(this, value);
	}

	::RPG::Client::NavMap::NavSpaceType Method_1_4B1BE3FE00B6A945()
	{
		return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_4B1BE3FE00B6A945_OFFSET))(this);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_09B2392180F5188E(::Class_1_BE0E97EFC15B9DBB* a1, ::System::String* a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_BE0E97EFC15B9DBB*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_09B2392180F5188E_OFFSET))(a1, a2);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_BD3B5A99ADAD6E94(::Class_1_BE0E97EFC15B9DBB* a1, ::Class_1_A95E67A566D40246* a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_BE0E97EFC15B9DBB*, ::Class_1_A95E67A566D40246*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_BD3B5A99ADAD6E94_OFFSET))(a1, a2);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_ECB347824F83DB8C(::Class_1_BE0E97EFC15B9DBB* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_BE0E97EFC15B9DBB*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_ECB347824F83DB8C_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_688DEC7029634CD2* Method_1_C48F4E649FDE1158(::Class_1_BE0E97EFC15B9DBB* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::Class_1_688DEC7029634CD2*(*)(::Class_1_BE0E97EFC15B9DBB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_C48F4E649FDE1158_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F1565C734BC7F2C2(::RPG::Client::NavMap::IMapDataSource* a1, ::System::String* a2, ::Struct_2_F58FBBBFAD28B36A& a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::String*, ::Struct_2_F58FBBBFAD28B36A&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_F1565C734BC7F2C2_OFFSET))(a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_951* Method_1_0F29DB2C983A3B9B(::System::UInt32 a1)
	{
		return ((::Class_0_16E4307DCC419505_951*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_0F29DB2C983A3B9B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8A3EB355C470E8A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_8A3EB355C470E8A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCC9FB53FB64B99F(::System::UInt32 a1, ::Class_0_16E4307DCC419505_951* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_0_16E4307DCC419505_951*))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_BCC9FB53FB64B99F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_688DEC7029634CD2_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}
};
