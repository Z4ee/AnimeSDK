#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8;
class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248;
class Class_1_61F66DDFF6FC7B36;
class Class_2_049053A9DCD26B56;
class Class_2_4CDC13220E4CDFEE;
class Class_2_94088BD52F494C82;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA720D0)
#define CLASS_1_04E8A8CB715F95A7_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xBA84DA0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_0A97C142F8308A62_OFFSET UNITYSDK_OFFSET(0xBA74510)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_0B739117C1792146_OFFSET UNITYSDK_OFFSET(0xBA73B50)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_18FB5F0211403A3D_OFFSET UNITYSDK_OFFSET(0xBA72AF0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_1C0F0B7BB20C36C7_OFFSET UNITYSDK_OFFSET(0xBA83E40)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_1C1393D0FFA2D9FA_OFFSET UNITYSDK_OFFSET(0xBA84140)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBA734D0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_52128BE59C7EF2D3_OFFSET UNITYSDK_OFFSET(0xBA83B80)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_7955878C72ACC403_OFFSET UNITYSDK_OFFSET(0xBA84560)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBA83920)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xBA835F0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_B5D72D2A9ACC08C2_OFFSET UNITYSDK_OFFSET(0xBA72440)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xBA834D0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_BAB1B94DF957C3D5_OFFSET UNITYSDK_OFFSET(0xBA83D50)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_D3A3EB4626083A97_OFFSET UNITYSDK_OFFSET(0xBA84B50)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_DC4B15126B344D9B_OFFSET UNITYSDK_OFFSET(0xBA735B0)
#define CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET UNITYSDK_OFFSET(0xBA84DB0)
#define CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET UNITYSDK_OFFSET(0xBA73E60)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_TypeDefinitionIndex = 57601;

class Class_1_04E8A8CB715F95A7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EMFIHCCMNII()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04E8A8CB715F95A7_TypeDefinitionIndex)->GetStaticField(0x57940);
	}
	// static const ::System::Single OBJJKPKOLKM; // 0x0
	// static const ::System::Single HFAHICMDFOK; // 0x0
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248*>* NMHGPOINNDE; // 0x18
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* HFPAMFHJJMG; // 0x20
	::System::String* _UniqueName_k__BackingField; // 0x28
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8*>* OMDOJLJEJEM; // 0x30
	::Class_2_94088BD52F494C82* JHFKOHNKLMH; // 0x38
	::System::Collections::Generic::List_1<::Class_1_61F66DDFF6FC7B36*>* GFFAGJOELCH; // 0x40
	::System::Single IKPGEMHGIME; // 0x48
	::System::Single FGFCCDEBKJA; // 0x4C
	::System::Single BDDGMAOMCPI; // 0x50
	::System::Single HBDJCFFDGDD; // 0x54
	::System::Single FNKPBGKLFED; // 0x58
	::System::Single LAMPDMCDDLF; // 0x5C
	::System::Single BPAIDCADMDO; // 0x60
	::System::Boolean DKLMKMCGGPC; // 0x64
	::System::Single BHHHGKKOFAK; // 0x68
	::System::Single OIKOMNFPCDD; // 0x6C

	::System::Void _ctor(::System::String* a1, ::Class_2_94088BD52F494C82* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_94088BD52F494C82*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_B5D72D2A9ACC08C2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_B5D72D2A9ACC08C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_18FB5F0211403A3D(::Class_2_4CDC13220E4CDFEE* a1, ::Il2CppArray<::Class_2_049053A9DCD26B56*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4CDC13220E4CDFEE*, ::Il2CppArray<::Class_2_049053A9DCD26B56*>*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_18FB5F0211403A3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC4B15126B344D9B(::System::UInt32 a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_DC4B15126B344D9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B739117C1792146(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_0B739117C1792146_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0A97C142F8308A62(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_0A97C142F8308A62_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D3A3EB4626083A97(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_D3A3EB4626083A97_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_52128BE59C7EF2D3(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_52128BE59C7EF2D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BAB1B94DF957C3D5(::System::Single a1, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*&))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_BAB1B94DF957C3D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7955878C72ACC403(::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_7955878C72ACC403_OFFSET))(this, a1);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Boolean Method_1_1C1393D0FFA2D9FA(::Class_2_049053A9DCD26B56* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_049053A9DCD26B56*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_1C1393D0FFA2D9FA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1C0F0B7BB20C36C7(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_1C0F0B7BB20C36C7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_GET_UNIQUENAME_OFFSET))(this);
	}
};
