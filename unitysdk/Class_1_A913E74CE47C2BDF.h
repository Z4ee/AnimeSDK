#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class BlockingCollection_1; }
namespace System::IO { class FileStream; }
namespace System::Threading { class Thread; }

#define CLASS_1_A913E74CE47C2BDF_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xC356300)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_30D9F1C042C87F41_OFFSET UNITYSDK_OFFSET(0xC3558D0)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0xC3556E0)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_DD649C71511EE3D7_OFFSET UNITYSDK_OFFSET(0xC355880)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xC355DB0)
#define CLASS_1_A913E74CE47C2BDF_METHOD_1_FC7172689FC291C3_OFFSET UNITYSDK_OFFSET(0xC355B90)
#define CLASS_1_A913E74CE47C2BDF__CCTOR_OFFSET UNITYSDK_OFFSET(0xC3564A0)
#define CLASS_1_A913E74CE47C2BDF__CTOR_OFFSET UNITYSDK_OFFSET(0xC3559F0)

inline static constexpr unsigned int Class_1_A913E74CE47C2BDF_TypeDefinitionIndex = 60202;

class Class_1_A913E74CE47C2BDF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_CIGNLGMJCCO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A913E74CE47C2BDF_TypeDefinitionIndex)->GetStaticField(0x10060);
	}
	::System::Threading::Thread* PLLBOODLIOL; // 0x10
	::System::Collections::Concurrent::BlockingCollection_1<::System::String*>* DKEJNELHLKI; // 0x18
	::System::IO::FileStream* AAAEHABLOHH; // 0x20

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
