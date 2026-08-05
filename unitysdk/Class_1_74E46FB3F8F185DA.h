#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9CDCD2BA9C118D10.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_48460350BA079E78.h"
#include "unitysdk/Struct_2_A8AA65B75807FFC4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_74E46FB3F8F185DA_METHOD_1_2BB4C27739EA0FF2_OFFSET UNITYSDK_OFFSET(0x1376D740)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_3E261A518D7FDB75_OFFSET UNITYSDK_OFFSET(0x1376CDF0)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_44ECDE9E40081879_OFFSET UNITYSDK_OFFSET(0x1376BB10)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_4E5A77AEE6C22303_OFFSET UNITYSDK_OFFSET(0x1376D130)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_4FF3A3F4512D7218_OFFSET UNITYSDK_OFFSET(0x1376BF10)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_53DA9C345DA516A2_OFFSET UNITYSDK_OFFSET(0x1376D4F0)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_81DA23701B168452_OFFSET UNITYSDK_OFFSET(0x1376C470)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_963AD570A65BBC60_OFFSET UNITYSDK_OFFSET(0x1376B840)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_A05DBF9BF35EF3B8_OFFSET UNITYSDK_OFFSET(0x1376CAA0)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0x1376CD60)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_BCA6078E96045C69_OFFSET UNITYSDK_OFFSET(0x1376C0F0)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1376C460)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_C8A5A4E24104372A_OFFSET UNITYSDK_OFFSET(0x1376CC30)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_EF79C60756C35D5F_OFFSET UNITYSDK_OFFSET(0x1376CB50)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1376CB40)
#define CLASS_1_74E46FB3F8F185DA_METHOD_1_F075C0F64F694E39_OFFSET UNITYSDK_OFFSET(0x1376BC00)

inline static constexpr unsigned int Class_1_74E46FB3F8F185DA_TypeDefinitionIndex = 47026;

class Class_1_74E46FB3F8F185DA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74E46FB3F8F185DA_TypeDefinitionIndex)->GetStaticField(0xD430);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74E46FB3F8F185DA_TypeDefinitionIndex)->GetStaticField(0xD434);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74E46FB3F8F185DA_TypeDefinitionIndex)->GetStaticField(0xD438);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_74E46FB3F8F185DA_TypeDefinitionIndex)->GetStaticField(0xD43C);
	}

	static ::UnityEngine::GameObject* Method_1_963AD570A65BBC60(::Struct_2_A8AA65B75807FFC4 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::Struct_2_A8AA65B75807FFC4))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_963AD570A65BBC60_OFFSET))(a1);
	}

	static ::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_C74E50CBD41F0264_OFFSET))(a1);
	}

	static ::System::Void Method_1_81DA23701B168452(::Foundation::Clamped_1<::System::Single>& a1, ::Foundation::Clamped_1<::System::Single>& a2, ::UnityEngine::CanvasGroup*& a3, ::UnityEngine::CanvasGroup*& a4, ::UnityEngine::CanvasGroup*& a5, ::UnityEngine::CanvasGroup*& a6)
	{
		return ((::System::Void(*)(::Foundation::Clamped_1<::System::Single>&, ::Foundation::Clamped_1<::System::Single>&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&, ::UnityEngine::CanvasGroup*&))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_81DA23701B168452_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Transform* Method_1_F075C0F64F694E39(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_F075C0F64F694E39_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_A05DBF9BF35EF3B8(::Struct_2_48460350BA079E78 a1)
	{
		return ((::UnityEngine::Transform*(*)(::Struct_2_48460350BA079E78))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_A05DBF9BF35EF3B8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_F0088C88851A7DFB_OFFSET))();
	}

	static ::UnityEngine::Transform* Method_1_BCA6078E96045C69(::MoleMole::EntityHandle a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_BCA6078E96045C69_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_EF79C60756C35D5F()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_EF79C60756C35D5F_OFFSET))();
	}

	static ::UnityEngine::GameObject* Method_1_44ECDE9E40081879(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_44ECDE9E40081879_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_4FF3A3F4512D7218(::System::Int32 a1)
	{
		return ((::UnityEngine::GameObject*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_4FF3A3F4512D7218_OFFSET))(a1);
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_3E261A518D7FDB75()
	{
		return ((::UnityEngine::Transform*(*)())((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_3E261A518D7FDB75_OFFSET))();
	}

	static ::System::Boolean Method_1_4E5A77AEE6C22303(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_4E5A77AEE6C22303_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_53DA9C345DA516A2(::Foundation::Clamped_1<::System::Single>& a1, ::Foundation::Clamped_1<::System::Single>& a2, ::UnityEngine::Transform*& a3, ::UnityEngine::Transform*& a4, ::UnityEngine::Transform*& a5, ::UnityEngine::Transform*& a6, ::UnityEngine::Transform*& a7, ::UnityEngine::Transform*& a8, ::UnityEngine::Transform*& a9, ::UnityEngine::Transform*& a10)
	{
		return ((::System::Void(*)(::Foundation::Clamped_1<::System::Single>&, ::Foundation::Clamped_1<::System::Single>&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_53DA9C345DA516A2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Boolean Method_1_2BB4C27739EA0FF2(::Enum_3_9CDCD2BA9C118D10 a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::Enum_3_9CDCD2BA9C118D10, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_2BB4C27739EA0FF2_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_C8A5A4E24104372A()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_74E46FB3F8F185DA_METHOD_1_C8A5A4E24104372A_OFFSET))();
	}
};
