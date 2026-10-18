#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_METHOD_3_98D937CBC3F5AB3D_OFFSET UNITYSDK_OFFSET(0x1D5B5AB0)
#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_METHOD_3_B1B8DCB6DAF86D25_OFFSET UNITYSDK_OFFSET(0x1D5B5AF0)
#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateCurvePropGroupPuzzle_TypeDefinitionIndex = 22255;

	class CreateCurvePropGroupPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::String* PuzzleKey; // 0x20
		::System::String* CurvePropGroupPrefabParam; // 0x28
		::System::String* CurvePropGroupPrefabPath; // 0x30
		::RPG::MVector3 Position; // 0x38
		::RPG::MVector3 Rotation; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_98D937CBC3F5AB3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_METHOD_3_98D937CBC3F5AB3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1B8DCB6DAF86D25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_METHOD_3_B1B8DCB6DAF86D25_OFFSET))(a1, a2);
		}
	};
}
