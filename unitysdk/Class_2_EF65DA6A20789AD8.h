#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class AnimatorClipOverride; }
namespace RPG::Client { class AnimatorClipOverride_AnimClipOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_EF65DA6A20789AD8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CB74A0)
#define CLASS_2_EF65DA6A20789AD8_METHOD_2_08CBEB76D2F70234_OFFSET UNITYSDK_OFFSET(0x8CB7040)
#define CLASS_2_EF65DA6A20789AD8_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8CB7620)
#define CLASS_2_EF65DA6A20789AD8_METHOD_2_91F856A663C367AA_OFFSET UNITYSDK_OFFSET(0x8CB6DC0)
#define CLASS_2_EF65DA6A20789AD8_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x8CB70B0)
#define CLASS_2_EF65DA6A20789AD8__CTOR_OFFSET UNITYSDK_OFFSET(0x8CB7590)
#define CLASS_2_EF65DA6A20789AD8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CB7690)

inline static constexpr unsigned int Class_2_EF65DA6A20789AD8_TypeDefinitionIndex = 57597;

class Class_2_EF65DA6A20789AD8 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AnimatorClipOverride_AnimClipOverride*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_91F856A663C367AA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8_METHOD_2_91F856A663C367AA_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::RPG::Client::AnimatorClipOverride* Method_2_08CBEB76D2F70234()
	{
		return ((::RPG::Client::AnimatorClipOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8_METHOD_2_08CBEB76D2F70234_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF65DA6A20789AD8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
