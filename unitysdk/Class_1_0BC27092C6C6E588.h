#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_1_0BC27092C6C6E588_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AEE5B0)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_22979A281ED046FD_OFFSET UNITYSDK_OFFSET(0x17AEEAE0)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_468CB284F6163696_OFFSET UNITYSDK_OFFSET(0x17AEF940)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x17AEEE60)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_5F20CC84DF90008D_OFFSET UNITYSDK_OFFSET(0x17AEF690)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_6E371F7870BE8E38_OFFSET UNITYSDK_OFFSET(0x17AEF450)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_71AB010B5C68C5BF_OFFSET UNITYSDK_OFFSET(0x17AEEDE0)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_88757EC8AF32792B_OFFSET UNITYSDK_OFFSET(0x17AEE6A0)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x17AEF330)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x17AEF210)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x17AEF020)
#define CLASS_1_0BC27092C6C6E588_METHOD_1_D1D4E84315AC2ED7_OFFSET UNITYSDK_OFFSET(0x17AEE610)
#define CLASS_1_0BC27092C6C6E588__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEE600)

inline static constexpr unsigned int Class_1_0BC27092C6C6E588_TypeDefinitionIndex = 65947;

class Class_1_0BC27092C6C6E588 : public ::System::Object
{
public:
	::UnityEngine::Rendering::Universal::FXFog* Field_1_0; // 0x10
	::DG::Tweening::Tween* Field_1_1; // 0x18
	::DG::Tweening::Tween* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_DISPOSE_OFFSET))(this);
	}

	static ::Class_1_0BC27092C6C6E588* Method_1_D1D4E84315AC2ED7(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::Class_1_0BC27092C6C6E588*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_D1D4E84315AC2ED7_OFFSET))(a1);
	}

	::System::Void Method_1_22979A281ED046FD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_22979A281ED046FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D0DF0505F244B465()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_D0DF0505F244B465_OFFSET))(this);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_88757EC8AF32792B(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_88757EC8AF32792B_OFFSET))(this, a1);
	}

	::System::Void Method_1_71AB010B5C68C5BF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_71AB010B5C68C5BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F20CC84DF90008D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_5F20CC84DF90008D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void Method_1_468CB284F6163696(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_468CB284F6163696_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E371F7870BE8E38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BC27092C6C6E588_METHOD_1_6E371F7870BE8E38_OFFSET))(this, a1);
	}
};
