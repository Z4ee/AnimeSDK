#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellDirection.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCell___O_TypeDefinitionIndex = 15373;

	class MonopolyMapCell___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyCellDirection>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::MonopolyCellDirection>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyMapCell___O_TypeDefinitionIndex)->GetStaticField(0x3EBA0);
		}
	};
}
