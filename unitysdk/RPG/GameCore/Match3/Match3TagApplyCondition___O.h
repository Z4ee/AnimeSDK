#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"

template <typename T> class Class_1_F5630E87DACEF386_DelegateParseBinary_1;

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3TagApplyCondition___O_TypeDefinitionIndex = 22770;

	class Match3TagApplyCondition___O : public ::System::Object
	{
	public:
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceTag>** StaticGet__1___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::PieceTag>**)Il2CppClass::FromTypeDefinitionIndex(Match3TagApplyCondition___O_TypeDefinitionIndex)->GetStaticField(0x281B0);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::GridTag>** StaticGet__2___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::GridTag>**)Il2CppClass::FromTypeDefinitionIndex(Match3TagApplyCondition___O_TypeDefinitionIndex)->GetStaticField(0x281B8);
		}
		static ::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BombType>** StaticGet__0___FromBinary()
		{
			return (::Class_1_F5630E87DACEF386_DelegateParseBinary_1<::RPG::GameCore::Match3::BombType>**)Il2CppClass::FromTypeDefinitionIndex(Match3TagApplyCondition___O_TypeDefinitionIndex)->GetStaticField(0x281C0);
		}
	};
}
