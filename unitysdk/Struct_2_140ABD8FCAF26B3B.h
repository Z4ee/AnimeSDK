#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C28CEB2A4B26C9A7.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2BEAA93324417DF4;
namespace Foundation { class FunctionalObject; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_34D89F11D2EB2D54_OFFSET UNITYSDK_OFFSET(0x697D80)
#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_4354399B6DA8B091_OFFSET UNITYSDK_OFFSET(0xFFACCA0)
#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_7D64A8BD5E366D95_OFFSET UNITYSDK_OFFSET(0x697CC0)
#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x697D90)
#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_A3D979C30A92892B_OFFSET UNITYSDK_OFFSET(0xFFAC770)
#define STRUCT_2_140ABD8FCAF26B3B_METHOD_2_FF904AB4448C3076_OFFSET UNITYSDK_OFFSET(0x697E00)
#define STRUCT_2_140ABD8FCAF26B3B__CTOR_OFFSET UNITYSDK_OFFSET(0x697CA0)

inline static constexpr unsigned int Struct_2_140ABD8FCAF26B3B_TypeDefinitionIndex = 88643;

struct alignas(8) Struct_2_140ABD8FCAF26B3B
{
	::Class_1_2BEAA93324417DF4* Field_2_0; // 0x10
	::System::Action* Field_2_7; // 0x18
	::Foundation::FunctionalObject* Field_2_6; // 0x20

	::System::Void _ctor(::Class_1_2BEAA93324417DF4* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2BEAA93324417DF4*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D64A8BD5E366D95()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_7D64A8BD5E366D95_OFFSET))(this);
	}

	static ::Struct_2_140ABD8FCAF26B3B Method_2_A3D979C30A92892B(::System::Collections::Generic::List_1<::Enum_3_C28CEB2A4B26C9A7>* a1, ::System::Action* a2)
	{
		return ((::Struct_2_140ABD8FCAF26B3B(*)(::System::Collections::Generic::List_1<::Enum_3_C28CEB2A4B26C9A7>*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_A3D979C30A92892B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_34D89F11D2EB2D54(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_34D89F11D2EB2D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	static ::Struct_2_140ABD8FCAF26B3B Method_2_4354399B6DA8B091(::Enum_3_C28CEB2A4B26C9A7 a1, ::System::Action* a2)
	{
		return ((::Struct_2_140ABD8FCAF26B3B(*)(::Enum_3_C28CEB2A4B26C9A7, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_4354399B6DA8B091_OFFSET))(a1, a2);
	}

	::System::Void Method_2_FF904AB4448C3076(::Enum_3_C28CEB2A4B26C9A7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_C28CEB2A4B26C9A7))((::PBYTE)hIl2Cpp + STRUCT_2_140ABD8FCAF26B3B_METHOD_2_FF904AB4448C3076_OFFSET))(this, a1);
	}
};
