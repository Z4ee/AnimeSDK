#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/QuickGraph/Algorithm/AlgorithmBase_1.h"

class Class_0_16E4307DCC419505_45;
namespace System { class EventArgs; }
namespace System { class EventHandler; }

inline static constexpr unsigned int Class_2_91CA132C22E737F0_TypeDefinitionIndex = 28264;

template <typename TVertex, typename TGraph>
class Class_2_91CA132C22E737F0 : public ::MoleMole::QuickGraph::Algorithm::AlgorithmBase_1<TGraph>
{
public:
	TVertex Field_2_0; // 0x0
	::System::Boolean Field_2_1; // 0x0
	TVertex Field_2_2; // 0x0
	::System::Boolean Field_2_3; // 0x0
	::System::EventHandler* Field_2_4; // 0x0
};
