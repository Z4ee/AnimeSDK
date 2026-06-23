#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGDataRequestParameter; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace UnityEngine { class AnimationCurve; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E1D1B80)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_LATERALTRANSLATION_OFFSET UNITYSDK_OFFSET(0x1E1D1B30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1E1D1BF0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_PATHISCLOSED_OFFSET UNITYSDK_OFFSET(0x1E1D1C40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1D2360)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONSLOTDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1E1D1D90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E1D2480)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_RESET_OFFSET UNITYSDK_OFFSET(0x1E1D23A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E1D1B90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_LATERALTRANSLATION_OFFSET UNITYSDK_OFFSET(0x1E1D1B40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1E1D1C00)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_TRANSLATEPOINT_OFFSET UNITYSDK_OFFSET(0x1E1D2000)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D24E0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierPathRelativeTranslation_TypeDefinitionIndex = 39003;

	class ModifierPathRelativeTranslation : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InPath; // 0xB8
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* OutPath; // 0xC0
		::System::Single lateralTranslation; // 0xC8
		::UnityEngine::AnimationCurve* multiplier; // 0xD0
		::System::Single angle; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION__CTOR_OFFSET))(this);
		}

		::System::Single get_LateralTranslation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_LATERALTRANSLATION_OFFSET))(this);
		}

		::System::Void set_LateralTranslation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_LATERALTRANSLATION_OFFSET))(this, value);
		}

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_ANGLE_OFFSET))(this);
		}

		::System::Void set_Angle(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_ANGLE_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* get_Multiplier()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_MULTIPLIER_OFFSET))(this);
		}

		::System::Void set_Multiplier(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_SET_MULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_PathIsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_GET_PATHISCLOSED_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* OnSlotDataRequest(::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* requestedBy, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* requestedSlot, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>* requests)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*, ::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGDataRequestParameter*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONSLOTDATAREQUEST_OFFSET))(this, requestedBy, requestedSlot, requests);
		}

		static ::System::Void TranslatePoint(::System::Int32 index, ::FluffyUnderware::Curvy::Generator::CGPath* data, ::System::Boolean evaluateTranslationMultiplier, ::System::Single translation, ::UnityEngine::AnimationCurve* translationMultiplier, ::System::Single angle)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::Generator::CGPath*, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_TRANSLATEPOINT_OFFSET))(index, data, evaluateTranslationMultiplier, translation, translationMultiplier, angle);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_RESET_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION_ONVALIDATE_OFFSET))(this);
		}
	};
}
