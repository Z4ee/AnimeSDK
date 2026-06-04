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

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x135C1C50)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_3383F5B5B7F87651_OFFSET UNITYSDK_OFFSET(0x135B4B30)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_36DF3CE1C98B6945_OFFSET UNITYSDK_OFFSET(0x135C2000)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_3DB33FA65FD6B364_OFFSET UNITYSDK_OFFSET(0x135C1D60)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x135C1AF0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_2_OFFSET UNITYSDK_OFFSET(0x135C1BA0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_3_OFFSET UNITYSDK_OFFSET(0x135C21A0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x135C1930)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_6BB3BCA076D98E60_OFFSET UNITYSDK_OFFSET(0x135C1F40)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_F1EEC8B056C8FB3F_OFFSET UNITYSDK_OFFSET(0x135C19E0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_1_OFFSET UNITYSDK_OFFSET(0x135C20D0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x135C1E70)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x135B68D0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentClip_TypeDefinitionIndex = 46762;

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

		::System::Void Method_1_F1EEC8B056C8FB3F(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_F1EEC8B056C8FB3F_OFFSET))(this, a1);
		}

		::System::Void Method_1_4307B2A4B4A12C1A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_1_OFFSET))(this);
		}

		::System::Void Method_1_4307B2A4B4A12C1A_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_2_OFFSET))(this);
		}

		::System::Void Method_1_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_1_3DB33FA65FD6B364(::EnviromentSystem::EnviromentClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_3DB33FA65FD6B364_OFFSET))(this, a1);
		}

		::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
		}

		::System::Void Method_1_6BB3BCA076D98E60(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_6BB3BCA076D98E60_OFFSET))(this, a1);
		}

		::System::Void Method_1_36DF3CE1C98B6945(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_36DF3CE1C98B6945_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_FD7514C64FB1B043_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_FD7514C64FB1B043_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_4307B2A4B4A12C1A_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_4307B2A4B4A12C1A_3_OFFSET))(this);
		}
	};
}
