#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }
namespace FluffyUnderware::Curvy::Generator { class InputSlotInfo; }
namespace FluffyUnderware::Curvy::Generator { class OutputSlotInfo; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ARESLOTSCOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1BE3AD70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1BE3AC10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_SLOTNAME_OFFSET UNITYSDK_OFFSET(0x1BE3AC20)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_TARGETMODULEID_OFFSET UNITYSDK_OFFSET(0x1BE3AC30)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_TARGETSLOTNAME_OFFSET UNITYSDK_OFFSET(0x1BE3AC40)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISBETWEEN_OFFSET UNITYSDK_OFFSET(0x1BE3B1E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISFROM_OFFSET UNITYSDK_OFFSET(0x1BE3B0D0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISSAME_1_OFFSET UNITYSDK_OFFSET(0x1BE3AE60)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISSAME_OFFSET UNITYSDK_OFFSET(0x1BE3ADD0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISTO_OFFSET UNITYSDK_OFFSET(0x1BE3B010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISUSING_OFFSET UNITYSDK_OFFSET(0x1BE3B190)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE3B4F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_SETMODULEIDIINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BE3B4E0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE3B500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE3AC70)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3AC50)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleLink_TypeDefinitionIndex = 37328;

	class CGModuleLink : public ::System::Object
	{
	public:
		::System::Int32 m_ModuleID; // 0x10
		::System::String* m_SlotName; // 0x18
		::System::Int32 m_TargetModuleID; // 0x20
		::System::String* m_TargetSlotName; // 0x28

		::System::Void _ctor(::System::Int32 sourceID, ::System::String* sourceSlotName, ::System::Int32 targetID, ::System::String* targetSlotName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK__CTOR_OFFSET))(this, sourceID, sourceSlotName, targetID, targetSlotName);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::Generator::CGModuleSlot* source, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* target)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK__CTOR_1_OFFSET))(this, source, target);
		}

		::System::Int32 get_ModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_MODULEID_OFFSET))(this);
		}

		::System::String* get_SlotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_SLOTNAME_OFFSET))(this);
		}

		::System::Int32 get_TargetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_TARGETMODULEID_OFFSET))(this);
		}

		::System::String* get_TargetSlotName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_GET_TARGETSLOTNAME_OFFSET))(this);
		}

		static ::System::Boolean AreSlotsCompatible(::FluffyUnderware::Curvy::Generator::InputSlotInfo* inputSlotInfo, ::System::Boolean isInputDataOnRequest, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo* outputSlotInfo, ::System::Boolean isOutputDataOnRequest)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::InputSlotInfo*, ::System::Boolean, ::FluffyUnderware::Curvy::Generator::OutputSlotInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ARESLOTSCOMPATIBLE_OFFSET))(inputSlotInfo, isInputDataOnRequest, outputSlotInfo, isOutputDataOnRequest);
		}

		::System::Boolean IsSame(::FluffyUnderware::Curvy::Generator::CGModuleLink* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleLink*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISSAME_OFFSET))(this, o);
		}

		::System::Boolean IsSame_1(::FluffyUnderware::Curvy::Generator::CGModuleSlot* source, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISSAME_1_OFFSET))(this, source, target);
		}

		::System::Boolean IsTo(::FluffyUnderware::Curvy::Generator::CGModuleSlot* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISTO_OFFSET))(this, s);
		}

		::System::Boolean IsFrom(::FluffyUnderware::Curvy::Generator::CGModuleSlot* s)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISFROM_OFFSET))(this, s);
		}

		::System::Boolean IsUsing(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISUSING_OFFSET))(this, module);
		}

		::System::Boolean IsBetween(::FluffyUnderware::Curvy::Generator::CGModuleSlot* one, ::FluffyUnderware::Curvy::Generator::CGModuleSlot* another)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*, ::FluffyUnderware::Curvy::Generator::CGModuleSlot*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_ISBETWEEN_OFFSET))(this, one, another);
		}

		::System::Void SetModuleIDIINTERNAL(::System::Int32 moduleID, ::System::Int32 targetModuleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_SETMODULEIDIINTERNAL_OFFSET))(this, moduleID, targetModuleID);
		}

		static ::System::Boolean op_Implicit(::FluffyUnderware::Curvy::Generator::CGModuleLink* a)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::Generator::CGModuleLink*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_OP_IMPLICIT_OFFSET))(a);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULELINK_TOSTRING_OFFSET))(this);
		}
	};
}
