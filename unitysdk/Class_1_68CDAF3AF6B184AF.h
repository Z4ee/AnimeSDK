#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_927.h"
#include "unitysdk/System/Object.h"

class Class_2_13ADC9176EE2A97C;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_68CDAF3AF6B184AF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11DF7740)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x11DF6B80)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_292CC34C78A58E6F_OFFSET UNITYSDK_OFFSET(0x11DF7AF0)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x11DF6E40)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_46D7FD180A8792FC_1_OFFSET UNITYSDK_OFFSET(0x11DF8480)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_46D7FD180A8792FC_OFFSET UNITYSDK_OFFSET(0x11DF7D90)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_5F6BDF3FF43F02F0_OFFSET UNITYSDK_OFFSET(0x11DF8240)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_6D5D3557CBDD4B6D_OFFSET UNITYSDK_OFFSET(0x11DF6F20)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x11DF7680)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11DF7870)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x11DF7410)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11DF6B60)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_F53FF5279BF91F10_OFFSET UNITYSDK_OFFSET(0x11DF8920)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_F64DECD888E32669_OFFSET UNITYSDK_OFFSET(0x11DF75B0)
#define CLASS_1_68CDAF3AF6B184AF_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x11DF7D70)
#define CLASS_1_68CDAF3AF6B184AF__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF7950)

inline static constexpr unsigned int Class_1_68CDAF3AF6B184AF_TypeDefinitionIndex = 18495;

class Class_1_68CDAF3AF6B184AF : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_10; // 0x10
	::Struct_2_1862835F8661A21F_927 Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_13ADC9176EE2A97C*>* Field_1_0; // 0x38
	::Il2CppArray<::Class_2_13ADC9176EE2A97C*>* Field_1_4; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_13ADC9176EE2A97C*>* Field_1_7; // 0x50
	::System::Int32 Field_1_9; // 0x58
	::System::Boolean Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D5D3557CBDD4B6D(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_6D5D3557CBDD4B6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_13ADC9176EE2A97C* Method_1_292CC34C78A58E6F(::System::Int32 a1)
	{
		return ((::Class_2_13ADC9176EE2A97C*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_292CC34C78A58E6F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_46D7FD180A8792FC(::System::UInt32 a1, ::Class_2_13ADC9176EE2A97C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_13ADC9176EE2A97C*&))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_46D7FD180A8792FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_13ADC9176EE2A97C* Method_1_5F6BDF3FF43F02F0(::System::Int32 a1)
	{
		return ((::Class_2_13ADC9176EE2A97C*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_5F6BDF3FF43F02F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Boolean Method_1_46D7FD180A8792FC_1(::System::UInt32 a1, ::Class_2_13ADC9176EE2A97C*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_13ADC9176EE2A97C*&))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_46D7FD180A8792FC_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_F53FF5279BF91F10(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_F53FF5279BF91F10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_2_13ADC9176EE2A97C*>* Method_1_F64DECD888E32669()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_13ADC9176EE2A97C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_68CDAF3AF6B184AF_METHOD_1_F64DECD888E32669_OFFSET))(this);
	}
};
