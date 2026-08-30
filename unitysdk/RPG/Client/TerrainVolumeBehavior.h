#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace GeometryEdit { class Prism; }
namespace RPG::Client { class TerrainVolumeMonoPlugin; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1AC9FFF0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1ACA0210)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1ACA0090)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1ACA00F0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1ACA0150)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x1ACA01B0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0x1ACA0250)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_6_OFFSET UNITYSDK_OFFSET(0x1ACA03E0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1ACA0030)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_90C2A6D9F95BF55B_OFFSET UNITYSDK_OFFSET(0x1ACA0500)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x1AC9FEE0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1ACA02B0)
#define RPG_CLIENT_TERRAINVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA05D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainVolumeBehavior_TypeDefinitionIndex = 71002;

	class TerrainVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Texture* HeightBlendTex; // 0x38
		::UnityEngine::Texture* HeightBlendDetailTex; // 0x40
		::UnityEngine::Vector2 BlendBaseRange; // 0x48
		::UnityEngine::Bounds HeightBlendBounds; // 0x50
		::GeometryEdit::Prism* mPrism; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_6_OFFSET))(this);
		}

		::System::Void Method_3_90C2A6D9F95BF55B(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_METHOD_3_90C2A6D9F95BF55B_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::TerrainVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::TerrainVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
