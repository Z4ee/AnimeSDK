#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGShape; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_GET_MIX_OFFSET UNITYSDK_OFFSET(0x1DC90500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1DC90570)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_INTERPOLATESHAPE_OFFSET UNITYSDK_OFFSET(0x1DC90CE0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_MIXSHAPES_OFFSET UNITYSDK_OFFSET(0x1DC90C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DC90850)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1DC90A10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_RESET_OFFSET UNITYSDK_OFFSET(0x1DC909C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_SET_MIX_OFFSET UNITYSDK_OFFSET(0x1DC90510)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC91E90)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierMixShapes_TypeDefinitionIndex = 38980;

	class ModifierMixShapes : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		// static const ::System::Int32 MixMinValue = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MixMaxValue = 0x1; // 0x0
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InShapeA; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InShapeB; // 0xC0
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutShape; // 0xC8
		::System::Single m_Mix; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES__CTOR_OFFSET))(this);
		}

		::System::Single get_Mix()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_GET_MIX_OFFSET))(this);
		}

		::System::Void set_Mix(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_SET_MIX_OFFSET))(this, value);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_GET_PATHISCLOSED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_RESET_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		static ::FluffyUnderware::Curvy::Generator::CGShape* MixShapes(::FluffyUnderware::Curvy::Generator::CGShape* shapeA, ::FluffyUnderware::Curvy::Generator::CGShape* shapeB, ::System::Single mix, ::System::Collections::Generic::List_1<::System::String*>* warningsContainer, ::System::Boolean ignoreWarnings)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGShape*(*)(::FluffyUnderware::Curvy::Generator::CGShape*, ::FluffyUnderware::Curvy::Generator::CGShape*, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_MIXSHAPES_OFFSET))(shapeA, shapeB, mix, warningsContainer, ignoreWarnings);
		}

		static ::System::Void InterpolateShape(::FluffyUnderware::Curvy::Generator::CGShape* resultShape, ::FluffyUnderware::Curvy::Generator::CGShape* shapeA, ::FluffyUnderware::Curvy::Generator::CGShape* shapeB, ::System::Single mix, ::System::Collections::Generic::List_1<::System::String*>* warningsContainer, ::System::Boolean ignoreWarnings)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGShape*, ::FluffyUnderware::Curvy::Generator::CGShape*, ::FluffyUnderware::Curvy::Generator::CGShape*, ::System::Single, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERMIXSHAPES_INTERPOLATESHAPE_OFFSET))(resultShape, shapeA, shapeB, mix, warningsContainer, ignoreWarnings);
		}
	};
}
