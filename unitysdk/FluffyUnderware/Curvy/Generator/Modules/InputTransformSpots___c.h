#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/InputTransformSpots_TransformSpot.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C17C240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17C280)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__REFRESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C17C290)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputTransformSpots___c_TypeDefinitionIndex = 37424;

	class InputTransformSpots___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputTransformSpots___c_TypeDefinitionIndex)->GetStaticField(0x27920);
		}
		static ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots___c**)Il2CppClass::FromTypeDefinitionIndex(InputTransformSpots___c_TypeDefinitionIndex)->GetStaticField(0x27928);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Refresh_b__9_0(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS___C__REFRESH_B__9_0_OFFSET))(this, s);
		}
	};
}
