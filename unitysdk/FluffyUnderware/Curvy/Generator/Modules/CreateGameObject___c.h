#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObject; }
namespace System { template <typename T> class Action_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0BC4B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BC4F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__REFRESH_B__24_0_OFFSET UNITYSDK_OFFSET(0x1C0BC500)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int CreateGameObject___c_TypeDefinitionIndex = 37403;

	class CreateGameObject___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Generator::Modules::CreateGameObject___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::CreateGameObject___c**)Il2CppClass::FromTypeDefinitionIndex(CreateGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27720);
		}
		static ::System::Action_1<::FluffyUnderware::Curvy::Generator::CGGameObject*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::FluffyUnderware::Curvy::Generator::CGGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(CreateGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27728);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Refresh_b__24_0(::FluffyUnderware::Curvy::Generator::CGGameObject* d)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObject*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_CREATEGAMEOBJECT___C__REFRESH_B__24_0_OFFSET))(this, d);
		}
	};
}
