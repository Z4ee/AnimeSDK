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
class Class_2_06FF6460B8BB44DE;
class Class_2_31ADA956CBE1875C;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96846A0)
#define CLASS_1_04E8A8CB715F95A7_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x9686F00)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_1C0F0B7BB20C36C7_OFFSET UNITYSDK_OFFSET(0x9685E40)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9686B20)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_2C00B37FBD46DF54_OFFSET UNITYSDK_OFFSET(0x9686C40)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_37E6F23630A05C21_OFFSET UNITYSDK_OFFSET(0x96849E0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_52128BE59C7EF2D3_OFFSET UNITYSDK_OFFSET(0x96854C0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_81F58A0EE3BB331F_OFFSET UNITYSDK_OFFSET(0x9686D20)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9685260)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x9684F30)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_9D87641968EF0E28_OFFSET UNITYSDK_OFFSET(0x96865A0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_A75DA5EA71E1C6EA_OFFSET UNITYSDK_OFFSET(0x9685780)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x96848C0)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_BAB1B94DF957C3D5_OFFSET UNITYSDK_OFFSET(0x9685690)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_BD89AA29644D8944_OFFSET UNITYSDK_OFFSET(0x9686140)
#define CLASS_1_04E8A8CB715F95A7_METHOD_1_DC4B15126B344D9B_OFFSET UNITYSDK_OFFSET(0x9686B80)
#define CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x9686F10)
#define CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET UNITYSDK_OFFSET(0x96845A0)

inline static constexpr unsigned int Class_1_04E8A8CB715F95A7_TypeDefinitionIndex = 52948;

class Class_1_04E8A8CB715F95A7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04E8A8CB715F95A7_TypeDefinitionIndex)->GetStaticField(0x65B20);
	}
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_13; // 0x0
	::System::String* _UniqueName_k__BackingField; // 0x10
	::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* Field_1_19; // 0x18
	::Class_2_31ADA956CBE1875C* Field_1_4; // 0x20
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8*>* Field_1_17; // 0x28
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248*>* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::Class_1_B64B3390003680E8*>* Field_1_18; // 0x38
	::RPG::GameCore::GameEntity* Field_1_3; // 0x40
	::System::Single Field_1_6; // 0x48
	::System::Single Field_1_14; // 0x4C
	::System::Single Field_1_16; // 0x50
	::System::Single Field_1_11; // 0x54
	::System::Single Field_1_15; // 0x58
	::System::Single Field_1_5; // 0x5C
	::System::Single Field_1_10; // 0x60
	::System::Boolean Field_1_8; // 0x64
	::System::Single Field_1_9; // 0x68
	::System::Single Field_1_7; // 0x6C

	::System::Void _ctor(::System::String* a1, ::Class_2_31ADA956CBE1875C* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_31ADA956CBE1875C*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_37E6F23630A05C21(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_37E6F23630A05C21_OFFSET))(this, a1);
	}

	::System::Void Method_1_A75DA5EA71E1C6EA(::Class_2_06FF6460B8BB44DE* a1, ::Il2CppArray<::Class_2_049053A9DCD26B56*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_06FF6460B8BB44DE*, ::Il2CppArray<::Class_2_049053A9DCD26B56*>*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_A75DA5EA71E1C6EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_DC4B15126B344D9B(::System::UInt32 a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_DC4B15126B344D9B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2C00B37FBD46DF54(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_2C00B37FBD46DF54_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_81F58A0EE3BB331F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_81F58A0EE3BB331F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_52128BE59C7EF2D3(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_52128BE59C7EF2D3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BAB1B94DF957C3D5(::System::Single a1, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*&))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_BAB1B94DF957C3D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9D87641968EF0E28(::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_04E8A8CB715F95A7_Class_1_149B209B067A3FA8*))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_9D87641968EF0E28_OFFSET))(this, a1);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Boolean Method_1_BD89AA29644D8944(::Class_2_049053A9DCD26B56* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_049053A9DCD26B56*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_04E8A8CB715F95A7_METHOD_1_BD89AA29644D8944_OFFSET))(this, a1, a2, a3);
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
