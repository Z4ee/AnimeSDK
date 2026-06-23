#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/Share/EScenePropertyType.h"
#include "unitysdk/System/Object.h"

namespace ExpressionV2 { class ExpressionEvalContext; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ACTORPROPERTY_OFFSET UNITYSDK_OFFSET(0x151EF320)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_AVATARSKILLLEVEL_OFFSET UNITYSDK_OFFSET(0x151F04F0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CALL_OFFSET UNITYSDK_OFFSET(0x151ECF80)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CARDTYPE_OFFSET UNITYSDK_OFFSET(0x151EEEB0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_CONCAT_OFFSET UNITYSDK_OFFSET(0x151ED6B0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARAUDIOEVENTNAME_OFFSET UNITYSDK_OFFSET(0x151F0BE0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x151EFBC0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARTAG_OFFSET UNITYSDK_OFFSET(0x151F0910)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETBUDDYCOUNT_OFFSET UNITYSDK_OFFSET(0x151F0110)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETINDEX_OFFSET UNITYSDK_OFFSET(0x151EF510)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETPOS_OFFSET UNITYSDK_OFFSET(0x151EF670)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETSTRING_OFFSET UNITYSDK_OFFSET(0x151EFB00)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_HOLLOWLEVEL_OFFSET UNITYSDK_OFFSET(0x151EF1B0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_IF_OFFSET UNITYSDK_OFFSET(0x151ED880)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x151EEAE0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEM_OFFSET UNITYSDK_OFFSET(0x151ED190)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_MAX_OFFSET UNITYSDK_OFFSET(0x151ED540)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_MIN_OFFSET UNITYSDK_OFFSET(0x151ED3D0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PLAYERPOS_OFFSET UNITYSDK_OFFSET(0x151EF5C0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTYID_OFFSET UNITYSDK_OFFSET(0x151EFD10)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTY_OFFSET UNITYSDK_OFFSET(0x151ED970)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_RAND_OFFSET UNITYSDK_OFFSET(0x151EEA00)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x151EE6B0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEVAR_OFFSET UNITYSDK_OFFSET(0x151EDD30)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SEPCIALS_OFFSET UNITYSDK_OFFSET(0x151EDBC0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_SQRT_OFFSET UNITYSDK_OFFSET(0x151ED0C0)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_TEAMPROPERTY_OFFSET UNITYSDK_OFFSET(0x151EF720)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS_TRASHREMAINSIZE_OFFSET UNITYSDK_OFFSET(0x151EFF50)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x151EC900)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x151F0D30)
#define EXPRESSIONV2_EXPRESSIONFUNCTIONS__GETSCENEPROPERTY_OFFSET UNITYSDK_OFFSET(0x151EE560)

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionFunctions_TypeDefinitionIndex = 54025;

	class ExpressionFunctions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_4<::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*, ::ExpressionV2::ExprValue>*>** StaticGet_m_functions()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_4<::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*, ::ExpressionV2::ExprValue>*>**)Il2CppClass::FromTypeDefinitionIndex(ExpressionFunctions_TypeDefinitionIndex)->GetStaticField(0x49270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__CTOR_OFFSET))(this);
		}

		static ::ExpressionV2::ExprValue Call(::System::Int32 funcionOpCode, ::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::System::Int32, ::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CALL_OFFSET))(funcionOpCode, args, argc, context);
		}

		static ::ExpressionV2::ExprValue Sqrt(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SQRT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Item(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEM_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Min(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_MIN_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Max(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_MAX_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Concat(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CONCAT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue IF(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_IF_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Property(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Sepcials(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SEPCIALS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue SceneVar(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEVAR_OFFSET))(args, argc, context);
		}

		static ::System::Single _GetSceneProperty(::Share::EScenePropertyType type)
		{
			return ((::System::Single(*)(::Share::EScenePropertyType))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS__GETSCENEPROPERTY_OFFSET))(type);
		}

		static ::ExpressionV2::ExprValue SceneProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_SCENEPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue Rand(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_RAND_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue ItemType(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ITEMTYPE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue CardType(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_CARDTYPE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue HollowLevel(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_HOLLOWLEVEL_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue ActorProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_ACTORPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetIndex(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETINDEX_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue PlayerPos(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PLAYERPOS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetPos(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETPOS_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue TeamProperty(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_TEAMPROPERTY_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetString(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETSTRING_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarName(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARNAME_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue PropertyID(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_PROPERTYID_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue TrashRemainSize(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_TRASHREMAINSIZE_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetBuddyCount(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETBUDDYCOUNT_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue AvatarSkillLevel(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_AVATARSKILLLEVEL_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarTag(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARTAG_OFFSET))(args, argc, context);
		}

		static ::ExpressionV2::ExprValue GetAvatarAudioEventName(::Il2CppArray<::ExpressionV2::ExprValue>* args, ::System::Int32 argc, ::ExpressionV2::ExpressionEvalContext* context)
		{
			return ((::ExpressionV2::ExprValue(*)(::Il2CppArray<::ExpressionV2::ExprValue>*, ::System::Int32, ::ExpressionV2::ExpressionEvalContext*))((::PBYTE)hIl2Cpp + EXPRESSIONV2_EXPRESSIONFUNCTIONS_GETAVATARAUDIOEVENTNAME_OFFSET))(args, argc, context);
		}
	};
}
