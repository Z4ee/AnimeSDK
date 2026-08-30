#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextIcons_Struct_2_126A1A9085C0C7D8.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class TextIcons_Class_1_DE8146FD159B95CF; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ACA45E0)
#define RPG_CLIENT_TEXTICONS_CULL_OFFSET UNITYSDK_OFFSET(0x1ACA4520)
#define RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET UNITYSDK_OFFSET(0x1ACA1CD0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1ACA2030)
#define RPG_CLIENT_TEXTICONS_METHOD_5_1AD65660482C5A23_OFFSET UNITYSDK_OFFSET(0x1ACA8980)
#define RPG_CLIENT_TEXTICONS_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1ACA2C70)
#define RPG_CLIENT_TEXTICONS_METHOD_5_9799E6C85CA57A57_OFFSET UNITYSDK_OFFSET(0x1ACA6AA0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_E3C6744E0B066898_OFFSET UNITYSDK_OFFSET(0x1ACA7BE0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1ACA4FF0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_EC0BCC59F80EF3FE_OFFSET UNITYSDK_OFFSET(0x1ACA4C60)
#define RPG_CLIENT_TEXTICONS_METHOD_5_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1ACA3F30)
#define RPG_CLIENT_TEXTICONS_METHOD_5_F740F753EED2BABD_OFFSET UNITYSDK_OFFSET(0x1ACA61B0)
#define RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ACA22A0)
#define RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1ACA1D60)
#define RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1ACA4580)
#define RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET UNITYSDK_OFFSET(0x1ACA1D10)
#define RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1ACA2E60)
#define RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1ACA42F0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET UNITYSDK_OFFSET(0x1ACA8BB0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET UNITYSDK_OFFSET(0x1ACA8C00)
#define RPG_CLIENT_TEXTICONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACA8B70)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_TypeDefinitionIndex = 72603;

	class TextIcons : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet_NJPALBPLPIJ()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x54B20);
		}
		static ::UnityEngine::Texture** StaticGet_CPOFKPJOCEF()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x54B28);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>** StaticGet_NMGAADNPIOG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x54B30);
		}
		static ::UnityEngine::Mesh** StaticGet_MJJPAPGBALA()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x54B38);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet_EKJGCDIEEHB()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x54B40);
		}
		static ::System::Int32* StaticGet_AOMGOGBFECA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x115E0);
		}
		// static const ::System::Int32 LHCKIKNCDPE = 0x4; // 0x0
		::Il2CppArray<::UnityEngine::Sprite*>* m_Icons; // 0x18
		::UnityEngine::UI::Text* HAPMAPAJMOC; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* GGABAIOMHPE; // 0x28
		::UnityEngine::Texture* AJLNAFOHFJP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF*>* AMGJPHOPMOM; // 0x38
		::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>* CHNBCOANIJA; // 0x40
		::Il2CppArray<::System::Single>* DIDCHGMBHLI; // 0x48
		::UnityEngine::Rect CAOMNOEAJCC; // 0x50
		::UnityEngine::Material* ELKGDBPFCMI; // 0x60
		::System::Int32 OMAOFBNHCFL; // 0x68
		::System::Int32 NNIFBDFMHKI; // 0x6C
		::UnityEngine::Experimental::Rendering::GraphicsFormat DIEDAENPFLG; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Sprite*>* get_icons()
		{
			return ((::Il2CppArray<::UnityEngine::Sprite*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET))(this);
		}

		::System::Void set_icons(::Il2CppArray<::UnityEngine::Sprite*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void UpdateMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void Cull(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CULL_OFFSET))(this, a1);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_CLEAR_OFFSET))(this);
		}

		::System::Void Method_5_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_F63FE1AA9633F811_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* Method_5_EC0BCC59F80EF3FE()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_EC0BCC59F80EF3FE_OFFSET))(this);
		}

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::System::Void Method_5_E3C6744E0B066898(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_E3C6744E0B066898_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_9799E6C85CA57A57(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_9799E6C85CA57A57_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_151E25A63D14DDB0_OFFSET))();
		}

		static ::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_508D4DD02D3DB74E_OFFSET))();
		}

		static ::System::Void Method_5_1AD65660482C5A23(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_1AD65660482C5A23_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_F740F753EED2BABD(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*& a1, ::Il2CppArray<::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*&, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_F740F753EED2BABD_OFFSET))(a1, a2);
		}

		::System::Boolean _BuildIconAtlas_b__13_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildIconAtlas_b__13_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET))(this, a1);
		}
	};
}
