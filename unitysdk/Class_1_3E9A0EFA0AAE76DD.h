#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_39D4CC5F087AC6A7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3E9A0EFA0AAE76DD_GET_BELONGID_OFFSET UNITYSDK_OFFSET(0xDD95700)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_CASTERID_OFFSET UNITYSDK_OFFSET(0xDD95720)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xDD956C0)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_ISWHITELISTENABLE_OFFSET UNITYSDK_OFFSET(0xDD956E0)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xDD956A0)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDD95780)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_SPECIALMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDD957C0)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_UIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xDD95740)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_UIINDEX_OFFSET UNITYSDK_OFFSET(0xDD957A0)
#define CLASS_1_3E9A0EFA0AAE76DD_GET_UIMINIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xDD95760)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_BELONGID_OFFSET UNITYSDK_OFFSET(0xDD95710)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_CASTERID_OFFSET UNITYSDK_OFFSET(0xDD95730)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xDD956D0)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_ISWHITELISTENABLE_OFFSET UNITYSDK_OFFSET(0xDD956F0)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_MODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xDD956B0)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDD95790)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_SPECIALMARKPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDD957D0)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_UIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xDD95750)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_UIINDEX_OFFSET UNITYSDK_OFFSET(0xDD957B0)
#define CLASS_1_3E9A0EFA0AAE76DD_SET_UIMINIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xDD95770)
#define CLASS_1_3E9A0EFA0AAE76DD__CTOR_OFFSET UNITYSDK_OFFSET(0xDD957E0)

inline static constexpr unsigned int Class_1_3E9A0EFA0AAE76DD_TypeDefinitionIndex = 79687;

class Class_1_3E9A0EFA0AAE76DD : public ::System::Object
{
public:
	::System::String* _ModifierName_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_39D4CC5F087AC6A7*>* _SpecialMarkParamList_k__BackingField; // 0x18
	::System::String* _UIMiniEffectPath_k__BackingField; // 0x20
	::System::String* _UIEffectPath_k__BackingField; // 0x28
	::System::Int32 _Priority_k__BackingField; // 0x30
	::System::Int32 _UIIndex_k__BackingField; // 0x34
	::System::Boolean _IsWhiteListEnable_k__BackingField; // 0x38
	::System::Boolean _IsEnable_k__BackingField; // 0x39
	::System::UInt32 _CasterID_k__BackingField; // 0x3C
	::System::UInt32 _BelongID_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD__CTOR_OFFSET))(this);
	}

	::System::String* get_ModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_MODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_ModifierName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_MODIFIERNAME_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_ISENABLE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWhiteListEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_ISWHITELISTENABLE_OFFSET))(this);
	}

	::System::Void set_IsWhiteListEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_ISWHITELISTENABLE_OFFSET))(this, a1);
	}

	::System::UInt32 get_BelongID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_BELONGID_OFFSET))(this);
	}

	::System::Void set_BelongID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_BELONGID_OFFSET))(this, a1);
	}

	::System::UInt32 get_CasterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_CASTERID_OFFSET))(this);
	}

	::System::Void set_CasterID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_CASTERID_OFFSET))(this, a1);
	}

	::System::String* get_UIEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_UIEFFECTPATH_OFFSET))(this);
	}

	::System::Void set_UIEffectPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_UIEFFECTPATH_OFFSET))(this, a1);
	}

	::System::String* get_UIMiniEffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_UIMINIEFFECTPATH_OFFSET))(this);
	}

	::System::Void set_UIMiniEffectPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_UIMINIEFFECTPATH_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_PRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 get_UIIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_UIINDEX_OFFSET))(this);
	}

	::System::Void set_UIIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_UIINDEX_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_39D4CC5F087AC6A7*>* get_SpecialMarkParamList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_39D4CC5F087AC6A7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_GET_SPECIALMARKPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SpecialMarkParamList(::System::Collections::Generic::List_1<::Class_1_39D4CC5F087AC6A7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_39D4CC5F087AC6A7*>*))((::PBYTE)hIl2Cpp + CLASS_1_3E9A0EFA0AAE76DD_SET_SPECIALMARKPARAMLIST_OFFSET))(this, a1);
	}
};
