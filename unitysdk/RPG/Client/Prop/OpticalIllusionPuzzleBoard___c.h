#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE75AB0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAE75AF0)
#define RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0xAE75B00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex = 72201;

	class OpticalIllusionPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0xC520);
		}
		static ::RPG::Client::Prop::OpticalIllusionPuzzleBoard___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::OpticalIllusionPuzzleBoard___c**)Il2CppClass::FromTypeDefinitionIndex(OpticalIllusionPuzzleBoard___c_TypeDefinitionIndex)->GetStaticField(0xC528);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__CTOR_OFFSET))(this);
		}

		::System::Void _Dispose_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_OPTICALILLUSIONPUZZLEBOARD___C__DISPOSE_B__2_0_OFFSET))(this);
		}
	};
}
