#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7A4D3608A08D50F9_Struct_2_5396005F9A53A130.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7A4D3608A08D50F9_GET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x11637F90)
#define CLASS_2_7A4D3608A08D50F9_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x11637FB0)
#define CLASS_2_7A4D3608A08D50F9_SET_SOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x11637FA0)
#define CLASS_2_7A4D3608A08D50F9__CTOR_OFFSET UNITYSDK_OFFSET(0x116381F0)
#define CLASS_2_7A4D3608A08D50F9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x11638200)

inline static constexpr unsigned int Class_2_7A4D3608A08D50F9_TypeDefinitionIndex = 39599;

class Class_2_7A4D3608A08D50F9 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_7A4D3608A08D50F9_Struct_2_5396005F9A53A130>* Field_2_0; // 0x10
	::UnityEngine::GameObject* _SourceObject_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A4D3608A08D50F9__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_SourceObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A4D3608A08D50F9_GET_SOURCEOBJECT_OFFSET))(this);
	}

	::System::Void set_SourceObject(::UnityEngine::GameObject* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_7A4D3608A08D50F9_SET_SOURCEOBJECT_OFFSET))(this, value);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7A4D3608A08D50F9_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_7A4D3608A08D50F9___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}
};
