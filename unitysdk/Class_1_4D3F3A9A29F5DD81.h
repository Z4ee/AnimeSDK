#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_4D3F3A9A29F5DD81_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB64A480)
#define CLASS_1_4D3F3A9A29F5DD81_GET_ICON_OFFSET UNITYSDK_OFFSET(0xB64A460)
#define CLASS_1_4D3F3A9A29F5DD81_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB64A440)
#define CLASS_1_4D3F3A9A29F5DD81_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xB64A490)
#define CLASS_1_4D3F3A9A29F5DD81_SET_ICON_OFFSET UNITYSDK_OFFSET(0xB64A470)
#define CLASS_1_4D3F3A9A29F5DD81_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB64A450)
#define CLASS_1_4D3F3A9A29F5DD81__CTOR_OFFSET UNITYSDK_OFFSET(0xB64A4A0)

inline static constexpr unsigned int Class_1_4D3F3A9A29F5DD81_TypeDefinitionIndex = 73332;

class Class_1_4D3F3A9A29F5DD81 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Icon_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Int32>* _Count_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* _Name_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Name()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::R3::ReactiveProperty_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_SET_NAME_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Icon()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_GET_ICON_OFFSET))(this);
	}

	::System::Void set_Icon(::R3::ReactiveProperty_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_SET_ICON_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_Count()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::R3::ReactiveProperty_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::R3::ReactiveProperty_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_4D3F3A9A29F5DD81_SET_COUNT_OFFSET))(this, a1);
	}
};
