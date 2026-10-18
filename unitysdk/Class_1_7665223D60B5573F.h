#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7665223D60B5573F_METHOD_1_0563F5A102A48B22_OFFSET UNITYSDK_OFFSET(0xC2B1AA0)
#define CLASS_1_7665223D60B5573F_METHOD_1_56FD3E1D37AD5670_OFFSET UNITYSDK_OFFSET(0xC2B2BE0)
#define CLASS_1_7665223D60B5573F_METHOD_1_5D4D79312D21975D_OFFSET UNITYSDK_OFFSET(0xC2B1B90)
#define CLASS_1_7665223D60B5573F_METHOD_1_6946A1603654383F_OFFSET UNITYSDK_OFFSET(0xC2B1C60)
#define CLASS_1_7665223D60B5573F_METHOD_1_8E886E66996E667C_OFFSET UNITYSDK_OFFSET(0xC2B2E90)
#define CLASS_1_7665223D60B5573F_METHOD_1_9E633EAA5C20D801_OFFSET UNITYSDK_OFFSET(0xC2B2670)
#define CLASS_1_7665223D60B5573F_METHOD_1_AB3A16B5BB84BD8C_OFFSET UNITYSDK_OFFSET(0xC2B2320)
#define CLASS_1_7665223D60B5573F_METHOD_1_B115A631C89C59CE_OFFSET UNITYSDK_OFFSET(0xC2B28B0)
#define CLASS_1_7665223D60B5573F_METHOD_1_B1FA33F35737FD73_OFFSET UNITYSDK_OFFSET(0xC2B2780)
#define CLASS_1_7665223D60B5573F_METHOD_1_B547E7ED17702F3F_OFFSET UNITYSDK_OFFSET(0xC2B2B00)
#define CLASS_1_7665223D60B5573F_METHOD_1_EF802F34DED241CD_OFFSET UNITYSDK_OFFSET(0xC2B2980)
#define CLASS_1_7665223D60B5573F_METHOD_1_F1345208B7BD656D_OFFSET UNITYSDK_OFFSET(0xC2B2090)
#define CLASS_1_7665223D60B5573F_METHOD_1_FD091687F196E471_OFFSET UNITYSDK_OFFSET(0xC2B2AA0)
#define CLASS_1_7665223D60B5573F__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2B3180)

inline static constexpr unsigned int Class_1_7665223D60B5573F_TypeDefinitionIndex = 60207;

class Class_1_7665223D60B5573F : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_IOBGPAJIPDG()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7665223D60B5573F_TypeDefinitionIndex)->GetStaticField(0x6F630);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_NJAGHGGGNAI()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7665223D60B5573F_TypeDefinitionIndex)->GetStaticField(0x6F638);
	}
	static ::RPG::GameCore::StringHash* StaticGet_GBPPBOFLHEF()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7665223D60B5573F_TypeDefinitionIndex)->GetStaticField(0x15960);
	}
	static ::RPG::GameCore::StringHash* StaticGet_LDBMEMNMJHD()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7665223D60B5573F_TypeDefinitionIndex)->GetStaticField(0x15964);
	}
	// static const ::System::Single CIDONBMBIBL; // 0x0
	// static const ::System::Single KHHMEJMJNFC; // 0x0
	// static const ::System::Single POAJDDKNKFL; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_0563F5A102A48B22(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_0563F5A102A48B22_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5D4D79312D21975D(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_5D4D79312D21975D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_6946A1603654383F(::RPG::GameCore::GameEntity* a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_6946A1603654383F_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntity* Method_1_F1345208B7BD656D(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_F1345208B7BD656D_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::String* Method_1_9E633EAA5C20D801(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_9E633EAA5C20D801_OFFSET))(a1);
	}

	static ::System::Void Method_1_B1FA33F35737FD73(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_B1FA33F35737FD73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB3A16B5BB84BD8C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_AB3A16B5BB84BD8C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FD091687F196E471(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_FD091687F196E471_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B115A631C89C59CE(::Il2CppArray<::System::Single>* a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_B115A631C89C59CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EF802F34DED241CD(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_EF802F34DED241CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B547E7ED17702F3F(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_B547E7ED17702F3F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_56FD3E1D37AD5670(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_56FD3E1D37AD5670_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_8E886E66996E667C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F_METHOD_1_8E886E66996E667C_OFFSET))(a1);
	}
};
