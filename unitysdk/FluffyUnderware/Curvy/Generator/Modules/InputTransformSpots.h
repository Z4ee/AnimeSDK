#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/Modules/InputTransformSpots_TransformSpot.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_GET_TRANSFORMSPOTS_OFFSET UNITYSDK_OFFSET(0x1E1D1140)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E1D11C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1D1190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E1D1470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1D1730)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_RESET_OFFSET UNITYSDK_OFFSET(0x1E1D11D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_SET_TRANSFORMSPOTS_OFFSET UNITYSDK_OFFSET(0x1E1D1150)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E1D1220)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D17B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS__REFRESH_B__9_1_OFFSET UNITYSDK_OFFSET(0x1E1D18F0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int InputTransformSpots_TypeDefinitionIndex = 38894;

	class InputTransformSpots : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutSpots; // 0xB8
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>* transformSpots; // 0xC0
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::Generator::CGSpot, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>* outputToInputDictionary; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>* get_TransformSpots()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_GET_TRANSFORMSPOTS_OFFSET))(this);
		}

		::System::Void set_TransformSpots(::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_SET_TRANSFORMSPOTS_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_ONDISABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_REFRESH_OFFSET))(this);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS_RESETONENABLE_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGSpot _Refresh_b__9_1(::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot s)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGSpot(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::InputTransformSpots_TransformSpot))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_INPUTTRANSFORMSPOTS__REFRESH_B__9_1_OFFSET))(this, s);
		}
	};
}
