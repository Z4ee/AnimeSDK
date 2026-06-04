#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9B148F3C307C6688_METHOD_1_0BB474307648814A_OFFSET UNITYSDK_OFFSET(0xAD2A4F0)
#define CLASS_1_9B148F3C307C6688_METHOD_1_0C666557C7A9015D_OFFSET UNITYSDK_OFFSET(0xAD2A0B0)
#define CLASS_1_9B148F3C307C6688_METHOD_1_DB5847E523C93DC7_OFFSET UNITYSDK_OFFSET(0xAD29D90)
#define CLASS_1_9B148F3C307C6688_METHOD_1_E5D8558AA4DA1C00_OFFSET UNITYSDK_OFFSET(0xAD29C20)
#define CLASS_1_9B148F3C307C6688_METHOD_1_E9748B4B562551F9_OFFSET UNITYSDK_OFFSET(0xAD29FB0)

inline static constexpr unsigned int Class_1_9B148F3C307C6688_TypeDefinitionIndex = 58399;

class Class_1_9B148F3C307C6688 : public ::System::Object
{
public:
	static ::System::Void Method_1_E5D8558AA4DA1C00(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B148F3C307C6688_METHOD_1_E5D8558AA4DA1C00_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DB5847E523C93DC7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B148F3C307C6688_METHOD_1_DB5847E523C93DC7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E9748B4B562551F9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B148F3C307C6688_METHOD_1_E9748B4B562551F9_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_0C666557C7A9015D(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B148F3C307C6688_METHOD_1_0C666557C7A9015D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* Method_1_0BB474307648814A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B148F3C307C6688_METHOD_1_0BB474307648814A_OFFSET))();
	}
};
