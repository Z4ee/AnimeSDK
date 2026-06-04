#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8;
class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248;
class Class_1_B64B3390003680E8;
class Class_2_049053A9DCD26B56;
class Class_2_3399D5FC362D6A3F;
class Class_2_4CDC13220E4CDFEE;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA76F960)
#define CLASS_1_04E8A8CB715F95A7_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA77DB10)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_18FB5F0211403A3D_OFFSET UNITYSDK_OFFSET(0xA7704D0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_1C0F0B7BB20C36C7_OFFSET UNITYSDK_OFFSET(0xA77CB90)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_1C1393D0FFA2D9FA_OFFSET UNITYSDK_OFFSET(0xA77CE90)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_23A21A8D5DE3B9C1_OFFSET UNITYSDK_OFFSET(0xA77D940)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xA770EC0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_52128BE59C7EF2D3_OFFSET UNITYSDK_OFFSET(0xA77C8D0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_7955878C72ACC403_OFFSET UNITYSDK_OFFSET(0xA77D350)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA77C670)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0xA77C340)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_A9E9C2F1C451815D_OFFSET UNITYSDK_OFFSET(0xA7713C0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_AEBA397B85DD6D8F_OFFSET UNITYSDK_OFFSET(0xA76FD50)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xA77C220)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_BAB1B94DF957C3D5_OFFSET UNITYSDK_OFFSET(0xA77CAA0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_DC4B15126B344D9B_OFFSET UNITYSDK_OFFSET(0xA770FA0)
#define CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET UNITYSDK_OFFSET(0xA77DB20)
#define CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET UNITYSDK_OFFSET(0xA771670)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_TypeDefinitionIndex = 53658;

class Class_1_04E8A8CB715F95A7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04E8A8CB715F95A7_TypeDefinitionIndex)->GetStaticField(0x60D10);
	}
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_B64B3390003680E8*>* Field_1_4; // 0x18
	::System::String* _UniqueName_k__BackingField; // 0x20
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248*>* Field_1_6; // 0x28
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8*>* Field_1_7; // 0x30
	::Class_2_3399D5FC362D6A3F* Field_1_8; // 0x38
	::RPG::GameCore::GameEntity* Field_1_9; // 0x40
	::System::Single Field_1_10; // 0x48
	::System::Single Field_1_11; // 0x4C
	::System::Single Field_1_12; // 0x50
	::System::Single Field_1_13; // 0x54
	::System::Single Field_1_14; // 0x58
	::System::Single Field_1_15; // 0x5C
	::System::Single Field_1_16; // 0x60
	::System::Single Field_1_17; // 0x64
	::System::Single Field_1_18; // 0x68
	::System::Boolean Field_1_19; // 0x6C

	::System::Void _ctor(::System::String* a1, ::Class_2_3399D5FC362D6A3F* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_3399D5FC362D6A3F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_AEBA397B85DD6D8F(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_AEBA397B85DD6D8F_OFFSET))(this, a1);
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

	::System::Void Method_1_A9E9C2F1C451815D(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_A9E9C2F1C451815D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_23A21A8D5DE3B9C1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_23A21A8D5DE3B9C1_OFFSET))(this, a1, a2, a3);
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
