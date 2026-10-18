#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETDIYSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAC5FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PetDiyStatic_TypeDefinitionIndex = 66414;

	class PetDiyStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_UnlockTrainDiySubMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PetDiyStatic_TypeDefinitionIndex)->GetStaticField(0x23A0);
		}
		static ::System::UInt32* StaticGet_PreMissionGotoID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PetDiyStatic_TypeDefinitionIndex)->GetStaticField(0x23A4);
		}
		static ::System::UInt32* StaticGet_PreMissionID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PetDiyStatic_TypeDefinitionIndex)->GetStaticField(0x23A8);
		}
		static ::System::UInt32* StaticGet_ContentID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PetDiyStatic_TypeDefinitionIndex)->GetStaticField(0x23AC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIYSTATIC__CCTOR_OFFSET))();
		}
	};
}
