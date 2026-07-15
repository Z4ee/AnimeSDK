#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_REGIONVOLUME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19869870)
#define RPG_CLIENT_REGIONVOLUME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198698A0)
#define RPG_CLIENT_REGIONVOLUME___C__LOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x198698B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RegionVolume___c_TypeDefinitionIndex = 59436;

	class RegionVolume___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::MVector2, ::UnityEngine::Vector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::MVector2, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(RegionVolume___c_TypeDefinitionIndex)->GetStaticField(0x1C0E0);
		}
		static ::RPG::Client::RegionVolume___c** StaticGet___9()
		{
			return (::RPG::Client::RegionVolume___c**)Il2CppClass::FromTypeDefinitionIndex(RegionVolume___c_TypeDefinitionIndex)->GetStaticField(0x1C0E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _Load_b__2_0(::RPG::MVector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_REGIONVOLUME___C__LOAD_B__2_0_OFFSET))(this, a1);
		}
	};
}
