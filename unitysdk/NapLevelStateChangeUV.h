#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INapLevel_CommonStateChangeEffect.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET UNITYSDK_OFFSET(0x1B7F0000)
#define NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1B7EFD20)
#define NAPLEVELSTATECHANGEUV__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B7F00A0)
#define NAPLEVELSTATECHANGEUV__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F0050)

inline static constexpr unsigned int NapLevelStateChangeUV_TypeDefinitionIndex = 26583;

class NapLevelStateChangeUV : public ::INapLevel_CommonStateChangeEffect
{
public:
	static ::System::Int32* StaticGet_BaseMapUVQuadrantSwitchId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLevelStateChangeUV_TypeDefinitionIndex)->GetStaticField(0x7180);
	}
	::UnityEngine::Renderer* _targetRenderer; // 0x48
	::Il2CppArray<::UnityEngine::Material*>* _stateMaterials; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV__CCTOR_OFFSET))();
	}

	::System::Void OnStateChange(::System::Int32 from, ::System::Int32 to)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_OFFSET))(this, from, to);
	}

	::System::Void OnStateChange_1(::System::String* from, ::System::String* to)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NAPLEVELSTATECHANGEUV_ONSTATECHANGE_1_OFFSET))(this, from, to);
	}
};
