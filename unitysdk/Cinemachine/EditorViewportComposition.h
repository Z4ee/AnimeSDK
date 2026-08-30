#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION_METHOD_2_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0x156650)
#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION_METHOD_2_C21A7AC6282FB0D0_OFFSET UNITYSDK_OFFSET(0x156600)
#define CINEMACHINE_EDITORVIEWPORTCOMPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1565E0)

namespace Cinemachine
{
	inline static constexpr unsigned int EditorViewportComposition_TypeDefinitionIndex = 50062;

	struct alignas(8) EditorViewportComposition
	{
		::System::String* Name; // 0x10
		::System::Single X; // 0x18
		::System::Single Y; // 0x1C

		/*
		::System::Void _ctor(::System::String* a1, ::Cinemachine::ViewportComposition a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Cinemachine::ViewportComposition))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::UnityEngine::Vector2 Method_2_C21A7AC6282FB0D0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION_METHOD_2_C21A7AC6282FB0D0_OFFSET))(this);
		}
		*/

		/*
		::System::Void Method_2_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_EDITORVIEWPORTCOMPOSITION_METHOD_2_46D5C4F0EA172C6A_OFFSET))(this, a1);
		}
		*/
	};
}
