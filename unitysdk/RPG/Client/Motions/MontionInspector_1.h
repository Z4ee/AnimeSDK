#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client::Motions { class MonoMontionInspector; }
namespace RPG::Client::Motions { template <typename T> class MontionInspector_1; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int MontionInspector_1_TypeDefinitionIndex = 73386;

	template <typename T>
	class MontionInspector_1 : public ::Class_3_3F1B1DE9D9F51912
	{
	public:
		T _innerMotion; // 0x0
		::RPG::Client::Motions::MonoMontionInspector* _inspector; // 0x0
	};
}
