#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_16.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_672.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A3B99B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET UNITYSDK_OFFSET(0x1A3B9140)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A3B8FF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A3B8FC0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1A3B9430)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET UNITYSDK_OFFSET(0x1A3B9540)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1A3B98C0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A3B8FD0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3B8FE0)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int RABMapConfigTemplate_TypeDefinitionIndex = 17352;

	class RABMapConfigTemplate : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_7* m_Notify; // 0x10
		::Struct_2_3E75877A2888D88A_672 m_Data; // 0x18
		::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* m_ValidArea; // 0x28
		::System::String* m_StageName; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* m_Ballpark; // 0x38
		::System::Byte m_VarLoadedCount; // 0x40
		::System::Byte m_Mask0; // 0x41
		::System::Boolean _IsLoadAll_k__BackingField; // 0x42
		::System::Int32 m_ID; // 0x44

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_672 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_672, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Ballpark()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* get_ValidArea()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
