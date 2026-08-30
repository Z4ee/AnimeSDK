#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2FC28EAECE1B8B36;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_03DFAD76A3F9AE78_OFFSET UNITYSDK_OFFSET(0x1C87DD30)
#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_15DFCC9D55945304_OFFSET UNITYSDK_OFFSET(0x1C87DA20)
#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1C87D8E0)
#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1C87DA10)
#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1C87D960)
#define CLASS_1_0170C41A8F1F8B7A_METHOD_1_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x1C87DE50)
#define CLASS_1_0170C41A8F1F8B7A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87D400)

inline static constexpr unsigned int Class_1_0170C41A8F1F8B7A_TypeDefinitionIndex = 34607;

class Class_1_0170C41A8F1F8B7A : public ::System::Object
{
public:
	::Class_1_2FC28EAECE1B8B36* GPKKOJMEDLF; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HDENIHCMNHA; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* EBCHMKHAOOJ; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* BPLDPPGMHHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_2FC28EAECE1B8B36* Method_1_24748FC20F375725()
	{
		return ((::Class_1_2FC28EAECE1B8B36*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_15DFCC9D55945304(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_15DFCC9D55945304_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03DFAD76A3F9AE78(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_03DFAD76A3F9AE78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0170C41A8F1F8B7A_METHOD_1_55B8349E0B606444_OFFSET))(this);
	}
};
