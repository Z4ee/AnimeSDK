#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"

class Class_1_C75DDA89CCB3A76B;
class Class_1_F4F46743587A3872;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1E8468C0312CFBC8_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB8BD790)
#define CLASS_2_1E8468C0312CFBC8_METHOD_2_434D96AA91738361_OFFSET UNITYSDK_OFFSET(0xB8BD950)
#define CLASS_2_1E8468C0312CFBC8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0xB8BD830)
#define CLASS_2_1E8468C0312CFBC8__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BDA80)

inline static constexpr unsigned int Class_2_1E8468C0312CFBC8_TypeDefinitionIndex = 53750;

class Class_2_1E8468C0312CFBC8 : public ::Class_1_8A0BE42C657CE107
{
public:
	::Class_1_F4F46743587A3872* IEGBIPMGBPA; // 0x18
	::System::Collections::Generic::List_1<::Class_1_C75DDA89CCB3A76B*>* LOOCAOKEODD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E8468C0312CFBC8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E8468C0312CFBC8_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E8468C0312CFBC8_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_434D96AA91738361(::Class_1_C75DDA89CCB3A76B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C75DDA89CCB3A76B*))((::PBYTE)hIl2Cpp + CLASS_2_1E8468C0312CFBC8_METHOD_2_434D96AA91738361_OFFSET))(this, a1);
	}
};
