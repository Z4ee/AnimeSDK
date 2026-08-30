#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_460;
class Class_1_B2388953D46D7EF4;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F476738E1B11D9F3_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x18800A00)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4358F70A163BCEAE_OFFSET UNITYSDK_OFFSET(0x187FFB50)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4538E9501054E688_OFFSET UNITYSDK_OFFSET(0x187FFAD0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_47B18B228592626B_OFFSET UNITYSDK_OFFSET(0x188000D0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x188001F0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0x187FFD50)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x187FFE40)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_9587E5276DF8AE82_OFFSET UNITYSDK_OFFSET(0x18800940)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_B9BD5FB09F313D71_OFFSET UNITYSDK_OFFSET(0x18800E70)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_CC9DCB1EBAA03C60_OFFSET UNITYSDK_OFFSET(0x18800CC0)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_D2DD924C607646D3_OFFSET UNITYSDK_OFFSET(0x18801090)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0x18800190)
#define CLASS_2_F476738E1B11D9F3_METHOD_2_F39DF4F52DD1150D_OFFSET UNITYSDK_OFFSET(0x187FFF30)
#define CLASS_2_F476738E1B11D9F3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x187FF970)
#define CLASS_2_F476738E1B11D9F3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x187FFBB0)
#define CLASS_2_F476738E1B11D9F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x188013F0)
#define CLASS_2_F476738E1B11D9F3__CTOR_OFFSET UNITYSDK_OFFSET(0x188013C0)
#define CLASS_2_F476738E1B11D9F3__ONBIND_OFFSET UNITYSDK_OFFSET(0x18801300)
#define CLASS_2_F476738E1B11D9F3__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0x18801410)

inline static constexpr unsigned int Class_2_F476738E1B11D9F3_TypeDefinitionIndex = 71688;

class Class_2_F476738E1B11D9F3 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Single* StaticGet_AJEHGNNEDFG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0xEF10);
	}
	static ::System::Single* StaticGet_GGMLAPKLIKB()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0xEF14);
	}
	static ::System::Single* StaticGet_HEEPKPHCKOI()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0xEF18);
	}
	static ::System::Single* StaticGet_DMFNDMLIJCD()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0xEF1C);
	}
	static ::System::Single* StaticGet_FMPCCGNHMJC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_F476738E1B11D9F3_TypeDefinitionIndex)->GetStaticField(0xEF20);
	}
	// static const ::System::Single LOEJIAFIPKK; // 0x0
	// static const ::System::Single BEABEEPLLID; // 0x0
	// static const ::System::Single PKOIALJCEPE; // 0x0
	::UnityEngine::RectTransform* HKONEDKHNMM; // 0x60
	::UnityEngine::Animation* BAFAAEFEBPJ; // 0x68
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
	::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x78
	::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x80
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x88
	::Class_1_B2388953D46D7EF4* NINEBKCLIOG; // 0x90
	::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__CCTOR_OFFSET))();
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_F39DF4F52DD1150D()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_F39DF4F52DD1150D_OFFSET))(this);
	}

	::System::Void Method_2_47B18B228592626B(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_47B18B228592626B_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_8CA05BCD86E125DF_1_OFFSET))(this);
	}

	::System::Void Method_2_9587E5276DF8AE82(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_9587E5276DF8AE82_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_2_4358F70A163BCEAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4358F70A163BCEAE_OFFSET))(this);
	}

	::System::Void Method_2_4538E9501054E688(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4538E9501054E688_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_2_B9BD5FB09F313D71(::RPG::Client::UIFollow3DTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_B9BD5FB09F313D71_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D2DD924C607646D3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_D2DD924C607646D3_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_CC9DCB1EBAA03C60()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3_METHOD_2_CC9DCB1EBAA03C60_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__ONBIND_OFFSET))(this);
	}

	::System::Void _OnReturn_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F476738E1B11D9F3__ONRETURN_B__1_0_OFFSET))(this);
	}
};
