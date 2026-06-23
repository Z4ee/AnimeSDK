#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RECORDKIT_RECORDNODE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E373C00)
#define RECORDKIT_RECORDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E373BF0)

inline static constexpr unsigned int RecordKit_RecordNode_TypeDefinitionIndex = 8262;

class RecordKit_RecordNode : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* data; // 0x10

	::System::Void _ctor(::Il2CppArray<::System::Byte>* param)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RECORDKIT_RECORDNODE__CTOR_OFFSET))(this, param);
	}

	::System::Void WriteValue(::System::String* path)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RECORDKIT_RECORDNODE_WRITEVALUE_OFFSET))(this, path);
	}
};
