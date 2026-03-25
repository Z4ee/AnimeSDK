#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IGamePhase; }
namespace System { class Action; }

#define CLASS_1_F65FD1783A40C6D8_CLASS_1_F9D0D949D4DE2864__CTOR_OFFSET UNITYSDK_OFFSET(0x10B5DF60)

inline static constexpr unsigned int Class_1_F65FD1783A40C6D8_Class_1_F9D0D949D4DE2864_TypeDefinitionIndex = 62063;

class Class_1_F65FD1783A40C6D8_Class_1_F9D0D949D4DE2864 : public ::System::Object
{
public:
	::System::Object* Field_1_1; // 0x10
	::System::Action* Field_1_2; // 0x18
	::RPG::Client::ChenLingBattle::IGamePhase* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65FD1783A40C6D8_CLASS_1_F9D0D949D4DE2864__CTOR_OFFSET))(this);
	}
};
