#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MDBEDITOR_MDBDEBUGDRAWCONSTRAINS__CTOR_OFFSET UNITYSDK_OFFSET(0x124210A0)

namespace MdbEditor
{
	inline static constexpr unsigned int MdbDebugDrawConstrains_TypeDefinitionIndex = 95367;

	class MdbDebugDrawConstrains : public ::System::Object
	{
	public:
		::System::Boolean DrawElastic; // 0x10
		::System::Boolean DrawRigid; // 0x11
		::System::Boolean DrawAngle; // 0x12
		::System::Boolean DrawVSmooth; // 0x13
		::System::Boolean DrawHSpring; // 0x14
		::System::Boolean DrawBackStop; // 0x15
		::System::Boolean DrawShearSpring; // 0x16
		::System::Boolean DrawBend; // 0x17
		::System::Boolean DrawVolume; // 0x18
		::System::Boolean DrawAntiFlip; // 0x19
		::System::Boolean DrawLocalRange; // 0x1A
		::System::Boolean DrawHSmooth; // 0x1B
		::System::Boolean DrawResample; // 0x1C
		::System::Boolean DrawFixSpring; // 0x1D
		::System::Boolean DrawPlanar; // 0x1E
		::System::Boolean DrawDyAngle; // 0x1F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBEDITOR_MDBDEBUGDRAWCONSTRAINS__CTOR_OFFSET))(this);
		}
	};
}
