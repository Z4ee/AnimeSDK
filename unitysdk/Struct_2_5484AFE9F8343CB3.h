#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_5484AFE9F8343CB3_METHOD_2_3CE83AC3C1D9309E_OFFSET UNITYSDK_OFFSET(0x81C880)
#define STRUCT_2_5484AFE9F8343CB3_METHOD_2_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0x81C800)
#define STRUCT_2_5484AFE9F8343CB3_METHOD_2_D5F6040B75386962_OFFSET UNITYSDK_OFFSET(0x81C730)
#define STRUCT_2_5484AFE9F8343CB3_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x632260)

inline static constexpr unsigned int Struct_2_5484AFE9F8343CB3_TypeDefinitionIndex = 74183;

struct alignas(8) Struct_2_5484AFE9F8343CB3
{
	::MoleMole::EAvatarLightChangeType Field_2_2; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::UnityEngine::Quaternion Field_2_7; // 0x1C
	::UnityEngine::Quaternion Field_2_6; // 0x2C
	::UnityEngine::Quaternion Field_2_5; // 0x3C
	::UnityEngine::Quaternion Field_2_4; // 0x4C
	::UnityEngine::Vector4 Field_2_11; // 0x5C
	::UnityEngine::AnimationCurve* Field_2_10; // 0x70

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5484AFE9F8343CB3_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> Method_2_D5F6040B75386962(::MoleMole::EAvatarLightChangeType a1, ::System::Single a2, ::System::String* a3, ::UnityEngine::Vector4 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Quaternion a6, ::UnityEngine::Quaternion a7, ::UnityEngine::Quaternion a8)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_5484AFE9F8343CB3_METHOD_2_D5F6040B75386962_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}
	*/

	::System::Single Method_2_570C5557A774C69E(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_5484AFE9F8343CB3_METHOD_2_570C5557A774C69E_OFFSET))(this, a1);
	}

	/*
	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> Method_2_3CE83AC3C1D9309E(::System::Single a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_5484AFE9F8343CB3_METHOD_2_3CE83AC3C1D9309E_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
