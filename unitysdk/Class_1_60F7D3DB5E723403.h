#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_1_60F7D3DB5E723403_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1477DE50)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_446C775535A3BC7F_OFFSET UNITYSDK_OFFSET(0x1477EA00)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_49AA86D9F19FB057_OFFSET UNITYSDK_OFFSET(0x1477DEB0)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1477E810)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_5F044BDFBB3E0204_OFFSET UNITYSDK_OFFSET(0x1477F580)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_5F20CC84DF90008D_OFFSET UNITYSDK_OFFSET(0x1477F180)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_6E371F7870BE8E38_OFFSET UNITYSDK_OFFSET(0x1477E5D0)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_71AB010B5C68C5BF_OFFSET UNITYSDK_OFFSET(0x1477F500)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_88757EC8AF32792B_OFFSET UNITYSDK_OFFSET(0x1477E190)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x1477F060)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x1477E070)
#define CLASS_1_60F7D3DB5E723403_METHOD_1_D1D4E84315AC2ED7_OFFSET UNITYSDK_OFFSET(0x1477EFD0)
#define CLASS_1_60F7D3DB5E723403__CTOR_OFFSET UNITYSDK_OFFSET(0x1477DEA0)

inline static constexpr unsigned int Class_1_60F7D3DB5E723403_TypeDefinitionIndex = 44999;

class Class_1_60F7D3DB5E723403 : public ::System::Object
{
public:
	::DG::Tweening::Tween* Field_1_0; // 0x10
	::UnityEngine::Rendering::Universal::FXFog* Field_1_2; // 0x18
	::DG::Tweening::Tween* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_49AA86D9F19FB057(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_49AA86D9F19FB057_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_88757EC8AF32792B(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_88757EC8AF32792B_OFFSET))(this, a1);
	}

	::System::Void Method_1_446C775535A3BC7F(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_446C775535A3BC7F_OFFSET))(this, a1, a2);
	}

	static ::Class_1_60F7D3DB5E723403* Method_1_D1D4E84315AC2ED7(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::Class_1_60F7D3DB5E723403*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_D1D4E84315AC2ED7_OFFSET))(a1);
	}

	::System::Void Method_1_6E371F7870BE8E38(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_6E371F7870BE8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_1_5F20CC84DF90008D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_5F20CC84DF90008D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F044BDFBB3E0204(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_5F044BDFBB3E0204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71AB010B5C68C5BF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_60F7D3DB5E723403_METHOD_1_71AB010B5C68C5BF_OFFSET))(this, a1, a2);
	}
};
