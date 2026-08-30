#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/WindTriggerData.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_19691C230ADAC7D3_OFFSET UNITYSDK_OFFSET(0x106B9CA0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x106BA6D0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_653151ACD8E3C108_OFFSET UNITYSDK_OFFSET(0x106BA680)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x106BA8B0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x106BAE30)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x106BA560)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET UNITYSDK_OFFSET(0x106B9FC0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_FC9D73DAE431D642_OFFSET UNITYSDK_OFFSET(0x106BA600)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x106B9BA0)
#define ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x106B9A90)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroWindZoneProperty_TypeDefinitionIndex = 50053;

	class EnviroWindZoneProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::WindTriggerData>* WindTriggerDatas; // 0x50
		::System::Boolean m_EnbaleGpuWindZone; // 0x58

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroWindZoneProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroWindZoneProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_AF2CFBAAD2629B3B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_AF2CFBAAD2629B3B_OFFSET))(this, a1);
		}

		::System::Void Method_3_19691C230ADAC7D3(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_19691C230ADAC7D3_OFFSET))(this, a1);
		}

		::System::Void Method_3_FC9D73DAE431D642(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_FC9D73DAE431D642_OFFSET))(this, a1);
		}

		::System::Void Method_3_653151ACD8E3C108()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_653151ACD8E3C108_OFFSET))(this);
		}

		::System::Void Method_3_4867D67F27947ACE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_4867D67F27947ACE_OFFSET))(this, a1);
		}

		::System::Void Method_3_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_AA7E3074254D484A_OFFSET))(this);
		}

		::System::Void Method_3_8923446497E3D0C5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_8923446497E3D0C5_OFFSET))(this);
		}

		::System::Void Method_3_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWINDZONEPROPERTY_METHOD_3_A984848EA3E436DA_OFFSET))(this);
		}
	};
}
