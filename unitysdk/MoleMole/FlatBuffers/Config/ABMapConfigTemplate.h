#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_16.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_790.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A94F080)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET UNITYSDK_OFFSET(0x1A94E810)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A94E6C0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A94E690)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1A94EB00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET UNITYSDK_OFFSET(0x1A94EC10)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1A94EF90)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1A94E6A0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94E6B0)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int ABMapConfigTemplate_TypeDefinitionIndex = 12353;

	class ABMapConfigTemplate : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* m_Ballpark; // 0x10
		::Struct_2_3E75877A2888D88A_790 m_Data; // 0x18
		::Class_0_16E4307DCC419505_7* m_Notify; // 0x28
		::System::String* m_StageName; // 0x30
		::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* m_ValidArea; // 0x38
		::System::Int32 m_ID; // 0x40
		::System::Byte m_VarLoadedCount; // 0x44
		::System::Boolean _IsLoadAll_k__BackingField; // 0x45
		::System::Byte m_Mask0; // 0x46

		::System::Void _ctor(::Struct_2_3E75877A2888D88A_790 data, ::Class_0_16E4307DCC419505_7* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_790, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Ballpark()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>* get_ValidArea()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
