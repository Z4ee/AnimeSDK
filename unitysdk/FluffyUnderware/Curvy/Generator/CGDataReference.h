#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleOutputSlot; }
namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F40A330)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1F409E60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1F40A1F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F40A220)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x1F40A240)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_SLOTNAME_OFFSET UNITYSDK_OFFSET(0x1F40A250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x1F409ED0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_SETINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1F40A2F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_SETINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F40A290)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F40A270)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F40A2B0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F40A260)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGDataReference_TypeDefinitionIndex = 39539;

	class CGDataReference : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* m_Module; // 0x10
		::System::String* m_SlotName; // 0x18
		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* mSlot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGModule* module, ::System::String* slotName)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_1_OFFSET))(this, module, slotName);
		}

		::System::Void _ctor_2(::FluffyUnderware::Curvy::Generator::CurvyGenerator* generator, ::System::String* moduleName, ::System::String* slotName)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CurvyGenerator*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE__CTOR_2_OFFSET))(this, generator, moduleName, slotName);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>* get_Data()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::Generator::CGData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_DATA_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot* get_Slot()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModuleOutputSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_SLOT_OFFSET))(this);
		}

		::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_HASVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_ISEMPTY_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::CGModule* get_Module()
		{
			return ((::FluffyUnderware::Curvy::Generator::CGModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_MODULE_OFFSET))(this);
		}

		::System::String* get_SlotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_GET_SLOTNAME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_CLEAR_OFFSET))(this);
		}

		::System::Void setINTERNAL(::FluffyUnderware::Curvy::Generator::CGModule* module, ::System::String* slotName)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_SETINTERNAL_OFFSET))(this, module, slotName);
		}

		::System::Void setINTERNAL_1(::FluffyUnderware::Curvy::Generator::CurvyGenerator* generator, ::System::String* moduleName, ::System::String* slotName)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CurvyGenerator*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGDATAREFERENCE_SETINTERNAL_1_OFFSET))(this, generator, moduleName, slotName);
		}
	};
}
