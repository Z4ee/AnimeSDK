#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHintType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D126770E0092C973_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18DC2330)
#define CLASS_1_D126770E0092C973_GET_HINTTYPE_OFFSET UNITYSDK_OFFSET(0x18DC2310)
#define CLASS_1_D126770E0092C973_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18DC2350)
#define CLASS_1_D126770E0092C973_GET_UIINDEX_OFFSET UNITYSDK_OFFSET(0x18DC2370)
#define CLASS_1_D126770E0092C973_SET_DESC_OFFSET UNITYSDK_OFFSET(0x18DC2340)
#define CLASS_1_D126770E0092C973_SET_HINTTYPE_OFFSET UNITYSDK_OFFSET(0x18DC2320)
#define CLASS_1_D126770E0092C973_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18DC2360)
#define CLASS_1_D126770E0092C973_SET_UIINDEX_OFFSET UNITYSDK_OFFSET(0x18DC2380)
#define CLASS_1_D126770E0092C973__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC2390)

inline static constexpr unsigned int Class_1_D126770E0092C973_TypeDefinitionIndex = 75866;

class Class_1_D126770E0092C973 : public ::System::Object
{
public:
	::System::String* _Desc_k__BackingField; // 0x10
	::System::Int32 _Priority_k__BackingField; // 0x18
	::System::Int32 _UIIndex_k__BackingField; // 0x1C
	::RPG::GameCore::ModifierHintType _HintType_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::ModifierHintType get_HintType()
	{
		return ((::RPG::GameCore::ModifierHintType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_GET_HINTTYPE_OFFSET))(this);
	}

	::System::Void set_HintType(::RPG::GameCore::ModifierHintType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierHintType))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_SET_HINTTYPE_OFFSET))(this, a1);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_SET_DESC_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 get_UIIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_GET_UIINDEX_OFFSET))(this);
	}

	::System::Void set_UIIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D126770E0092C973_SET_UIINDEX_OFFSET))(this, a1);
	}
};
