#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_WOBBLEPASTER_START_OFFSET UNITYSDK_OFFSET(0x16801B60)
#define RPG_CLIENT_WOBBLEPASTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16802040)
#define RPG_CLIENT_WOBBLEPASTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16803270)
#define RPG_CLIENT_WOBBLEPASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16803210)

namespace RPG::Client
{
	inline static constexpr unsigned int WobblePaster_TypeDefinitionIndex = 70241;

	class WobblePaster : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_HEJJEJPOEJB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A60);
		}
		static ::System::Int32* StaticGet_CFBOCKJLFCK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A64);
		}
		static ::System::Int32* StaticGet_OHNCIOPAJNL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A68);
		}
		static ::System::Int32* StaticGet_EMJKNNNJOLA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A6C);
		}
		static ::System::Int32* StaticGet_AAAPPKLCENA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A70);
		}
		static ::System::Int32* StaticGet_JNMEMOEDEMM()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A74);
		}
		static ::System::Int32* StaticGet_GKHLKFONLMJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A78);
		}
		static ::System::Int32* StaticGet_DDADGDLKMJC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A7C);
		}
		static ::System::Int32* StaticGet_BKEDALEHLJF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WobblePaster_TypeDefinitionIndex)->GetStaticField(0x14A80);
		}
		::UnityEngine::GameObject* ReferenceObject1; // 0x18
		::UnityEngine::GameObject* ReferenceObject2; // 0x20
		::UnityEngine::GameObject* ReferenceObject3; // 0x28
		::UnityEngine::Renderer* Rend; // 0x30
		::System::Single MaxWobble; // 0x38
		::System::Single WobbleSpeed; // 0x3C
		::System::Single Recovery; // 0x40
		::UnityEngine::Vector3 JJHNJINNIME; // 0x44
		::UnityEngine::Vector3 CCECGDHMDEK; // 0x50
		::UnityEngine::Vector3 NBIPPELEMDM; // 0x5C
		::UnityEngine::Vector3 CMABEFPFGJP; // 0x68
		::System::Single EJIPAJOENNM; // 0x74
		::System::Single IILNONECHEE; // 0x78
		::System::Single OHLMPLPPCLI; // 0x7C
		::System::Single LJIEBAGGEFL; // 0x80
		::UnityEngine::Vector3 CALJFGOFPFD; // 0x84
		::UnityEngine::Vector3 FAKJGLMCKFH; // 0x90
		::UnityEngine::Vector3 NGNPGFEPMHD; // 0x9C
		::UnityEngine::Vector3 HMAHBAHNNNF; // 0xA8
		::System::Single LCLHCBDBJCF; // 0xB4
		::System::Single EBBGGMHOPFM; // 0xB8
		::System::Single BFHLNANMCJA; // 0xBC
		::System::Single NCPGCGAGAGJ; // 0xC0
		::UnityEngine::Vector3 BDDGOBPKJGN; // 0xC4
		::UnityEngine::Vector3 PJILPBGOCAC; // 0xD0
		::UnityEngine::Vector3 OIFIKJMEDAL; // 0xDC
		::UnityEngine::Vector3 FHFGIOADMDK; // 0xE8
		::System::Single GMIBKPJPLBE; // 0xF4
		::System::Single GPNLKACFOHL; // 0xF8
		::System::Single EHGMINAFLOI; // 0xFC
		::System::Single JGFIMGIDLBJ; // 0x100
		::System::Single KFEGBDBJJOB; // 0x104
		::System::Single LLICGDGPMJL; // 0x108
		::UnityEngine::MaterialPropertyBlock* HFCGFGDABGJ; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOBBLEPASTER_UPDATE_OFFSET))(this);
		}
	};
}
