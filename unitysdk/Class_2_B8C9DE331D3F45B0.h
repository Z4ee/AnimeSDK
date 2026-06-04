#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37995CCC23FA9499.h"
#include "unitysdk/Class_2_B8C9DE331D3F45B0_Struct_2_6E17407C21482385.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimView; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B8C9DE331D3F45B0_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D7D30)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_124B10AFD32C616C_OFFSET UNITYSDK_OFFSET(0xA7D9040)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_2B85DC63E89AB50D_OFFSET UNITYSDK_OFFSET(0xA7D84B0)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_927D500D109F19E2_OFFSET UNITYSDK_OFFSET(0xA7D8210)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_9847798154D28F61_OFFSET UNITYSDK_OFFSET(0xA7D89A0)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_BE5FE8390DD64004_OFFSET UNITYSDK_OFFSET(0xA7D8810)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_C73972D70B679A3D_OFFSET UNITYSDK_OFFSET(0xA7D7E40)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_C9F8CBE073DB12CC_OFFSET UNITYSDK_OFFSET(0xA7D80A0)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA7D8F90)
#define CLASS_2_B8C9DE331D3F45B0_METHOD_2_EEE4B5A30EBF54E9_OFFSET UNITYSDK_OFFSET(0xA7D8A30)
#define CLASS_2_B8C9DE331D3F45B0__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D8FD0)
#define CLASS_2_B8C9DE331D3F45B0___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA7D8FE0)

inline static constexpr unsigned int Class_2_B8C9DE331D3F45B0_TypeDefinitionIndex = 71403;

class Class_2_B8C9DE331D3F45B0 : public ::Class_1_37995CCC23FA9499
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B8C9DE331D3F45B0_TypeDefinitionIndex)->GetStaticField(0x13680);
	}
	::RPG::PoolHashSet_1<::System::UInt32>* Field_2_1; // 0x20
	::RPG::PoolDictionary_2<::System::Int32, ::Class_2_B8C9DE331D3F45B0_Struct_2_6E17407C21482385>* Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34
	::Struct_2_EAC1BB0F093534A5 Field_2_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_C9F8CBE073DB12CC(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_C9F8CBE073DB12CC_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_927D500D109F19E2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_927D500D109F19E2_OFFSET))(this);
	}

	::System::Void Method_2_C73972D70B679A3D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_C73972D70B679A3D_OFFSET))(this);
	}

	::System::Void Method_2_9847798154D28F61(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_9847798154D28F61_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BE5FE8390DD64004(::System::UInt32 a1, ::RPG::Client::LittleGame::FiveDim::FiveDimView*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::FiveDim::FiveDimView*&))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_BE5FE8390DD64004_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_EEE4B5A30EBF54E9(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_EEE4B5A30EBF54E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B85DC63E89AB50D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_2B85DC63E89AB50D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_124B10AFD32C616C(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_2_B8C9DE331D3F45B0_METHOD_2_124B10AFD32C616C_OFFSET))(this, a1, a2);
	}
};
