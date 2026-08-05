#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGOVERLORDFEAST__CTOR_OFFSET UNITYSDK_OFFSET(0x13505370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverlordFeast_TypeDefinitionIndex = 74076;

	class ConfigOverlordFeast : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single GridWidth; // 0x58
		::System::Single GridHeight; // 0x5C
		::System::Int32 PlateWidth; // 0x60
		::System::Int32 PlateHeight; // 0x64
		::System::Single ValidDishlapRate; // 0x68
		::System::Single DragEnableRate; // 0x6C
		::System::Single GamepadMoveVertical; // 0x70
		::System::Single GamepadMoveHorizontal; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERLORDFEAST__CTOR_OFFSET))(this);
		}
	};
}
