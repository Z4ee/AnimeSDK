#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98FD5665AA08A0E4_ValueModifyType.h"
#include "unitysdk/RPG/Client/ParkourGame/EModifyEngineFlags.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int Class_1_98FD5665AA08A0E4_ValueStack_1_TypeDefinitionIndex = 74094;

template <typename T>
class Class_1_98FD5665AA08A0E4_ValueStack_1 : public ::System::Object
{
public:
	::Class_1_98FD5665AA08A0E4_ValueModifyType ModifyType; // 0x0
	T Value; // 0x0
	::System::Int32 Priority; // 0x0
	::System::Single Duration; // 0x0
	::RPG::Client::ParkourGame::EModifyEngineFlags Flags; // 0x0
};
