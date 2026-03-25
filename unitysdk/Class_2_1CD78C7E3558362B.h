#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffectPluginRandomPosInRing; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_1CD78C7E3558362B_METHOD_2_01244C5D42565CB2_OFFSET UNITYSDK_OFFSET(0x10CD8220)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x10CD8580)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_3C63CEB3C31A94E4_OFFSET UNITYSDK_OFFSET(0x10CD7BD0)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10CD8170)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_5F59867914726945_OFFSET UNITYSDK_OFFSET(0x10CD8990)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x10CD7F90)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10CD8D10)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x10CD8430)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10CD7ED0)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10CD81D0)
#define CLASS_2_1CD78C7E3558362B_METHOD_2_E3FE5A1BE3453927_OFFSET UNITYSDK_OFFSET(0x10CD7F20)
#define CLASS_2_1CD78C7E3558362B__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD8CF0)

inline static constexpr unsigned int Class_2_1CD78C7E3558362B_TypeDefinitionIndex = 57174;

class Class_2_1CD78C7E3558362B : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::GameCore::EntityPosAdaptionConfig* Field_2_3; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_0; // 0x24
	::UnityEngine::Vector3 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3C63CEB3C31A94E4(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_3C63CEB3C31A94E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_01244C5D42565CB2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_01244C5D42565CB2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_2_1DE6433C25680F9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_1DE6433C25680F9D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_5F59867914726945()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_5F59867914726945_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginRandomPosInRing* Method_2_E3FE5A1BE3453927()
	{
		return ((::RPG::Client::MonoEffectPluginRandomPosInRing*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_E3FE5A1BE3453927_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_1CD78C7E3558362B_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
