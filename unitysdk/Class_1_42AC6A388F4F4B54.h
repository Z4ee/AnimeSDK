#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D3CC73B16B410533;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_42AC6A388F4F4B54_CLEAR_OFFSET UNITYSDK_OFFSET(0x169EEE80)
#define CLASS_1_42AC6A388F4F4B54__CTOR_OFFSET UNITYSDK_OFFSET(0x169EEFD0)

inline static constexpr unsigned int Class_1_42AC6A388F4F4B54_TypeDefinitionIndex = 33661;

class Class_1_42AC6A388F4F4B54 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_D3CC73B16B410533*>* Field_1_0; // 0x10
	::Class_1_D3CC73B16B410533* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42AC6A388F4F4B54__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42AC6A388F4F4B54_CLEAR_OFFSET))(this);
	}
};
