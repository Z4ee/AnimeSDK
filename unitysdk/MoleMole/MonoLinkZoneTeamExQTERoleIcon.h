#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4AE0715386866DD6.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_C2ED712377151494.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_016DFEDC70DB3F6A_OFFSET UNITYSDK_OFFSET(0x15844940)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x15843ED0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_35654ADD791251F6_OFFSET UNITYSDK_OFFSET(0x15844440)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0x158440C0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15844EA0)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15843A30)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_FB3B3F9013610156_OFFSET UNITYSDK_OFFSET(0x15843F80)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15843B80)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15843970)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET UNITYSDK_OFFSET(0x15843E90)
#define MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET UNITYSDK_OFFSET(0x15843DC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex = 70033;

	class MonoLinkZoneTeamExQTERoleIcon : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLinkZoneTeamExQTERoleIcon_TypeDefinitionIndex)->GetStaticField(0x11B60);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* RoleIconPsRenders; // 0x18
		::Enum_3_4AE0715386866DD6 TeamExQTEType; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* Field_5_2; // 0x28
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_092CD57850778EFC_OFFSET))(this);
		}

		::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo* Method_5_35654ADD791251F6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_35654ADD791251F6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_FB3B3F9013610156(::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_FB3B3F9013610156_OFFSET))(this, a1);
		}

		::System::Void Method_5_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_AA7E3074254D484A_OFFSET))(this);
		}

		::System::Void Method_5_E11AC65AA0DC2249()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E11AC65AA0DC2249_OFFSET))(this);
		}

		::System::Void Method_5_016DFEDC70DB3F6A(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_016DFEDC70DB3F6A_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLINKZONETEAMEXQTEROLEICON_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}
	};
}
