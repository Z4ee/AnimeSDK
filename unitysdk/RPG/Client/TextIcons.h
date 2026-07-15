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

#define RPG_CLIENT_TEXTICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1947BDB0)
#define RPG_CLIENT_TEXTICONS_CULL_OFFSET UNITYSDK_OFFSET(0x1947BCF0)
#define RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET UNITYSDK_OFFSET(0x19479470)
#define RPG_CLIENT_TEXTICONS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x19479800)
#define RPG_CLIENT_TEXTICONS_METHOD_5_1AD65660482C5A23_OFFSET UNITYSDK_OFFSET(0x19480170)
#define RPG_CLIENT_TEXTICONS_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1947A440)
#define RPG_CLIENT_TEXTICONS_METHOD_5_9799E6C85CA57A57_OFFSET UNITYSDK_OFFSET(0x1947E290)
#define RPG_CLIENT_TEXTICONS_METHOD_5_E3C6744E0B066898_OFFSET UNITYSDK_OFFSET(0x1947F3D0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1947C7C0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_EC0BCC59F80EF3FE_OFFSET UNITYSDK_OFFSET(0x1947C430)
#define RPG_CLIENT_TEXTICONS_METHOD_5_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x1947B700)
#define RPG_CLIENT_TEXTICONS_METHOD_5_F740F753EED2BABD_OFFSET UNITYSDK_OFFSET(0x1947D9A0)
#define RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19479A70)
#define RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19479500)
#define RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0x1947BD50)
#define RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET UNITYSDK_OFFSET(0x194794B0)
#define RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1947A630)
#define RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1947BAC0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET UNITYSDK_OFFSET(0x194803A0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET UNITYSDK_OFFSET(0x194803F0)
#define RPG_CLIENT_TEXTICONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19480360)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_TypeDefinitionIndex = 69388;

	class TextIcons : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>** StaticGet_Field_5_0()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x3F960);
		}
		static ::UnityEngine::Mesh** StaticGet_Field_5_1()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x3F968);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet_Field_5_2()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x3F970);
		}
		static ::UnityEngine::Texture** StaticGet_Field_5_3()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x3F978);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_4()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x3F980);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0xA8D0);
		}
		// static const ::System::Int32 Field_5_6 = 0x4; // 0x0
		::Il2CppArray<::UnityEngine::Sprite*>* m_Icons; // 0x18
		::UnityEngine::UI::Text* Field_5_8; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_9; // 0x28
		::UnityEngine::Texture* Field_5_10; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TextIcons_Class_1_DE8146FD159B95CF*>* Field_5_11; // 0x38
		::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>* Field_5_12; // 0x40
		::Il2CppArray<::System::Single>* Field_5_13; // 0x48
		::UnityEngine::Rect Field_5_14; // 0x50
		::UnityEngine::Material* Field_5_15; // 0x60
		::System::Int32 Field_5_16; // 0x68
		::System::Int32 Field_5_17; // 0x6C
		::UnityEngine::Experimental::Rendering::GraphicsFormat Field_5_18; // 0x70

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
