#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy::Generator { class CGBounds; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA4D6C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4D610)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GETBOUNDSNAMES_OFFSET UNITYSDK_OFFSET(0x1DF55230)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4D6D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_BOUNDSNAMES_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_INPUTISAVOLUME_OFFSET UNITYSDK_OFFSET(0x3EAC70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_SPOTSCOUNT_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DF55420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DF554D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4D5F0)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int BuildVolumeSpots_EditorData_TypeDefinitionIndex = 38814;

	struct alignas(8) BuildVolumeSpots_EditorData
	{
		::System::Int32 _SpotsCount_k__BackingField; // 0x10
		::System::Boolean _InputIsAVolume_k__BackingField; // 0x14
		::Il2CppArray<::System::String*>* _BoundsNames_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::Generator::CGBounds*>* bounds, ::System::Boolean inputIsAVolume, ::System::Int32 spotsCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::Generator::CGBounds*>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA__CTOR_OFFSET))(this, bounds, inputIsAVolume, spotsCount);
		}

		::System::Int32 get_SpotsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_SPOTSCOUNT_OFFSET))(this);
		}

		::System::Boolean get_InputIsAVolume()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_INPUTISAVOLUME_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_BoundsNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GET_BOUNDSNAMES_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* GetBoundsNames(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::Generator::CGBounds*>* bounds)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::Generator::CGBounds*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GETBOUNDSNAMES_OFFSET))(bounds);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData left, ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData, ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData left, ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData, ::FluffyUnderware::Curvy::Generator::Modules::BuildVolumeSpots_EditorData))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_BUILDVOLUMESPOTS_EDITORDATA_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
