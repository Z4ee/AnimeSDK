#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_CF6E14C556788FD1_OFFSETTEXTUREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x115418E0)

inline static constexpr unsigned int Class_1_CF6E14C556788FD1_OffsetTextureData_TypeDefinitionIndex = 41878;

class Class_1_CF6E14C556788FD1_OffsetTextureData : public ::System::Object
{
public:
	::System::Int32 dataTableSize; // 0x10
	::System::Int32 offsetTableSize; // 0x14
	::Il2CppArray<::UnityEngine::Vector3Int>* offsets; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF6E14C556788FD1_OFFSETTEXTUREDATA__CTOR_OFFSET))(this);
	}
};
