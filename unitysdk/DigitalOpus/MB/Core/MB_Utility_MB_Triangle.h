#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1BDF7060)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_ISSAME_OFFSET UNITYSDK_OFFSET(0x1BDF6D50)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_SHARESVERTS_OFFSET UNITYSDK_OFFSET(0x1BDF6EC0)
#define DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF7180)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_Utility_MB_Triangle_TypeDefinitionIndex = 85097;

	class MB_Utility_MB_Triangle : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* vs; // 0x10
		::System::Int32 submeshIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE__CTOR_OFFSET))(this);
		}

		::System::Boolean isSame(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_ISSAME_OFFSET))(this, obj);
		}

		::System::Boolean sharesVerts(::DigitalOpus::MB::Core::MB_Utility_MB_Triangle* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB_Utility_MB_Triangle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_SHARESVERTS_OFFSET))(this, obj);
		}

		::System::Void Initialize(::Il2CppArray<::System::Int32>* ts, ::System::Int32 idx, ::System::Int32 sIdx)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_UTILITY_MB_TRIANGLE_INITIALIZE_OFFSET))(this, ts, idx, sIdx);
		}
	};
}
