#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyBlockAttachmentType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AlleyBaseGridItemData; }

#define CLASS_1_6945A1468A989492_METHOD_1_5B9DE50A7B6EEBA8_OFFSET UNITYSDK_OFFSET(0xA1DD350)
#define CLASS_1_6945A1468A989492__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DD3D0)

inline static constexpr unsigned int Class_1_6945A1468A989492_TypeDefinitionIndex = 50605;

class Class_1_6945A1468A989492 : public ::System::Object
{
public:
	::RPG::Client::AlleyBlockAttachmentType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6945A1468A989492__CTOR_OFFSET))(this);
	}

	static ::Class_1_6945A1468A989492* Method_1_5B9DE50A7B6EEBA8(::RPG::GameCore::AlleyBaseGridItemData* a1)
	{
		return ((::Class_1_6945A1468A989492*(*)(::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + CLASS_1_6945A1468A989492_METHOD_1_5B9DE50A7B6EEBA8_OFFSET))(a1);
	}
};
