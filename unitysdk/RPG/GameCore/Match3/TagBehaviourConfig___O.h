#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TagBehaviourConfig___O_TypeDefinitionIndex = 23759;

	class TagBehaviourConfig___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::GridTag>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::GridTag>**)Il2CppClass::FromTypeDefinitionIndex(TagBehaviourConfig___O_TypeDefinitionIndex)->GetStaticField(0x34380);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceTag>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceTag>**)Il2CppClass::FromTypeDefinitionIndex(TagBehaviourConfig___O_TypeDefinitionIndex)->GetStaticField(0x34388);
		}
	};
}
