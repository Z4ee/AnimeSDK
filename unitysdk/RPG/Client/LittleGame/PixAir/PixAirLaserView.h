#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xBE40C70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_FIRE_OFFSET UNITYSDK_OFFSET(0xBE3FFA0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0xBE40B10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBE40A50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBE403F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_1_OFFSET UNITYSDK_OFFSET(0xBE405F0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_2_OFFSET UNITYSDK_OFFSET(0xBE407E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_OFFSET UNITYSDK_OFFSET(0xBE404A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_7DEB74453EA11388_OFFSET UNITYSDK_OFFSET(0xBE40160)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_B1CE1483336E183A_OFFSET UNITYSDK_OFFSET(0xBE40660)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_B326214F403C3638_OFFSET UNITYSDK_OFFSET(0xBE40D10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_D7CE655458A04FD8_OFFSET UNITYSDK_OFFSET(0xBE40500)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_FDE74D4B180911CE_OFFSET UNITYSDK_OFFSET(0xBE40840)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE40360)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xBE40AB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xBE40E60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___IFIXBASEPROXY_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xBE40ED0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE40E70)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLaserView_TypeDefinitionIndex = 71845;

	class PixAirLaserView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::UInt32 Field_6_0; // 0x38
		::System::UInt32 Field_6_1; // 0x3C
		::System::UInt32 Field_6_2; // 0x40
		::RPG::Client::MonoEffect* Field_6_3; // 0x48
		::RPG::Client::MonoEffect* Field_6_4; // 0x50
		::RPG::Client::MonoEffect* Field_6_5; // 0x58
		::UnityEngine::Transform* Field_6_6; // 0x60
		::UnityEngine::Transform* Field_6_7; // 0x68
		::System::Boolean Field_6_8; // 0x70
		::System::Boolean Field_6_9; // 0x71
		::System::Boolean Field_6_10; // 0x72
		::System::Boolean Field_6_11; // 0x73

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Fire(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_FIRE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 Method_6_7DEB74453EA11388(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Action_1<::RPG::Client::MonoEffect*>* a3, ::System::Boolean& a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action_1<::RPG::Client::MonoEffect*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_7DEB74453EA11388_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_556718862C234099(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_OFFSET))(this, a1);
		}

		::System::Void Method_6_556718862C234099_1(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_1_OFFSET))(this, a1);
		}

		::System::Void Method_6_556718862C234099_2(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_2_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_D7CE655458A04FD8(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_D7CE655458A04FD8_OFFSET))(this, a1);
		}

		::System::Void Method_6_B1CE1483336E183A(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_B1CE1483336E183A_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_FDE74D4B180911CE(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_FDE74D4B180911CE_OFFSET))(this, a1);
		}

		::System::Void Method_6_045F1AAB54606068()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_045F1AAB54606068_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_B326214F403C3638(::System::UInt32 a1, ::System::Boolean& a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_B326214F403C3638_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW___IFIXBASEPROXY_DESTROYVIEWONLY_OFFSET))(this);
		}
	};
}
