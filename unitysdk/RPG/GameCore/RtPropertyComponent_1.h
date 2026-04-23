#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtPropertyCategory.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"

class Class_0_16E4307DCC419505_407;
class Class_0_16E4307DCC419505_431;
class Class_1_0BB31ECC72CE354E;
class Class_1_11F507CAFD9CD2DF;
class Class_1_3569F7AE44E6C700;
class Class_1_5CD564F3468A97F6;
class Class_1_A58651510BF6ACD7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { template <typename T> class RtPropertyComponent_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPropertyComponent_1_TypeDefinitionIndex = 49791;

	template <typename TProperty>
	class RtPropertyComponent_1 : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::RtPropertyComponent_1<TProperty>* _PropertyFollowTarget; // 0x0
		static ::Class_1_0BB31ECC72CE354E** StaticGet_PropertyDescTable()
		{
			return (::Class_1_0BB31ECC72CE354E**)Il2CppClass::FromTypeDefinitionIndex(RtPropertyComponent_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Class_1_5CD564F3468A97F6* _Mgr; // 0x0
		::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* _Properties; // 0x0
		::Class_1_3569F7AE44E6C700* _AnyPropertyListeners; // 0x0
	};
}
