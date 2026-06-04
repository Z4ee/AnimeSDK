#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Light; }

#define STRUCT_2_FB7FD3F7A6A85D5E_STRUCT_2_259EE8EAF7752DD4_METHOD_2_6253F98A9BE81EBE_OFFSET UNITYSDK_OFFSET(0x854B0)
#define STRUCT_2_FB7FD3F7A6A85D5E_STRUCT_2_259EE8EAF7752DD4_METHOD_2_EB0314EC8A2C68C0_OFFSET UNITYSDK_OFFSET(0x854C0)

inline static constexpr unsigned int Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4_TypeDefinitionIndex = 65236;

struct alignas(4) Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Color Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x2C

	::System::Boolean Method_2_6253F98A9BE81EBE(::UnityEngine::Light* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_STRUCT_2_259EE8EAF7752DD4_METHOD_2_6253F98A9BE81EBE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_EB0314EC8A2C68C0(::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FB7FD3F7A6A85D5E_Struct_2_259EE8EAF7752DD4))((::PBYTE)hIl2Cpp + STRUCT_2_FB7FD3F7A6A85D5E_STRUCT_2_259EE8EAF7752DD4_METHOD_2_EB0314EC8A2C68C0_OFFSET))(this, a1);
	}
};
