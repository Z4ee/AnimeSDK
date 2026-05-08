#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_1A39E1B51756BF41_CLASS_1_17D1599765323DB4_METHOD_1_41B632CA530A68C6_OFFSET UNITYSDK_OFFSET(0x108E8160)
#define CLASS_2_1A39E1B51756BF41_CLASS_1_17D1599765323DB4__CTOR_OFFSET UNITYSDK_OFFSET(0x108E8150)

inline static constexpr unsigned int Class_2_1A39E1B51756BF41_Class_1_17D1599765323DB4_TypeDefinitionIndex = 75774;

class Class_2_1A39E1B51756BF41_Class_1_17D1599765323DB4 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x10
	::Class_2_1A39E1B51756BF41* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_CLASS_1_17D1599765323DB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41B632CA530A68C6(::Foundation::AssetRequestHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_1A39E1B51756BF41_CLASS_1_17D1599765323DB4_METHOD_1_41B632CA530A68C6_OFFSET))(this, a1);
	}
};
