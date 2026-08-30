#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ERacingMatchFlowState.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class BlendConfig; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_D29CDF22C49A3230_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x13F21CA0)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_1B107271687ABBBF_OFFSET UNITYSDK_OFFSET(0x13F219D0)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_461CEEEAA4EEFDFD_OFFSET UNITYSDK_OFFSET(0x13F21190)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x13F21060)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_A820315FAA33120F_OFFSET UNITYSDK_OFFSET(0x13F21B80)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_C077761E0AB387AB_OFFSET UNITYSDK_OFFSET(0x13F21820)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x13F20FE0)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_CC1826232B3D63B2_OFFSET UNITYSDK_OFFSET(0x13F21440)
#define CLASS_1_D29CDF22C49A3230_METHOD_1_F82A446DB5AFAA34_OFFSET UNITYSDK_OFFSET(0x13F210B0)
#define CLASS_1_D29CDF22C49A3230__CTOR_OFFSET UNITYSDK_OFFSET(0x13F20F30)

inline static constexpr unsigned int Class_1_D29CDF22C49A3230_TypeDefinitionIndex = 80434;

class Class_1_D29CDF22C49A3230 : public ::System::Object
{
public:
	// static const ::System::UInt32 HNMPEOFPLLD = 0x22; // 0x0
	// static const ::System::UInt32 EOMCHFKEGCJ = 0x5; // 0x0
	// static const ::System::String* GJIPAKJNHEH; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::BlendConfig*>* HLLDINALFKO; // 0x10
	::System::String* HNGLDKMAFON; // 0x18
	::RPG::Client::B51Racing::ERacingMatchFlowState DBLPPKGIFMP; // 0x20
	::System::Boolean CFHCOPPPGIE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F82A446DB5AFAA34()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_F82A446DB5AFAA34_OFFSET))(this);
	}

	::System::Void Method_1_461CEEEAA4EEFDFD(::System::String* a1, ::System::Boolean a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_461CEEEAA4EEFDFD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_CC1826232B3D63B2(::RPG::GameCore::LevelAreaManager* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_CC1826232B3D63B2_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CinemachineVirtualCamera* Method_1_1B107271687ABBBF(::System::String* a1)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_1B107271687ABBBF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C077761E0AB387AB(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_C077761E0AB387AB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A820315FAA33120F(::System::String* a1, ::RPG::Client::BlendConfig*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::BlendConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_A820315FAA33120F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D29CDF22C49A3230_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}
};
