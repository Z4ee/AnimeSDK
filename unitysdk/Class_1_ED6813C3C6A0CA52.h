#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_630CB84C93B59414;
class Class_2_BF47C01E9CFEA39C;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ED6813C3C6A0CA52_GET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1627C700)
#define CLASS_1_ED6813C3C6A0CA52_GET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1627C6E0)
#define CLASS_1_ED6813C3C6A0CA52_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1627C890)
#define CLASS_1_ED6813C3C6A0CA52_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1627C9C0)
#define CLASS_1_ED6813C3C6A0CA52_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1627CAD0)
#define CLASS_1_ED6813C3C6A0CA52_METHOD_1_AB7031FBF32F59B5_OFFSET UNITYSDK_OFFSET(0x1627CA20)
#define CLASS_1_ED6813C3C6A0CA52_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1627C720)
#define CLASS_1_ED6813C3C6A0CA52_SET_DOWNLOADSIZE_OFFSET UNITYSDK_OFFSET(0x1627C710)
#define CLASS_1_ED6813C3C6A0CA52_SET_INUPDATE_OFFSET UNITYSDK_OFFSET(0x1627C6F0)
#define CLASS_1_ED6813C3C6A0CA52__CTOR_OFFSET UNITYSDK_OFFSET(0x1627CB60)
#define CLASS_1_ED6813C3C6A0CA52__STARTUPDATEDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x1627CB70)

inline static constexpr unsigned int Class_1_ED6813C3C6A0CA52_TypeDefinitionIndex = 68269;

class Class_1_ED6813C3C6A0CA52 : public ::System::Object
{
public:
	::Class_1_630CB84C93B59414* MIPPNCGOJNM; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::System::String*>*>* OJENMOELNLN; // 0x18
	::System::Boolean _InUpdate_k__BackingField; // 0x20
	::System::Int64 _downloadSize_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52__CTOR_OFFSET))(this);
	}

	::System::Boolean get_InUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_GET_INUPDATE_OFFSET))(this);
	}

	::System::Void set_InUpdate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_SET_INUPDATE_OFFSET))(this, a1);
	}

	::System::Int64 get_downloadSize()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_GET_DOWNLOADSIZE_OFFSET))(this);
	}

	::System::Void set_downloadSize(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_SET_DOWNLOADSIZE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_AB7031FBF32F59B5(::Class_2_BF47C01E9CFEA39C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_BF47C01E9CFEA39C*))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_METHOD_1_AB7031FBF32F59B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void _StartUpdateData_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED6813C3C6A0CA52__STARTUPDATEDATA_B__10_0_OFFSET))(this);
	}
};
