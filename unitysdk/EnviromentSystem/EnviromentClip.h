#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroClipType.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_3383F5B5B7F87651_OFFSET UNITYSDK_OFFSET(0x106880D0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_1_OFFSET UNITYSDK_OFFSET(0x106BB2D0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_2_OFFSET UNITYSDK_OFFSET(0x106BBAD0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x106BB180)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x106BB420)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x106BB010)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_6BB3BCA076D98E60_OFFSET UNITYSDK_OFFSET(0x106BB760)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_70D35EA6595005E0_OFFSET UNITYSDK_OFFSET(0x106BB0C0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_8E7FE57CA6DE88E1_OFFSET UNITYSDK_OFFSET(0x106BB820)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_CFC9D07F42C4C720_OFFSET UNITYSDK_OFFSET(0x106BB4D0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_D114AD6D57BD6A9C_OFFSET UNITYSDK_OFFSET(0x106BB970)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x106BB690)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x10689C00)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentClip_TypeDefinitionIndex = 50008;

	class EnviromentClip : public ::System::Object
	{
	public:
		::EnviromentSystem::EnviroClipType EnviroClipType; // 0x10
		::System::Int32 AsyncLoadCount; // 0x14
		::System::Int32 AsyncLoadTotalCount; // 0x18
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* EnviroProperties; // 0x20
		::EnviromentSystem::EnviromentProfile* _ProfileParent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_3383F5B5B7F87651(::EnviromentSystem::EnviromentProfile* a1, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_3383F5B5B7F87651_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_1_70D35EA6595005E0(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_70D35EA6595005E0_OFFSET))(this, a1);
		}

		::System::Void Method_1_40EBA7013E4CCDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_OFFSET))(this);
		}

		::System::Void Method_1_40EBA7013E4CCDDF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_1_OFFSET))(this);
		}

		::System::Void Method_1_4307B2A4B4A12C1A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
		}

		::System::Void Method_1_CFC9D07F42C4C720(::EnviromentSystem::EnviromentClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_CFC9D07F42C4C720_OFFSET))(this, a1);
		}

		::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
		}

		::System::Void Method_1_6BB3BCA076D98E60(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_6BB3BCA076D98E60_OFFSET))(this, a1);
		}

		::System::Void Method_1_8E7FE57CA6DE88E1(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_8E7FE57CA6DE88E1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D114AD6D57BD6A9C(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_D114AD6D57BD6A9C_OFFSET))(this, a1);
		}

		::System::Void Method_1_40EBA7013E4CCDDF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_40EBA7013E4CCDDF_2_OFFSET))(this);
		}
	};
}
