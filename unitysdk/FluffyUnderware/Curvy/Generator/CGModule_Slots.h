#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_CHECKINPUTMODULESNOTDIRTY_OFFSET UNITYSDK_OFFSET(0x1D616520)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_CLEAROUTPUTDATA_OFFSET UNITYSDK_OFFSET(0x1D6162A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETINPUTSLOT_OFFSET UNITYSDK_OFFSET(0x1D6163C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETOUTPUTSLOT_OFFSET UNITYSDK_OFFSET(0x1D616470)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETSLOT_OFFSET UNITYSDK_OFFSET(0x1D615950)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_INPUTSLOTSBYNAME_OFFSET UNITYSDK_OFFSET(0x1D6152F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_INPUTSLOTS_OFFSET UNITYSDK_OFFSET(0x1D615310)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_ISCONFIGURED_OFFSET UNITYSDK_OFFSET(0x1D615330)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_OUTPUTSLOTSBYNAME_OFFSET UNITYSDK_OFFSET(0x1D615300)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_OUTPUTSLOTS_OFFSET UNITYSDK_OFFSET(0x1D615320)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDMODULESLINKEDSLOTS_1_OFFSET UNITYSDK_OFFSET(0x1D615E20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDMODULESLINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1D615C50)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDSLOTS_OFFSET UNITYSDK_OFFSET(0x1D615FA0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_RESETINPUTSLOTSLASTDATACOUNT_OFFSET UNITYSDK_OFFSET(0x1D616190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_RESETLASREQUESTEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D6161A0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_SETUP_OFFSET UNITYSDK_OFFSET(0x1D615840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_STORE_OFFSET UNITYSDK_OFFSET(0x1D615A90)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D615680)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_Slots_TypeDefinitionIndex = 38899;

	class CGModule_Slots : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* _InputSlotsByName_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* _OutputSlotsByName_k__BackingField; // 0x18
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x20
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* _InputSlots_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* _OutputSlots_k__BackingField; // 0x30

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS__CTOR_OFFSET))(this, module);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* get_InputSlotsByName()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_INPUTSLOTSBYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* get_OutputSlotsByName()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_OUTPUTSLOTSBYNAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>* get_InputSlots()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_INPUTSLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>* get_OutputSlots()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_OUTPUTSLOTS_OFFSET))(this);
		}

		::System::Boolean get_IsConfigured()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GET_ISCONFIGURED_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_SETUP_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleSlot* GetSlot(::System::Reflection::FieldInfo* fieldInfo)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleSlot*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETSLOT_OFFSET))(this, fieldInfo);
		}

		::System::Void Store(::FluffyUnderware::Curvy::Generator::CGModuleSlot* slot)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_STORE_OFFSET))(this, slot);
		}

		::System::Void ReinitializeLinkedModulesLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDMODULESLINKEDSLOTS_OFFSET))(this);
		}

		static ::System::Void ReinitializeLinkedModulesLinkedSlots_1(::FluffyUnderware::Curvy::Generator::CGModuleSlot* slot)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDMODULESLINKEDSLOTS_1_OFFSET))(slot);
		}

		::System::Void ReInitializeLinkedSlots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_REINITIALIZELINKEDSLOTS_OFFSET))(this);
		}

		::System::Void ResetInputSlotsLastDataCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_RESETINPUTSLOTSLASTDATACOUNT_OFFSET))(this);
		}

		::System::Void ResetLasRequestedParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_RESETLASREQUESTEDPARAMETERS_OFFSET))(this);
		}

		::System::Void ClearOutputData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_CLEAROUTPUTDATA_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* GetInputSlot(::System::String* name)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleInputSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETINPUTSLOT_OFFSET))(this, name);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* GetOutputSlot(::System::String* name)
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_GETOUTPUTSLOT_OFFSET))(this, name);
		}

		::System::Void CheckInputModulesNotDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_SLOTS_CHECKINPUTMODULESNOTDIRTY_OFFSET))(this);
		}
	};
}
