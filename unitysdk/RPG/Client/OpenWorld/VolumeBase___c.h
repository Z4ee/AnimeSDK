#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EB3D10)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB3D50)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__WRITEREGIONTOSTAGEVOLUMECONFIGV2_B__2_0_OFFSET UNITYSDK_OFFSET(0x9EB3D60)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeBase___c_TypeDefinitionIndex = 60650;

	class VolumeBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector2, ::RPG::MVector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Vector2, ::RPG::MVector2>**)Il2CppClass::FromTypeDefinitionIndex(VolumeBase___c_TypeDefinitionIndex)->GetStaticField(0x44D30);
		}
		static ::RPG::Client::OpenWorld::VolumeBase___c** StaticGet___9()
		{
			return (::RPG::Client::OpenWorld::VolumeBase___c**)Il2CppClass::FromTypeDefinitionIndex(VolumeBase___c_TypeDefinitionIndex)->GetStaticField(0x44D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__CTOR_OFFSET))(this);
		}

		::RPG::MVector2 _WriteRegionToStageVolumeConfigV2_b__2_0(::UnityEngine::Vector2 x)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE___C__WRITEREGIONTOSTAGEVOLUMECONFIGV2_B__2_0_OFFSET))(this, x);
		}
	};
}
