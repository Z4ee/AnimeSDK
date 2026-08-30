#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D_5;

#define CLASS_1_D1601FECDF0AF831_GET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0x1A75C890)
#define CLASS_1_D1601FECDF0AF831_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A75C810)
#define CLASS_1_D1601FECDF0AF831_GET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x1A75C830)
#define CLASS_1_D1601FECDF0AF831_GET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0x1A75C870)
#define CLASS_1_D1601FECDF0AF831_GET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0x1A75C850)
#define CLASS_1_D1601FECDF0AF831_SET_DIALOGUEIDS_OFFSET UNITYSDK_OFFSET(0x1A75C8A0)
#define CLASS_1_D1601FECDF0AF831_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A75C820)
#define CLASS_1_D1601FECDF0AF831_SET_REQUIREMENTS_OFFSET UNITYSDK_OFFSET(0x1A75C840)
#define CLASS_1_D1601FECDF0AF831_SET_SPEAKERPOLICY_OFFSET UNITYSDK_OFFSET(0x1A75C880)
#define CLASS_1_D1601FECDF0AF831_SET_VALIDAREAS_OFFSET UNITYSDK_OFFSET(0x1A75C860)
#define CLASS_1_D1601FECDF0AF831__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75C8B0)

inline static constexpr unsigned int Class_1_D1601FECDF0AF831_TypeDefinitionIndex = 63061;

class Class_1_D1601FECDF0AF831 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* _Requirements_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* _DialogueIDs_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* _ValidAreas_k__BackingField; // 0x20
	::RPG::GameCore::CakeSpeakerPolicy _SpeakerPolicy_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_SET_ID_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* get_Requirements()
	{
		return ((::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_GET_REQUIREMENTS_OFFSET))(this);
	}

	::System::Void set_Requirements(::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_3745C69C00F04B7D_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_SET_REQUIREMENTS_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* get_ValidAreas()
	{
		return ((::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_GET_VALIDAREAS_OFFSET))(this);
	}

	::System::Void set_ValidAreas(::Il2CppArray<::RPG::GameCore::CakeValidAreaType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CakeValidAreaType>*))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_SET_VALIDAREAS_OFFSET))(this, a1);
	}

	::RPG::GameCore::CakeSpeakerPolicy get_SpeakerPolicy()
	{
		return ((::RPG::GameCore::CakeSpeakerPolicy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_GET_SPEAKERPOLICY_OFFSET))(this);
	}

	::System::Void set_SpeakerPolicy(::RPG::GameCore::CakeSpeakerPolicy a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeSpeakerPolicy))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_SET_SPEAKERPOLICY_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_DialogueIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_GET_DIALOGUEIDS_OFFSET))(this);
	}

	::System::Void set_DialogueIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D1601FECDF0AF831_SET_DIALOGUEIDS_OFFSET))(this, a1);
	}
};
