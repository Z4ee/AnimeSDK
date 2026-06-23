#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29356A79D0914A09;
class Class_1_79B32D340B0895B6;
class Class_1_E6E8A44D2B2AEB28;
class Class_1_EFBF8B52CF8996A4_Class_1_9727A09E4725D838;
namespace System { class Exception; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class Socket; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_0CFB3C6D2AF3DADC_OFFSET UNITYSDK_OFFSET(0x16C1E430)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x16C1E860)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_2192C24A535CCDCB_OFFSET UNITYSDK_OFFSET(0x16C1EFF0)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_5CC589A90C8895C1_OFFSET UNITYSDK_OFFSET(0x16C1E8E0)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_6A81A01A1BE5DBC6_OFFSET UNITYSDK_OFFSET(0x16C1E6C0)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_A033A26FC9F7CD1C_OFFSET UNITYSDK_OFFSET(0x16C1EF10)
#define CLASS_1_EFBF8B52CF8996A4_METHOD_1_CB4ED266BC3FBD93_OFFSET UNITYSDK_OFFSET(0x16C1EEC0)
#define CLASS_1_EFBF8B52CF8996A4__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1E320)

inline static constexpr unsigned int Class_1_EFBF8B52CF8996A4_TypeDefinitionIndex = 57561;

class Class_1_EFBF8B52CF8996A4 : public ::System::Object
{
public:
	::Class_1_E6E8A44D2B2AEB28* Field_1_4; // 0x10
	::Class_1_79B32D340B0895B6* Field_1_1; // 0x18
	::System::Net::Sockets::Socket* Field_1_0; // 0x20
	::System::Collections::Generic::Queue_1<::Class_1_EFBF8B52CF8996A4_Class_1_9727A09E4725D838*>* Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0CFB3C6D2AF3DADC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_0CFB3C6D2AF3DADC_OFFSET))(this);
	}

	::System::Void Method_1_6A81A01A1BE5DBC6(::Class_1_29356A79D0914A09* a1, ::System::Action_2<::System::Int32, ::System::Exception*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29356A79D0914A09*, ::System::Action_2<::System::Int32, ::System::Exception*>*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_6A81A01A1BE5DBC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC589A90C8895C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_5CC589A90C8895C1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB4ED266BC3FBD93(::System::Net::Sockets::Socket* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::Socket*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_CB4ED266BC3FBD93_OFFSET))(this, a1);
	}

	::System::Threading::Tasks::Task_1<::System::Int32>* Method_1_A033A26FC9F7CD1C(::System::Net::Sockets::Socket* a1, ::Class_1_79B32D340B0895B6* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Net::Sockets::Socket*, ::Class_1_79B32D340B0895B6*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_A033A26FC9F7CD1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2192C24A535CCDCB(::Class_1_29356A79D0914A09* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29356A79D0914A09*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_EFBF8B52CF8996A4_METHOD_1_2192C24A535CCDCB_OFFSET))(this, a1, a2);
	}
};
