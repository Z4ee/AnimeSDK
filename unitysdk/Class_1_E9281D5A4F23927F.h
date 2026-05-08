#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E9281D5A4F23927F_METHOD_1_195F2CEE5F607EDE_OFFSET UNITYSDK_OFFSET(0xD48D9B0)
#define CLASS_1_E9281D5A4F23927F__CTOR_OFFSET UNITYSDK_OFFSET(0xD48D900)

inline static constexpr unsigned int Class_1_E9281D5A4F23927F_TypeDefinitionIndex = 80191;

class Class_1_E9281D5A4F23927F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6>*))((::PBYTE)hIl2Cpp + CLASS_1_E9281D5A4F23927F__CTOR_OFFSET))(this, a1);
	}

	::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 Method_1_195F2CEE5F607EDE(::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A a1)
	{
		return ((::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_8210B8B6DA5DB75A))((::PBYTE)hIl2Cpp + CLASS_1_E9281D5A4F23927F_METHOD_1_195F2CEE5F607EDE_OFFSET))(this, a1);
	}
};
