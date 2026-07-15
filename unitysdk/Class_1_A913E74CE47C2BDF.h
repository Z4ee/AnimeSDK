#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::IO { class FileStream; }
namespace System::Threading { class Thread; }

#define CLASS_1_A913E74CE47C2BDF_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15E98D70)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_22D05ED02CDF69B4_OFFSET UNITYSDK_OFFSET(0x15E982F0)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_30D9F1C042C87F41_OFFSET UNITYSDK_OFFSET(0x15E98340)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0x15E98150)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x15E98820)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_FC7172689FC291C3_OFFSET UNITYSDK_OFFSET(0x15E98600)
#define CLASS_1_A913E74CE47C2BDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E98F10)
#define CLASS_1_A913E74CE47C2BDF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E98460)

inline static constexpr unsigned int Class_1_A913E74CE47C2BDF_TypeDefinitionIndex = 57400;

class Class_1_A913E74CE47C2BDF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A913E74CE47C2BDF_TypeDefinitionIndex)->GetStaticField(0x7970);
	}
	::System::Collections::Concurrent::BlockingCollection_1<::System::String*>* Field_1_1; // 0x10
	::System::IO::FileStream* Field_1_2; // 0x18
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

	static ::System::String* Method_1_22D05ED02CDF69B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_22D05ED02CDF69B4_OFFSET))();
	}

	static ::System::Void Method_1_30D9F1C042C87F41(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_30D9F1C042C87F41_OFFSET))(a1, a2);
	}

	::System::Void Method_1_FC7172689FC291C3(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_FC7172689FC291C3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A913E74CE47C2BDF_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}
};
