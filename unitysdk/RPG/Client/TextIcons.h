#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextIcons_Struct_2_126A1A9085C0C7D8.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class TextIcons_Class_1_70A6FA55D73D1311; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_TEXTICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0xA58ADE0)
#define RPG_CLIENT_TEXTICONS_CULL_OFFSET UNITYSDK_OFFSET(0xA58AD20)
#define RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET UNITYSDK_OFFSET(0xA5885C0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_0D8D84C865DE09C1_OFFSET UNITYSDK_OFFSET(0xA58D020)
#define RPG_CLIENT_TEXTICONS_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA5888A0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_31870EEB9825DA16_OFFSET UNITYSDK_OFFSET(0xA58B200)
#define RPG_CLIENT_TEXTICONS_METHOD_5_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xA58B3A0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_72AE61DCD8B432DA_OFFSET UNITYSDK_OFFSET(0xA58E980)
#define RPG_CLIENT_TEXTICONS_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA589270)
#define RPG_CLIENT_TEXTICONS_METHOD_5_B0103DD1A8553FD6_OFFSET UNITYSDK_OFFSET(0xA58DAA0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_CC3E052A23A58749_OFFSET UNITYSDK_OFFSET(0xA58C860)
#define RPG_CLIENT_TEXTICONS_METHOD_5_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xA58A7C0)
#define RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA588AA0)
#define RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA5885E0)
#define RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xA58AD80)
#define RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET UNITYSDK_OFFSET(0xA5885D0)
#define RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA589400)
#define RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA58AB50)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET UNITYSDK_OFFSET(0xA58EBD0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET UNITYSDK_OFFSET(0xA58EC20)
#define RPG_CLIENT_TEXTICONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA58EBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_TypeDefinitionIndex = 59565;

	class TextIcons : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>** StaticGet_Field_5_11()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x2F360);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet_Field_5_10()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x2F368);
		}
		static ::UnityEngine::Texture** StaticGet_Field_5_9()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x2F370);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_13()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x2F378);
		}
		static ::UnityEngine::Mesh** StaticGet_Field_5_12()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x2F380);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0xF460);
		}
		// static const ::System::Int32 Field_5_16 = 0x4; // 0x0
		::Il2CppArray<::UnityEngine::Sprite*>* m_Icons; // 0x18
		::UnityEngine::UI::Text* Field_5_1; // 0x20
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_2; // 0x28
		::UnityEngine::Texture* Field_5_3; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TextIcons_Class_1_70A6FA55D73D1311*>* Field_5_4; // 0x38
		::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>* Field_5_5; // 0x40
		::Il2CppArray<::System::Single>* Field_5_6; // 0x48
		::UnityEngine::Rect Field_5_7; // 0x50
		::System::Int32 Field_5_14; // 0x60
		::UnityEngine::Experimental::Rendering::GraphicsFormat Field_5_15; // 0x64

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

		::System::Void Method_5_E876C8B6D3B840A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_E876C8B6D3B840A6_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* Method_5_31870EEB9825DA16()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_31870EEB9825DA16_OFFSET))(this);
		}

		::System::Void Method_5_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_5_B0103DD1A8553FD6(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_B0103DD1A8553FD6_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_0D8D84C865DE09C1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_0D8D84C865DE09C1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_151E25A63D14DDB0_OFFSET))();
		}

		static ::System::Void Method_5_79830F666EE579C0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_79830F666EE579C0_OFFSET))();
		}

		static ::System::Void Method_5_72AE61DCD8B432DA(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_72AE61DCD8B432DA_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_CC3E052A23A58749(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*& a1, ::Il2CppArray<::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*&, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_CC3E052A23A58749_OFFSET))(a1, a2);
		}

		::System::Boolean _BuildIconAtlas_b__13_0(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET))(this, id);
		}

		::System::Boolean _BuildIconAtlas_b__13_1(::System::Int32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET))(this, id);
		}
	};
}
