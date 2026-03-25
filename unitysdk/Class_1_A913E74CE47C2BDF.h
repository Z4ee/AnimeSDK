#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::IO { class FileStream; }
namespace System::Threading { class Thread; }

#define CLASS_1_A913E74CE47C2BDF_METHOD_1_0712E145E7F0DE18_OFFSET UNITYSDK_OFFSET(0x117D7560)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0x117D7370)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_B10FB9597F17FCB4_OFFSET UNITYSDK_OFFSET(0x117D7A40)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_DD649C71511EE3D7_OFFSET UNITYSDK_OFFSET(0x117D7510)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x117D7F70)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_FC7172689FC291C3_OFFSET UNITYSDK_OFFSET(0x117D7820)
#define CLASS_1_A913E74CE47C2BDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x117D8180)
#define CLASS_1_A913E74CE47C2BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x117D7680)

inline static constexpr unsigned int Class_1_A913E74CE47C2BDF_TypeDefinitionIndex = 48666;

class Class_1_A913E74CE47C2BDF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A913E74CE47C2BDF_TypeDefinitionIndex)->GetStaticField(0x121B0);
	}
	::System::Collections::Concurrent::BlockingCollection_1<::System::String*>* Field_1_2; // 0x10
	::System::IO::FileStream* Field_1_1; // 0x18
	::System::Threading::Thread* Field_1_3; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_97CD3501BC2A9FF5()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_97CD3501BC2A9FF5_OFFSET))();
	}

	static ::System::String* Method_1_DD649C71511EE3D7()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_DD649C71511EE3D7_OFFSET))();
	}

	static ::System::Void Method_1_0712E145E7F0DE18(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_0712E145E7F0DE18_OFFSET))(a1, a2);
	}

	::System::Void Method_1_FC7172689FC291C3(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_FC7172689FC291C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B10FB9597F17FCB4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_B10FB9597F17FCB4_OFFSET))(this);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}
};
