#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGGameObject; }
namespace FluffyUnderware::Curvy::Generator { class CGGameObjectProperties; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B735E70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B735EB0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__REFRESH_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B735EC0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__REFRESH_B__7_1_OFFSET UNITYSDK_OFFSET(0x1B735FD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__WARNABOUTINVALIDINPUTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B736080)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputGameObject___c_TypeDefinitionIndex = 37416;

	class InputGameObject___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*>**)Il2CppClass::FromTypeDefinitionIndex(InputGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27860);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27868);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*, ::FluffyUnderware::Curvy::Generator::CGGameObject*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*, ::FluffyUnderware::Curvy::Generator::CGGameObject*>**)Il2CppClass::FromTypeDefinitionIndex(InputGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27870);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::InputGameObject___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::InputGameObject___c**)Il2CppClass::FromTypeDefinitionIndex(InputGameObject___c_TypeDefinitionIndex)->GetStaticField(0x27878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__7_0(::FluffyUnderware::Curvy::Generator::CGGameObjectProperties* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__REFRESH_B__7_0_OFFSET))(this, go);
		}

		::FluffyUnderware::Curvy::Generator::CGGameObject* _Refresh_b__7_1(::FluffyUnderware::Curvy::Generator::CGGameObjectProperties* go)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGGameObject*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__REFRESH_B__7_1_OFFSET))(this, go);
		}

		::System::Boolean _WarnAboutInvalidInputs_b__9_0(::FluffyUnderware::Curvy::Generator::CGGameObjectProperties* g)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGGameObjectProperties*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTGAMEOBJECT___C__WARNABOUTINVALIDINPUTS_B__9_0_OFFSET))(this, g);
		}
	};
}
