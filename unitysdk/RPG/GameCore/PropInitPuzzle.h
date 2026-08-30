#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINITPUZZLE_METHOD_3_3D8B0ACB1D1C6C34_OFFSET UNITYSDK_OFFSET(0x1D368D50)
#define RPG_GAMECORE_PROPINITPUZZLE_METHOD_3_4064433F9001B3E2_OFFSET UNITYSDK_OFFSET(0x1D368C80)
#define RPG_GAMECORE_PROPINITPUZZLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D368D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInitPuzzle_TypeDefinitionIndex = 20129;

	class PropInitPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* BoardPath; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 LocalPosition; // 0x30
		::RPG::MVector3 LocalRotation; // 0x3C
		::RPG::MVector3 LocalScale; // 0x48
		::System::Boolean LOD; // 0x54
		::System::Boolean IsAsyncLoad; // 0x55
		::System::Boolean AutoPlayFinishSound; // 0x56
		::RPG::GameCore::DynamicString* PuzzleArea; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4064433F9001B3E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitPuzzle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitPuzzle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE_METHOD_3_4064433F9001B3E2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3D8B0ACB1D1C6C34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropInitPuzzle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE_METHOD_3_3D8B0ACB1D1C6C34_OFFSET))(a1, a2);
		}
	};
}
