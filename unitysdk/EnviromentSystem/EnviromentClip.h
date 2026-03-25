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

#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xFBBAC50)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0xFBBAD10)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_3_OFFSET UNITYSDK_OFFSET(0xFBBB330)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xFBBAA70)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_331A86D19AA808A3_OFFSET UNITYSDK_OFFSET(0xFBBB0C0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_452BD962C7D11256_OFFSET UNITYSDK_OFFSET(0xFBBAB30)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xFBBADD0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_76CD9B9D1269FA90_1_OFFSET UNITYSDK_OFFSET(0xFBBB260)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xFBBAFF0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_842B9A57B1A61B49_OFFSET UNITYSDK_OFFSET(0xFBBAEF0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_D0F087C16CE1CEB8_OFFSET UNITYSDK_OFFSET(0xFB90CC0)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_DB6C221B68CFBBA1_OFFSET UNITYSDK_OFFSET(0xFBBB180)
#define ENVIROMENTSYSTEM_ENVIROMENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB922C0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentClip_TypeDefinitionIndex = 40270;

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

		::System::Void Method_1_D0F087C16CE1CEB8(::EnviromentSystem::EnviromentProfile* a1, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_D0F087C16CE1CEB8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_1_452BD962C7D11256(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_452BD962C7D11256_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_1_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_2_OFFSET))(this);
		}

		::System::Void Method_1_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_1_842B9A57B1A61B49(::EnviromentSystem::EnviromentClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_842B9A57B1A61B49_OFFSET))(this, a1);
		}

		::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_1_331A86D19AA808A3(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_331A86D19AA808A3_OFFSET))(this, a1);
		}

		::System::Void Method_1_DB6C221B68CFBBA1(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_DB6C221B68CFBBA1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_76CD9B9D1269FA90_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_76CD9B9D1269FA90_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1290EA767C459179_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTCLIP_METHOD_1_1290EA767C459179_3_OFFSET))(this);
		}
	};
}
