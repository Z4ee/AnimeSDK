#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ED17B6CCBE9C897A;
namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1ACD93D0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x1ACD9BB0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x1ACDA100)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD8D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_Class_1_8EF1E1A464863438_TypeDefinitionIndex = 68559;

	class MonoFourFeetSimpleIK_Class_1_8EF1E1A464863438 : public ::System::Object
	{
	public:
		::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* DICDJJOJKGF; // 0x10
		::Class_1_ED17B6CCBE9C897A* PCKJJLKKAHK; // 0x18
		::UnityEngine::Vector3 FCABOCNPAEB; // 0x20

		::System::Void _ctor(::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
		}

		::System::Void Method_1_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_1_8A8F4D8840527053()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_8EF1E1A464863438_METHOD_1_8A8F4D8840527053_OFFSET))(this);
		}
	};
}
