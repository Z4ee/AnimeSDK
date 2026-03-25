#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropShaderCtrlStatus.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_1C0FDDBF8AE87746;
namespace RPG::Client { class TrivisionSpeed; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define CLASS_2_F0C283D91BDD122E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108EFFD0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_09A10F5CD917CB8F_OFFSET UNITYSDK_OFFSET(0x108EF970)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_4A63D2860A96B300_OFFSET UNITYSDK_OFFSET(0x108F0350)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_50D6A7C67ED3EDC7_OFFSET UNITYSDK_OFFSET(0x108F1100)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x108F0440)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_767BD0A0203BD061_OFFSET UNITYSDK_OFFSET(0x108F1250)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_9D4056E7811BA260_OFFSET UNITYSDK_OFFSET(0x108F0820)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x108F13C0)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_B557C561617A6250_OFFSET UNITYSDK_OFFSET(0x108F0620)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x108F1340)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_C363D49B19844D3D_OFFSET UNITYSDK_OFFSET(0x108F1190)
#define CLASS_2_F0C283D91BDD122E_METHOD_2_EBDEB81FA3C1F4D1_OFFSET UNITYSDK_OFFSET(0x108F0F70)
#define CLASS_2_F0C283D91BDD122E_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x108EF920)
#define CLASS_2_F0C283D91BDD122E_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x108EFF90)
#define CLASS_2_F0C283D91BDD122E_TICK_OFFSET UNITYSDK_OFFSET(0x108F0030)
#define CLASS_2_F0C283D91BDD122E__CCTOR_OFFSET UNITYSDK_OFFSET(0x108F1420)
#define CLASS_2_F0C283D91BDD122E__CTOR_OFFSET UNITYSDK_OFFSET(0x108EF910)
#define CLASS_2_F0C283D91BDD122E___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x108F14A0)

inline static constexpr unsigned int Class_2_F0C283D91BDD122E_TypeDefinitionIndex = 46260;

class Class_2_F0C283D91BDD122E : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::List_1<::RPG::Client::TrivisionSpeed*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F0C283D91BDD122E_TypeDefinitionIndex)->GetStaticField(0x37340);
	}
	static ::UnityEngine::MaterialPropertyBlock** StaticGet_Field_2_4()
	{
		return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F0C283D91BDD122E_TypeDefinitionIndex)->GetStaticField(0x37348);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* Field_2_3; // 0x18
	::Class_1_1C0FDDBF8AE87746* Field_2_2; // 0x20
	::RPG::GameCore::PropShaderCtrlStatus Field_2_0; // 0x28
	::RPG::GameCore::PropType Field_2_1; // 0x2C

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

	::System::Void Method_2_4A63D2860A96B300(::RPG::GameCore::PropType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropType))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_4A63D2860A96B300_OFFSET))(this, a1);
	}

	::System::Void Method_2_B557C561617A6250(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_B557C561617A6250_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9D4056E7811BA260(::UnityEngine::Texture2D* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_9D4056E7811BA260_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_09A10F5CD917CB8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_09A10F5CD917CB8F_OFFSET))(this);
	}

	::System::Void Method_2_EBDEB81FA3C1F4D1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_EBDEB81FA3C1F4D1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50D6A7C67ED3EDC7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_50D6A7C67ED3EDC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_C363D49B19844D3D(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_C363D49B19844D3D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_767BD0A0203BD061(::System::UInt32 a1, ::System::Nullable_1<::System::Single> a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_767BD0A0203BD061_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F0C283D91BDD122E___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
