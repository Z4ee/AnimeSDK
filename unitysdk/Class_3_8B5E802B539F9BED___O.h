#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

inline static constexpr unsigned int Class_3_8B5E802B539F9BED___O_TypeDefinitionIndex = 55390;

class Class_3_8B5E802B539F9BED___O : public ::System::Object
{
public:
	static ::System::Func_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>** StaticGet__0____CalcActionDelayModify()
	{
		return (::System::Func_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_8B5E802B539F9BED___O_TypeDefinitionIndex)->GetStaticField(0x65100);
	}
};
