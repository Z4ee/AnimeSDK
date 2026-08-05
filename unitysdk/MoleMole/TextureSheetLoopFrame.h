#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDEREND_OFFSET UNITYSDK_OFFSET(0x14509200)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDERSTART_OFFSET UNITYSDK_OFFSET(0x14509160)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_ISEND_OFFSET UNITYSDK_OFFSET(0x14509250)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_NEXTLOOP_OFFSET UNITYSDK_OFFSET(0x145092B0)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_RESET_OFFSET UNITYSDK_OFFSET(0x145091B0)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x145092F0)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x14509650)
#define MOLEMOLE_TEXTURESHEETLOOPFRAME___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14509660)

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetLoopFrame_TypeDefinitionIndex = 83628;

	class TextureSheetLoopFrame : public ::System::Object
	{
	public:
		::System::Int32 loopCount; // 0x10
		::System::Int32 endFrame; // 0x14
		::System::Int32 startFrame; // 0x18
		::System::Int32 curLoopCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME__CTOR_OFFSET))(this);
		}

		::System::Boolean ColliderStart(::System::Int32 frameIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDERSTART_OFFSET))(this, frameIndex);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_RESET_OFFSET))(this);
		}

		::System::Boolean ColliderEnd(::System::Int32 frameIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_COLLIDEREND_OFFSET))(this, frameIndex);
		}

		::System::Boolean IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_ISEND_OFFSET))(this);
		}

		::System::Void NextLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_NEXTLOOP_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TEXTURESHEETLOOPFRAME___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
