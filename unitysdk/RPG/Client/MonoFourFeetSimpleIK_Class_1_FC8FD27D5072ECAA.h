#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1ACD9CA0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1ACD9530)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD8E40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA_TypeDefinitionIndex = 68560;

	class MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA : public ::System::Object
	{
	public:
		::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* DICDJJOJKGF; // 0x10
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x18
		::System::Single APAKCBFMCAB; // 0x20
		::UnityEngine::Quaternion DGKOGKGKHJG; // 0x24

		::System::Void _ctor(::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_1290EA767C459179_OFFSET))(this);
		}
	};
}
