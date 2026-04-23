#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_2;

#define CLASS_1_9E9BEB53C8DC281D_GET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0x1183F520)
#define CLASS_1_9E9BEB53C8DC281D_GET_ID_OFFSET UNITYSDK_OFFSET(0x1183F4A0)
#define CLASS_1_9E9BEB53C8DC281D_GET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x1183F4C0)
#define CLASS_1_9E9BEB53C8DC281D_GET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0x1183F500)
#define CLASS_1_9E9BEB53C8DC281D_GET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0x1183F4E0)
#define CLASS_1_9E9BEB53C8DC281D_SET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0x1183F530)
#define CLASS_1_9E9BEB53C8DC281D_SET_ID_OFFSET UNITYSDK_OFFSET(0x1183F4B0)
#define CLASS_1_9E9BEB53C8DC281D_SET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x1183F4D0)
#define CLASS_1_9E9BEB53C8DC281D_SET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0x1183F510)
#define CLASS_1_9E9BEB53C8DC281D_SET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0x1183F4F0)
#define CLASS_1_9E9BEB53C8DC281D__CTOR_OFFSET UNITYSDK_OFFSET(0x1183F540)

inline static constexpr unsigned int Class_1_9E9BEB53C8DC281D_TypeDefinitionIndex = 58026;

class Class_1_9E9BEB53C8DC281D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _DialogueIDs_k__BackingField; // 0x10
	::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* _Requirements_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* _ValidAreas_k__BackingField; // 0x20
	::RPG::GameCore::CakeSpeakerPolicy _SpeakerPolicy_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_SET_ID_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* get_Requirements()
	{
		return ((::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_GET_REQUIREMENTS_OFFSET))(this);
	}

	::System::Void set_Requirements(::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_SET_REQUIREMENTS_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* get_ValidAreas()
	{
		return ((::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_GET_VALIDAREAS_OFFSET))(this);
	}

	::System::Void set_ValidAreas(::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_SET_VALIDAREAS_OFFSET))(this, value);
	}

	::RPG::GameCore::CakeSpeakerPolicy get_SpeakerPolicy()
	{
		return ((::RPG::GameCore::CakeSpeakerPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_GET_SPEAKERPOLICY_OFFSET))(this);
	}

	::System::Void set_SpeakerPolicy(::RPG::GameCore::CakeSpeakerPolicy value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeSpeakerPolicy))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_SET_SPEAKERPOLICY_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_DialogueIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_GET_DIALOGUEIDS_OFFSET))(this);
	}

	::System::Void set_DialogueIDs(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9E9BEB53C8DC281D_SET_DIALOGUEIDS_OFFSET))(this, value);
	}
};
