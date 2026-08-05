#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

inline static constexpr unsigned int Class_1_0FD6EDFD42826970_2_Class_1_8266EBA2A9A9C6CA_TypeDefinitionIndex = 85779;

template <typename T>
class Class_1_0FD6EDFD42826970_2_Class_1_8266EBA2A9A9C6CA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_2; // 0x0
	::System::String* Field_1_1; // 0x0
	::MoleMole::FlowCanvas::Nodes::AIParamType Field_1_0; // 0x0
	T Field_1_7; // 0x0
	::MoleMole::Config::PropertyModifyFunction Field_1_6; // 0x0
};
