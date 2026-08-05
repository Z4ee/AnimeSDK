#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_5D856BDA788FAB47_Class_1_0DB3AC4CDCDDE59C_1;
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5D856BDA788FAB47_CLASS_1_B7155BF1E62718C3_METHOD_1_3A117FEF9BB2D2A4_OFFSET UNITYSDK_OFFSET(0x18CEF0B0)
#define CLASS_2_5D856BDA788FAB47_CLASS_1_B7155BF1E62718C3__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEEFB0)

inline static constexpr unsigned int Class_2_5D856BDA788FAB47_Class_1_B7155BF1E62718C3_TypeDefinitionIndex = 10966;

class Class_2_5D856BDA788FAB47_Class_1_B7155BF1E62718C3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_5D856BDA788FAB47_Class_1_0DB3AC4CDCDDE59C_1*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D856BDA788FAB47_CLASS_1_B7155BF1E62718C3__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> Method_1_3A117FEF9BB2D2A4(::System::Random* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Random*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_5D856BDA788FAB47_CLASS_1_B7155BF1E62718C3_METHOD_1_3A117FEF9BB2D2A4_OFFSET))(this, a1, a2);
	}
};
