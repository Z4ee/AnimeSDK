#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"

namespace RPG::Client { class MonoEffect; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0x18604370)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_FIRE_OFFSET UNITYSDK_OFFSET(0x18603670)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x18604210)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_06010EBCDC42137E_OFFSET UNITYSDK_OFFSET(0x18603D30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x18604150)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18603AC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_1_OFFSET UNITYSDK_OFFSET(0x18603CC0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_2_OFFSET UNITYSDK_OFFSET(0x18603EB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_556718862C234099_OFFSET UNITYSDK_OFFSET(0x18603B70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_7DEB74453EA11388_OFFSET UNITYSDK_OFFSET(0x18603830)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_B326214F403C3638_OFFSET UNITYSDK_OFFSET(0x18604410)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_C43C36081A4D4A3D_OFFSET UNITYSDK_OFFSET(0x18603F10)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_D7CE655458A04FD8_OFFSET UNITYSDK_OFFSET(0x18603BD0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18603A30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x186041B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x18604560)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLaserView_TypeDefinitionIndex = 76849;

	class PixAirLaserView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::UInt32 FKKBIEPNBOP; // 0x38
		::System::UInt32 PNJLBAIMMJL; // 0x3C
		::System::UInt32 OKKPJEBLCHG; // 0x40
		::RPG::Client::MonoEffect* LHMKLIOGKHA; // 0x48
		::RPG::Client::MonoEffect* JOCLKJEGBJN; // 0x50
		::RPG::Client::MonoEffect* GAMBIINNKJO; // 0x58
		::UnityEngine::Transform* HKJLKMCDMGB; // 0x60
		::UnityEngine::Transform* IBLBKLNHKLL; // 0x68
		::System::Boolean CNCIPGOEIHC; // 0x70
		::System::Boolean INFLIMBKKNC; // 0x71
		::System::Boolean ANLODIJJPEP; // 0x72
		::System::Boolean FNOPENPBAFC; // 0x73

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

		::System::Void Method_6_06010EBCDC42137E(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_06010EBCDC42137E_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_C43C36081A4D4A3D(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_METHOD_6_C43C36081A4D4A3D_OFFSET))(this, a1);
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
	};
}
