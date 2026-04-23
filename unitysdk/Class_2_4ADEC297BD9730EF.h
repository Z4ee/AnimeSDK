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

#define CLASS_2_4ADEC297BD9730EF_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A7A070)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x9A7A1B0)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_2B85DC63E89AB50D_OFFSET UNITYSDK_OFFSET(0x9A7AB40)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_5DFBFFF8A8E1FB43_OFFSET UNITYSDK_OFFSET(0x9A7AEB0)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_7EB86DC3DC87380E_OFFSET UNITYSDK_OFFSET(0x9A7A720)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_93EA496491A26F83_OFFSET UNITYSDK_OFFSET(0x9A7A5C0)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_985C40CE2D40CCAB_OFFSET UNITYSDK_OFFSET(0x9A7B3E0)
#define CLASS_2_4ADEC297BD9730EF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9A7B310)
#define CLASS_2_4ADEC297BD9730EF__CTOR_OFFSET UNITYSDK_OFFSET(0x9A7B360)
#define CLASS_2_4ADEC297BD9730EF___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A7B370)

inline static constexpr unsigned int Class_2_4ADEC297BD9730EF_TypeDefinitionIndex = 70586;

class Class_2_4ADEC297BD9730EF : public ::Class_1_37995CCC23FA9499
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ADEC297BD9730EF_TypeDefinitionIndex)->GetStaticField(0x7950);
	}
	::RPG::PoolDictionary_2<::System::Int32, ::System::String*>* Field_2_5; // 0x20
	::RPG::PoolHashSet_1<::System::UInt32>* Field_2_4; // 0x28
	::Struct_2_EAC1BB0F093534A5 Field_2_1; // 0x30
	::System::Boolean Field_2_0; // 0x98
	::System::UInt32 Field_2_2; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_93EA496491A26F83(::Class_2_9DD8A46984F1AFFD* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_93EA496491A26F83_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_7EB86DC3DC87380E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_7EB86DC3DC87380E_OFFSET))(this);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_5DFBFFF8A8E1FB43(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_5DFBFFF8A8E1FB43_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B85DC63E89AB50D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_2B85DC63E89AB50D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_985C40CE2D40CCAB(::Class_2_9DD8A46984F1AFFD* P0, ::Class_3_1A92845FAFA5EC77* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_4ADEC297BD9730EF_METHOD_2_985C40CE2D40CCAB_OFFSET))(this, P0, P1);
	}
};
