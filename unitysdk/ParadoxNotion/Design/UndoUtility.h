#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_DESIGN_UNDOUTILITY_CHECKDIRTY_OFFSET UNITYSDK_OFFSET(0x19860F20)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_CHECKUNDO_OFFSET UNITYSDK_OFFSET(0x19860EC0)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_GETLASTOPERATIONNAMEOR_OFFSET UNITYSDK_OFFSET(0x19860EA0)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_GET_LASTOPERATIONNAME_OFFSET UNITYSDK_OFFSET(0x19860E10)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECTCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x19860E80)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x19860E40)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECT_1_OFFSET UNITYSDK_OFFSET(0x19860E60)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECT_OFFSET UNITYSDK_OFFSET(0x19860E30)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x19860E50)
#define PARADOXNOTION_DESIGN_UNDOUTILITY_SET_LASTOPERATIONNAME_OFFSET UNITYSDK_OFFSET(0x19860E20)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int UndoUtility_TypeDefinitionIndex = 28113;

	class UndoUtility : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__lastOperationName_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UndoUtility_TypeDefinitionIndex)->GetStaticField(0x206D0);
		}

		static ::System::String* get_lastOperationName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_GET_LASTOPERATIONNAME_OFFSET))();
		}

		static ::System::Void set_lastOperationName(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_SET_LASTOPERATIONNAME_OFFSET))(value);
		}

		static ::System::Void RecordObject(::UnityEngine::Object* target, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECT_OFFSET))(target, name);
		}

		static ::System::Void RecordObjectComplete(::UnityEngine::Object* target, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECTCOMPLETE_OFFSET))(target, name);
		}

		static ::System::Void SetDirty(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_SETDIRTY_OFFSET))(target);
		}

		static ::System::Void RecordObject_1(::UnityEngine::Object* target, ::System::String* name, ::System::Action* operation)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECT_1_OFFSET))(target, name, operation);
		}

		static ::System::Void RecordObjectComplete_1(::UnityEngine::Object* target, ::System::String* name, ::System::Action* operation)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_RECORDOBJECTCOMPLETE_1_OFFSET))(target, name, operation);
		}

		static ::System::String* GetLastOperationNameOr(::System::String* operation)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_GETLASTOPERATIONNAMEOR_OFFSET))(operation);
		}

		static ::System::Void CheckUndo(::UnityEngine::Object* target, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_CHECKUNDO_OFFSET))(target, name);
		}

		static ::System::Void CheckDirty(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_UNDOUTILITY_CHECKDIRTY_OFFSET))(target);
		}
	};
}
