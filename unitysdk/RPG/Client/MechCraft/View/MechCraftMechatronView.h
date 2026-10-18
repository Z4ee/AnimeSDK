#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401.h"
#include "unitysdk/Struct_2_B36D9D977E9A07DD.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1521;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_BUILD_OFFSET UNITYSDK_OFFSET(0xD63FE40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_LOADMECH_OFFSET UNITYSDK_OFFSET(0xD63FBD0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0xD63F6D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_3C1DDC08A8D57BAD_OFFSET UNITYSDK_OFFSET(0xD6400A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0xD63F9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_774CDCC1D61222E2_OFFSET UNITYSDK_OFFSET(0xD640440)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_94146DF5C4E40E92_OFFSET UNITYSDK_OFFSET(0xD640260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_ABAA506AF5E672AF_OFFSET UNITYSDK_OFFSET(0xD640660)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD63F790)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD640910)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftMechatronView_TypeDefinitionIndex = 79969;

	class MechCraftMechatronView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::AttachPointMapping* _AttachPointMapping; // 0x18
		::UnityEngine::RuntimeAnimatorController* _AnimatorController; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* DIOFMGCMBPF; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* FNAGNFMHBOK; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* HAPDKCLNNDA; // 0x38
		::UnityEngine::GameObject* GFABGCFNNMK; // 0x40
		::Class_0_16E4307DCC419505_1521* JJNEADODOFE; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1521* Method_5_016E85CEDEE00FF4()
		{
			return ((::Class_0_16E4307DCC419505_1521*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_016E85CEDEE00FF4_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::GameObject* LoadMech(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_LOADMECH_OFFSET))(this, a1);
		}

		::System::Void Build(::System::Collections::Generic::List_1<::Struct_2_B36D9D977E9A07DD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_B36D9D977E9A07DD>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_BUILD_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C1DDC08A8D57BAD(::System::String* a1, ::RPG::GameCore::CharacterOutfitPartConfig* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::CharacterOutfitPartConfig*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_3C1DDC08A8D57BAD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_ABAA506AF5E672AF(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_ABAA506AF5E672AF_OFFSET))(this, a1);
		}

		::System::Void Method_5_4BE99DDCF7F1FD88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_4BE99DDCF7F1FD88_OFFSET))(this);
		}

		::System::Void Method_5_94146DF5C4E40E92(::UnityEngine::SkinnedMeshRenderer* a1, ::RPG::GameCore::CharacterOutfitPartConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::RPG::GameCore::CharacterOutfitPartConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_94146DF5C4E40E92_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_774CDCC1D61222E2(::UnityEngine::SkinnedMeshRenderer* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTMECHATRONVIEW_METHOD_5_774CDCC1D61222E2_OFFSET))(this, a1, a2);
		}
	};
}
