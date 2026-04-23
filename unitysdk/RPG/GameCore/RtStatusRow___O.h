#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtStatusRow___O_TypeDefinitionIndex = 14293;

	class RtStatusRow___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusTag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::EnumStatusTag>**)Il2CppClass::FromTypeDefinitionIndex(RtStatusRow___O_TypeDefinitionIndex)->GetStaticField(0x4AD00);
		}
	};
}
