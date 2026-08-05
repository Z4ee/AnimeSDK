#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono { class DataConverter; }
namespace System { class String; }

#define MONO_DATACONVERTER_PACKCONTEXT_ADD_OFFSET UNITYSDK_OFFSET(0x1DCE2AB0)
#define MONO_DATACONVERTER_PACKCONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x1DCE2C50)
#define MONO_DATACONVERTER_PACKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE2CD0)

namespace Mono
{
	inline static constexpr unsigned int DataConverter_PackContext_TypeDefinitionIndex = 4;

	class DataConverter_PackContext : public ::System::Object
	{
	public:
		::Mono::DataConverter* conv; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::System::String* description; // 0x20
		::System::Int32 align; // 0x28
		::System::Int32 next; // 0x2C
		::System::Int32 repeat; // 0x30
		::System::Int32 i; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PACKCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Add(::Il2CppArray<::System::Byte>* group)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PACKCONTEXT_ADD_OFFSET))(this, group);
		}

		::Il2CppArray<::System::Byte>* Get()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_PACKCONTEXT_GET_OFFSET))(this);
		}
	};
}
