#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_38CB396D65CE8ADD.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_89FA85F885C5EC3D_METHOD_3_6BF0B1C95F527C3E_OFFSET UNITYSDK_OFFSET(0x129E8870)
#define CLASS_3_89FA85F885C5EC3D_METHOD_3_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x129E89B0)
#define CLASS_3_89FA85F885C5EC3D_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x129E8740)
#define CLASS_3_89FA85F885C5EC3D_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x129E87D0)
#define CLASS_3_89FA85F885C5EC3D__CTOR_OFFSET UNITYSDK_OFFSET(0x129E8A00)
#define CLASS_3_89FA85F885C5EC3D___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x129E8A10)
#define CLASS_3_89FA85F885C5EC3D___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x129E8A20)

inline static constexpr unsigned int Class_3_89FA85F885C5EC3D_TypeDefinitionIndex = 44737;

class Class_3_89FA85F885C5EC3D : public ::Class_2_38CB396D65CE8ADD
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Boolean Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_6BF0B1C95F527C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D_METHOD_3_6BF0B1C95F527C3E_OFFSET))(this);
	}

	::System::Void Method_3_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D_METHOD_3_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_89FA85F885C5EC3D___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, P0);
	}
};
