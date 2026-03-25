#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37995CCC23FA9499.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3B2317963B954332_CLEAR_OFFSET UNITYSDK_OFFSET(0x8808F80)
#define CLASS_2_3B2317963B954332_METHOD_2_06348FA2C6D5DDFA_OFFSET UNITYSDK_OFFSET(0x8809E70)
#define CLASS_2_3B2317963B954332_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x8809090)
#define CLASS_2_3B2317963B954332_METHOD_2_418B038717020A3A_OFFSET UNITYSDK_OFFSET(0x88094A0)
#define CLASS_2_3B2317963B954332_METHOD_2_7EB86DC3DC87380E_OFFSET UNITYSDK_OFFSET(0x88095D0)
#define CLASS_2_3B2317963B954332_METHOD_2_91E494702D0E36A9_OFFSET UNITYSDK_OFFSET(0x88099F0)
#define CLASS_2_3B2317963B954332_METHOD_2_985C40CE2D40CCAB_OFFSET UNITYSDK_OFFSET(0x880A370)
#define CLASS_2_3B2317963B954332_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x880A2B0)
#define CLASS_2_3B2317963B954332__CTOR_OFFSET UNITYSDK_OFFSET(0x880A2F0)
#define CLASS_2_3B2317963B954332___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x880A300)

inline static constexpr unsigned int Class_2_3B2317963B954332_TypeDefinitionIndex = 62573;

class Class_2_3B2317963B954332 : public ::Class_1_37995CCC23FA9499
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3B2317963B954332_TypeDefinitionIndex)->GetStaticField(0x12F50);
	}
	::RPG::PoolDictionary_2<::System::Int32, ::System::String*>* Field_2_5; // 0x20
	::RPG::PoolHashSet_1<::System::UInt32>* Field_2_4; // 0x28
	::System::Boolean Field_2_0; // 0x30
	::Struct_2_EAC1BB0F093534A5 Field_2_1; // 0x34
	::System::UInt32 Field_2_2; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_418B038717020A3A(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_418B038717020A3A_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_7EB86DC3DC87380E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_7EB86DC3DC87380E_OFFSET))(this);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_06348FA2C6D5DDFA(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_06348FA2C6D5DDFA_OFFSET))(this, a1);
	}

	::System::Void Method_2_91E494702D0E36A9(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_91E494702D0E36A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_985C40CE2D40CCAB(::Class_2_9DD8A46984F1AFFD* P0, ::Class_3_1A92845FAFA5EC77* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_3B2317963B954332_METHOD_2_985C40CE2D40CCAB_OFFSET))(this, P0, P1);
	}
};
