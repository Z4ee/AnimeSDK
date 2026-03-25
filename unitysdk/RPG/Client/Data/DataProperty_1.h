#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Data/NameID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_908;
class Class_1_1D51FC7AFB8960A3;
class Class_1_F19AB08624168191;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::Data
{
	inline static constexpr unsigned int DataProperty_1_TypeDefinitionIndex = 60195;

	template <typename T>
	class DataProperty_1 : public ::System::Object
	{
	public:
		::RPG::Client::Data::NameID _Name_k__BackingField; // 0x0
		T mValue; // 0x0
		T mOldValue; // 0x0
		::Class_1_F19AB08624168191* mModel; // 0x0
		::Class_1_1D51FC7AFB8960A3* listeners; // 0x0
	};
}
