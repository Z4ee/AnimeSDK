#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class PropComponent; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_7CE32ADB98EEB758_METHOD_2_3F99006CDD1EA2F9_OFFSET UNITYSDK_OFFSET(0x10A24DE0)
#define CLASS_2_7CE32ADB98EEB758_METHOD_2_457152A8EDC72C42_OFFSET UNITYSDK_OFFSET(0x10A24E70)
#define CLASS_2_7CE32ADB98EEB758_METHOD_2_726265D0FC493953_OFFSET UNITYSDK_OFFSET(0x10A250A0)
#define CLASS_2_7CE32ADB98EEB758_METHOD_2_B499521A6EA8B3EB_OFFSET UNITYSDK_OFFSET(0x10A24C50)
#define CLASS_2_7CE32ADB98EEB758_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x10A24980)
#define CLASS_2_7CE32ADB98EEB758_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10A24BF0)
#define CLASS_2_7CE32ADB98EEB758__CTOR_OFFSET UNITYSDK_OFFSET(0x10A25150)
#define CLASS_2_7CE32ADB98EEB758___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x10A25160)
#define CLASS_2_7CE32ADB98EEB758___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x10A25170)

inline static constexpr unsigned int Class_2_7CE32ADB98EEB758_TypeDefinitionIndex = 38774;

class Class_2_7CE32ADB98EEB758 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::PropComponent*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F99006CDD1EA2F9(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_METHOD_2_3F99006CDD1EA2F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B499521A6EA8B3EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_METHOD_2_B499521A6EA8B3EB_OFFSET))(this);
	}

	::System::Void Method_2_457152A8EDC72C42(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_METHOD_2_457152A8EDC72C42_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_726265D0FC493953(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758_METHOD_2_726265D0FC493953_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7CE32ADB98EEB758___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
