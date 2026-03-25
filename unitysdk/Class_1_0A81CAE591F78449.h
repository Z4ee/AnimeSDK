#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_2_2690241A4D35989E;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0A81CAE591F78449_GET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x8747240)
#define CLASS_1_0A81CAE591F78449_GET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x8747220)
#define CLASS_1_0A81CAE591F78449_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x87474E0)
#define CLASS_1_0A81CAE591F78449_METHOD_1_6E3257E84C929229_OFFSET UNITYSDK_OFFSET(0x8747540)
#define CLASS_1_0A81CAE591F78449_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x87473B0)
#define CLASS_1_0A81CAE591F78449_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x87475F0)
#define CLASS_1_0A81CAE591F78449_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x8747260)
#define CLASS_1_0A81CAE591F78449_SET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x8747250)
#define CLASS_1_0A81CAE591F78449_SET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x8747230)
#define CLASS_1_0A81CAE591F78449__CTOR_OFFSET UNITYSDK_OFFSET(0x8747680)
#define CLASS_1_0A81CAE591F78449__STARTUPDATEDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x8747690)

inline static constexpr unsigned int Class_1_0A81CAE591F78449_TypeDefinitionIndex = 55748;

class Class_1_0A81CAE591F78449 : public ::System::Object
{
public:
	::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* Field_1_3; // 0x10
	::Class_1_280047DF9F661B14* Field_1_0; // 0x18
	::System::Int64 _downloadSize_k__BackingField; // 0x20
	::System::Boolean _InUpdate_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449__CTOR_OFFSET))(this);
	}

	::System::Boolean get_InUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_GET_INUPDATE_OFFSET))(this);
	}

	::System::Void set_InUpdate(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_SET_INUPDATE_OFFSET))(this, value);
	}

	::System::Int64 get_downloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_GET_DOWNLOADSIZE_OFFSET))(this);
	}

	::System::Void set_downloadSize(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_SET_DOWNLOADSIZE_OFFSET))(this, value);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_6E3257E84C929229(::Class_2_2690241A4D35989E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_6E3257E84C929229_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _StartUpdateData_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A81CAE591F78449__STARTUPDATEDATA_B__10_0_OFFSET))(this);
	}
};
