#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Observer_1.h"
#include "unitysdk/R3/Result.h"

class Class_0_16E4307DCC419505_321;
class Class_1_5F1B5D6380BD40EB;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::Client { class TabView; }
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }

inline static constexpr unsigned int Class_2_759C70ADFFDA598E_TypeDefinitionIndex = 50194;

template <typename TTabVM>
class Class_2_759C70ADFFDA598E : public ::R3::Observer_1<TTabVM>
{
public:
	::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* CDLBHDFLHJA; // 0x0
	::Class_0_16E4307DCC419505_321* JKCNFDEAMDJ; // 0x0
	::RPG::Client::TabView* PEOHNLJEFLJ; // 0x0
	::R3::ReactiveProperty_1<TTabVM>* AGFAPPGGKMA; // 0x0
	::System::Boolean JGBDJCKDILB; // 0x0
	::System::Boolean NIPEOCFHONM; // 0x0
};
