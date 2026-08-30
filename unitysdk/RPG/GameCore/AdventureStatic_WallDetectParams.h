#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTURESTATIC_WALLDETECTPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xE50DA20)
#define RPG_GAMECORE_ADVENTURESTATIC_WALLDETECTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0xE50C810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureStatic_WallDetectParams_TypeDefinitionIndex = 59165;

	class AdventureStatic_WallDetectParams : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AdventureStatic_WallDetectParams** StaticGet_Default()
		{
			return (::RPG::GameCore::AdventureStatic_WallDetectParams**)Il2CppClass::FromTypeDefinitionIndex(AdventureStatic_WallDetectParams_TypeDefinitionIndex)->GetStaticField(0x666A0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* ExcludeTransformList; // 0x10
		::System::Single StartHeight; // 0x18
		::System::Single HeightStep; // 0x1C
		::System::Int32 Count; // 0x20
		::System::Single MaxSlopeAngle; // 0x24
		::System::Single LineLength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC_WALLDETECTPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESTATIC_WALLDETECTPARAMS__CCTOR_OFFSET))();
		}
	};
}
