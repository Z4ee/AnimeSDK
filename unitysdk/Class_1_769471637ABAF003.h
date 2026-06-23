#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_769471637ABAF003_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x16E1B300)
#define CLASS_1_769471637ABAF003_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x16E1B290)
#define CLASS_1_769471637ABAF003_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x16E1B800)
#define CLASS_1_769471637ABAF003_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16E1B740)
#define CLASS_1_769471637ABAF003_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x16E1B5D0)
#define CLASS_1_769471637ABAF003_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16E1B310)
#define CLASS_1_769471637ABAF003_METHOD_1_5C2872FC920F6E8C_OFFSET UNITYSDK_OFFSET(0x16E1B820)
#define CLASS_1_769471637ABAF003_METHOD_1_639C4B41D56554CB_OFFSET UNITYSDK_OFFSET(0x16E1B090)
#define CLASS_1_769471637ABAF003_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x16E1AFD0)
#define CLASS_1_769471637ABAF003_METHOD_1_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x16E1B810)
#define CLASS_1_769471637ABAF003_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16E1B2E0)
#define CLASS_1_769471637ABAF003_METHOD_1_829D533B77DB3614_OFFSET UNITYSDK_OFFSET(0x16E1B4D0)
#define CLASS_1_769471637ABAF003_METHOD_1_99AC52A5C48A589D_1_OFFSET UNITYSDK_OFFSET(0x16E1B750)
#define CLASS_1_769471637ABAF003_METHOD_1_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x16E1AFE0)
#define CLASS_1_769471637ABAF003_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16E1B110)
#define CLASS_1_769471637ABAF003_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E1B480)
#define CLASS_1_769471637ABAF003_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16E1B2F0)
#define CLASS_1_769471637ABAF003__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16E1AFA0)
#define CLASS_1_769471637ABAF003__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16E1AFC0)
#define CLASS_1_769471637ABAF003__CTOR_OFFSET UNITYSDK_OFFSET(0x16E1AF70)

inline static constexpr unsigned int Class_1_769471637ABAF003_TypeDefinitionIndex = 79666;

class Class_1_769471637ABAF003 : public ::System::Object
{
public:
	// static const ::System::Byte Field_1_8 = 0x1; // 0x0
	// static const ::System::Byte Field_1_9 = 0x2; // 0x0
	::System::Action* Field_1_4; // 0x10
	::System::Nullable_1<::Cysharp::Threading::Tasks::UniTask> Field_1_7; // 0x18
	::System::String* Field_1_2; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* Field_1_6; // 0x40
	::System::Action* Field_1_5; // 0x48
	::System::Action* Field_1_3; // 0x50
	::System::Byte Field_1_10; // 0x58
	::System::UInt32 Field_1_0; // 0x5C

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::Cysharp::Threading::Tasks::UniTask a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_1(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_639C4B41D56554CB()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_639C4B41D56554CB_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_829D533B77DB3614(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_829D533B77DB3614_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_99AC52A5C48A589D_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_99AC52A5C48A589D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C2872FC920F6E8C(::Cysharp::Threading::Tasks::UniTask a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CLASS_1_769471637ABAF003_METHOD_1_5C2872FC920F6E8C_OFFSET))(this, a1);
	}
};
