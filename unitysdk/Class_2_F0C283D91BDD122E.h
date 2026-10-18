#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropShaderCtrlStatus.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_24718D5FE499B6B7;
namespace RPG::Client { class TrivisionSpeed; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_F0C283D91BDD122E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB91E800)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_562314C9D5E682DB_OFFSET UNITYSDK_OFFSET(0xB91EB10)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_767BD0A0203BD061_OFFSET UNITYSDK_OFFSET(0xB91F9D0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_88E99A17C817F5C9_OFFSET UNITYSDK_OFFSET(0xB91F880)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_9D4056E7811BA260_OFFSET UNITYSDK_OFFSET(0xB91EF90)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB91FB40)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_B557C561617A6250_OFFSET UNITYSDK_OFFSET(0xB91ED70)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_C363D49B19844D3D_OFFSET UNITYSDK_OFFSET(0xB91F910)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0xB91E1A0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xB91FAC0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_E6E0E86A3E0935A0_OFFSET UNITYSDK_OFFSET(0xB91EBC0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0xB91F710)
#define CLASS_2_F0C283D91BDD122E_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xB91E150)
#define CLASS_2_F0C283D91BDD122E_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB91E7C0)
#define CLASS_2_F0C283D91BDD122E_TICK_OFFSET UNITYSDK_OFFSET(0xB91E860)
#define CLASS_2_F0C283D91BDD122E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB91FBA0)
#define CLASS_2_F0C283D91BDD122E__CTOR_OFFSET UNITYSDK_OFFSET(0xB91E140)

inline static constexpr unsigned int Class_2_F0C283D91BDD122E_TypeDefinitionIndex = 57420;

class Class_2_F0C283D91BDD122E : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_IDGFNFGGDOL()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F0C283D91BDD122E_TypeDefinitionIndex)->GetStaticField(0x6F940);
	}
	static ::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>** StaticGet_MKINLGAIBHC()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F0C283D91BDD122E_TypeDefinitionIndex)->GetStaticField(0x6F948);
	}
	::Class_1_24718D5FE499B6B7* HJCHFPEEHDC; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CPCLONDNJAC; // 0x20
	::RPG::GameCore::PropShaderCtrlStatus CPPNFCBEJLK; // 0x28
	::RPG::GameCore::PropType KAFPJCDFIDD; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E__CCTOR_OFFSET))();
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_562314C9D5E682DB(::RPG::GameCore::PropType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropType))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_562314C9D5E682DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_B557C561617A6250(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_B557C561617A6250_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9D4056E7811BA260(::UnityEngine::Texture2D* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_9D4056E7811BA260_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88E99A17C817F5C9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_88E99A17C817F5C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C363D49B19844D3D(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_C363D49B19844D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_767BD0A0203BD061(::System::UInt32 a1, ::System::Nullable_1<::System::Single> a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_767BD0A0203BD061_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E6E0E86A3E0935A0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_E6E0E86A3E0935A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
