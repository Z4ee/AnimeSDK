#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { class ThreadStatProfiler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_THREADPROFILEMARKER_BEGIN_OFFSET UNITYSDK_OFFSET(0x19D38930)
#define RPG_THREADPROFILEMARKER_END_OFFSET UNITYSDK_OFFSET(0x19D38E80)
#define RPG_THREADPROFILEMARKER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19D39060)
#define RPG_THREADPROFILEMARKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D39070)
#define RPG_THREADPROFILEMARKER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D38920)

namespace RPG
{
	inline static constexpr unsigned int ThreadProfileMarker_TypeDefinitionIndex = 33249;

	class ThreadProfileMarker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::ThreadProfileMarker*>** StaticGet_AllMarkers()
		{
			return (::System::Collections::Generic::List_1<::RPG::ThreadProfileMarker*>**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileMarker_TypeDefinitionIndex)->GetStaticField(0xD80);
		}
		static ::RPG::ThreadStatProfiler** StaticGet_ThreadStat()
		{
			return (::RPG::ThreadStatProfiler**)Il2CppClass::FromTypeDefinitionIndex(ThreadProfileMarker_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER__CTOR_OFFSET))(this, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER__CCTOR_OFFSET))();
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_BEGIN_OFFSET))(this);
		}

		::System::Void End()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_END_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_THREADPROFILEMARKER_GET_NAME_OFFSET))(this);
		}
	};
}
