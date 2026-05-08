#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x2F0420)
#define FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_RESET_1_OFFSET UNITYSDK_OFFSET(0x39EDC0)
#define FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_RESET_OFFSET UNITYSDK_OFFSET(0x736F30)

namespace Foundation
{
	inline static constexpr unsigned int NameValueArrayLoopUpItem_TypeDefinitionIndex = 8824;

	struct alignas(4) NameValueArrayLoopUpItem
	{
		::Foundation::Unreal::FName _name; // 0x10
		::System::Int32 _index; // 0x18

		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_GET_INDEX_OFFSET))(this);
		}

		::System::Void Reset(::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_RESET_OFFSET))(this, name);
		}

		::System::Void Reset_1(::Foundation::Unreal::FName name, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUEARRAYLOOPUPITEM_RESET_1_OFFSET))(this, name, index);
		}
	};
}
