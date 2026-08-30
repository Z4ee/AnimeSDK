#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CRIWARE_CRIFSBINDER_CONTENTSFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3BC7BC0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsBinder_ContentsFileInfo_TypeDefinitionIndex = 38807;

	struct alignas(8) CriFsBinder_ContentsFileInfo
	{
		::System::String* directory; // 0x10
		::System::String* fileName; // 0x18
		::System::UInt32 readSize; // 0x20
		::System::UInt32 extractSize; // 0x24
		::System::UInt64 offset; // 0x28
		::System::Int32 fileId; // 0x30
		::System::String* userStr; // 0x38

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSBINDER_CONTENTSFILEINFO__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
