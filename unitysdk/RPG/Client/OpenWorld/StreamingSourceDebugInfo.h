#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4FE4B094FAA68E6D.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DE4C6B309308A230;
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_METHOD_5_2A5799BE64F46116_OFFSET UNITYSDK_OFFSET(0x9EAF4B0)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_METHOD_5_9B24E4E8E3C66CBF_OFFSET UNITYSDK_OFFSET(0x9EAF250)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x9EAF080)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EAF750)
#define RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9EAF740)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int StreamingSourceDebugInfo_TypeDefinitionIndex = 60622;

	class StreamingSourceDebugInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_6()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StreamingSourceDebugInfo_TypeDefinitionIndex)->GetStaticField(0x44CA0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_5_5()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(StreamingSourceDebugInfo_TypeDefinitionIndex)->GetStaticField(0x44CA8);
		}
		::System::Int32 _EffectTypeMask; // 0x18
		::System::String* _EffectTypeNames; // 0x20
		::System::String* _AttachTargetType; // 0x28
		::System::String* _AttachTargetInfo; // 0x30
		::UnityEngine::Vector3 _AttachPosition; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO__CCTOR_OFFSET))();
		}

		::System::Void UpdateInfo(::Class_1_DE4C6B309308A230* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_UPDATEINFO_OFFSET))(this, a1);
		}

		static ::System::String* Method_5_9B24E4E8E3C66CBF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_METHOD_5_9B24E4E8E3C66CBF_OFFSET))(a1);
		}

		static ::System::String* Method_5_2A5799BE64F46116(::Struct_2_4FE4B094FAA68E6D a1)
		{
			return ((::System::String*(*)(::Struct_2_4FE4B094FAA68E6D))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_STREAMINGSOURCEDEBUGINFO_METHOD_5_2A5799BE64F46116_OFFSET))(a1);
		}
	};
}
