#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG::Client::LittleGame { template <typename T> class SimpleCameraService_1; }
namespace RPG::Client::LittleGame { template <typename T> class SimpleCameraService_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleCameraService_1___c_TypeDefinitionIndex = 71094;

	template <typename TEntity>
	class SimpleCameraService_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::SimpleCameraService_1___c<TEntity>** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::SimpleCameraService_1___c<TEntity>**)Il2CppClass::FromTypeDefinitionIndex(SimpleCameraService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::RPG::Client::LittleGame::SimpleCameraService_1<TEntity>*, ::System::ValueTuple_3<TEntity, ::System::String*, ::Struct_2_9BF8902D61AE1796>>** StaticGet___9__3_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::SimpleCameraService_1<TEntity>*, ::System::ValueTuple_3<TEntity, ::System::String*, ::Struct_2_9BF8902D61AE1796>>**)Il2CppClass::FromTypeDefinitionIndex(SimpleCameraService_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
