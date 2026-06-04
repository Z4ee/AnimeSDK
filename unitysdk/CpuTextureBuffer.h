#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Texture2D; }

#define CPUTEXTUREBUFFER_GET_DATACOUNT_OFFSET UNITYSDK_OFFSET(0xC755BC0)
#define CPUTEXTUREBUFFER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xC755BB0)
#define CPUTEXTUREBUFFER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xC755BA0)
#define CPUTEXTUREBUFFER_METHOD_3_053D00406C3D70A8_OFFSET UNITYSDK_OFFSET(0xC755C80)
#define CPUTEXTUREBUFFER_METHOD_3_5DE9667DA47C9DE0_OFFSET UNITYSDK_OFFSET(0xC755E10)
#define CPUTEXTUREBUFFER_METHOD_3_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0xC756010)
#define CPUTEXTUREBUFFER_METHOD_3_9FE4AB7E2BDAE9CB_OFFSET UNITYSDK_OFFSET(0xC755C10)
#define CPUTEXTUREBUFFER_METHOD_3_BA7EA81739AE87D6_OFFSET UNITYSDK_OFFSET(0xC756090)
#define CPUTEXTUREBUFFER_METHOD_3_E88B5CB549D7264A_OFFSET UNITYSDK_OFFSET(0xC755EE0)
#define CPUTEXTUREBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xC756350)

inline static constexpr unsigned int CpuTextureBuffer_TypeDefinitionIndex = 44776;

class CpuTextureBuffer : public ::UnityEngine::ScriptableObject
{
public:
	::System::Int32 width; // 0x18
	::System::Int32 height; // 0x1C
	::Il2CppArray<::System::Single>* data; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Width()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_WIDTH_OFFSET))(this);
	}

	::System::Int32 get_Height()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_HEIGHT_OFFSET))(this);
	}

	::System::Int32 get_DataCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_GET_DATACOUNT_OFFSET))(this);
	}

	::System::Single Method_3_9FE4AB7E2BDAE9CB(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_9FE4AB7E2BDAE9CB_OFFSET))(this, a1);
	}

	::System::Void Method_3_053D00406C3D70A8(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_053D00406C3D70A8_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_5DE9667DA47C9DE0(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_5DE9667DA47C9DE0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_E88B5CB549D7264A(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_E88B5CB549D7264A_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_3_BA7EA81739AE87D6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPUTEXTUREBUFFER_METHOD_3_BA7EA81739AE87D6_OFFSET))(this, a1, a2);
	}
};
