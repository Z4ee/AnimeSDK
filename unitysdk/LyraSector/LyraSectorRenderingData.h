#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace LyraSector { class LyraSparseTreeBakedData; }
namespace UnityEngine { class ComputeBuffer; }

#define LYRASECTOR_LYRASECTORRENDERINGDATA_EMPTY_OFFSET UNITYSDK_OFFSET(0x1B7E6380)
#define LYRASECTOR_LYRASECTORRENDERINGDATA_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B7E6610)
#define LYRASECTOR_LYRASECTORRENDERINGDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1B7E63E0)
#define LYRASECTOR_LYRASECTORRENDERINGDATA_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1B7E6310)
#define LYRASECTOR_LYRASECTORRENDERINGDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1B7E6710)
#define LYRASECTOR_LYRASECTORRENDERINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E6790)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorRenderingData_TypeDefinitionIndex = 27291;

	class LyraSectorRenderingData : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* m_NodeArrayBuffer; // 0x10
		::UnityEngine::ComputeBuffer* m_EntityBuffer; // 0x18
		::System::Int32 m_EmissionNodeArrayOffset; // 0x20
		::System::Int32 m_EmissionPaletteOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsEmpty(::LyraSector::LyraSectorRenderingData* data)
		{
			return ((::System::Boolean(*)(::LyraSector::LyraSectorRenderingData*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA_ISEMPTY_OFFSET))(data);
		}

		::System::Boolean Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA_EMPTY_OFFSET))(this);
		}

		::System::Void Init(::LyraSector::LyraSparseTreeBakedData*& bakedData)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSparseTreeBakedData*&))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA_INIT_OFFSET))(this, bakedData);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA_FINALIZE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORRENDERINGDATA_RELEASE_OFFSET))(this);
		}
	};
}
