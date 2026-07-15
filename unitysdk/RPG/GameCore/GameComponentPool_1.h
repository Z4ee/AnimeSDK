#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E3507BF38527E36E;
namespace RPG::GameCore { template <typename T> class GameComponentPool_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameComponentPool_1_TypeDefinitionIndex = 55001;

	template <typename T>
	class GameComponentPool_1 : public ::System::Object
	{
	public:
		::System::Byte componentIsAutoReset; // 0x0
		::Class_1_E3507BF38527E36E* componentLinkedList; // 0x0
		::System::Boolean UsePoolCache; // 0x0
		::Class_1_E3507BF38527E36E* componentLinkedList_Cached; // 0x0
		::System::Int32 lastMoveCachedFrameCount; // 0x0
		// static const ::System::Int32 CACHED_FRAME_COUNT = 0x96; // 0x0
		static ::RPG::GameCore::GameComponentPool_1<T>** StaticGet_instance()
		{
			return (::RPG::GameCore::GameComponentPool_1<T>**)Il2CppClass::FromTypeDefinitionIndex(GameComponentPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
