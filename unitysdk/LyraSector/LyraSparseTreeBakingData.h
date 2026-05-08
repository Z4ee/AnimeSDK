#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LYRASECTOR_LYRASPARSETREEBAKINGDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AB81250)
#define LYRASECTOR_LYRASPARSETREEBAKINGDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AB812A0)
#define LYRASECTOR_LYRASPARSETREEBAKINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB81200)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSparseTreeBakingData_TypeDefinitionIndex = 29690;

	class LyraSparseTreeBakingData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* m_EntityBufferData; // 0x10
		::Il2CppArray<::System::Byte>* m_NodeArrayData; // 0x18
		::System::Int32 m_EmissionNodeArrayOffset; // 0x20
		::System::Int32 m_EmissionPaletteOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKINGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKINGDATA_ISEMPTY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASPARSETREEBAKINGDATA_CLEAR_OFFSET))(this);
		}
	};
}
