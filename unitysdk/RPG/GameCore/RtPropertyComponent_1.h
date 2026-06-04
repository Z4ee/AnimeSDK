#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/RtPropertyCategory.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"

class Class_0_16E4307DCC419505_426;
class Class_0_16E4307DCC419505_450;
class Class_1_11F507CAFD9CD2DF;
class Class_1_48915F5411A078DF;
class Class_1_AEC4D667AA9BE4FB;
class Class_1_DFF28B1BAA582E14;
class Class_1_FCABDE96CA4DD443;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { template <typename T> class RtPropertyComponent_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPropertyComponent_1_TypeDefinitionIndex = 50458;

	template <typename TProperty>
	class RtPropertyComponent_1 : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::RtPropertyComponent_1<TProperty>* _PropertyFollowTarget; // 0x0
		static ::Class_1_AEC4D667AA9BE4FB** StaticGet_PropertyDescTable()
		{
			return (::Class_1_AEC4D667AA9BE4FB**)Il2CppClass::FromTypeDefinitionIndex(RtPropertyComponent_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Class_1_48915F5411A078DF* _Mgr; // 0x0
		::Il2CppArray<::Class_1_11F507CAFD9CD2DF*>* _Properties; // 0x0
		::Class_1_FCABDE96CA4DD443* _AnyPropertyListeners; // 0x0
	};
}
