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

#define RPG_CLIENT_TEXTICONS_CLEAR_OFFSET UNITYSDK_OFFSET(0xCA1A180)
#define RPG_CLIENT_TEXTICONS_CULL_OFFSET UNITYSDK_OFFSET(0xCA1A0C0)
#define RPG_CLIENT_TEXTICONS_GET_ICONS_OFFSET UNITYSDK_OFFSET(0xCA179D0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_1AD65660482C5A23_OFFSET UNITYSDK_OFFSET(0xCA1E290)
#define RPG_CLIENT_TEXTICONS_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xCA17CC0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_5CD32D1F374D28BF_OFFSET UNITYSDK_OFFSET(0xCA1D530)
#define RPG_CLIENT_TEXTICONS_METHOD_5_66CC9828DB1F478F_OFFSET UNITYSDK_OFFSET(0xCA1A9E0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_9799E6C85CA57A57_OFFSET UNITYSDK_OFFSET(0xCA1C420)
#define RPG_CLIENT_TEXTICONS_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xCA18700)
#define RPG_CLIENT_TEXTICONS_METHOD_5_C1BDB0F7E3797524_OFFSET UNITYSDK_OFFSET(0xCA1BCD0)
#define RPG_CLIENT_TEXTICONS_METHOD_5_EC0BCC59F80EF3FE_OFFSET UNITYSDK_OFFSET(0xCA1A650)
#define RPG_CLIENT_TEXTICONS_METHOD_5_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xCA19AD0)
#define RPG_CLIENT_TEXTICONS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCA17EC0)
#define RPG_CLIENT_TEXTICONS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCA179F0)
#define RPG_CLIENT_TEXTICONS_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xCA1A120)
#define RPG_CLIENT_TEXTICONS_SET_ICONS_OFFSET UNITYSDK_OFFSET(0xCA179E0)
#define RPG_CLIENT_TEXTICONS_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xCA18880)
#define RPG_CLIENT_TEXTICONS_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0xCA19E90)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_0_OFFSET UNITYSDK_OFFSET(0xCA1E4C0)
#define RPG_CLIENT_TEXTICONS__BUILDICONATLAS_B__13_1_OFFSET UNITYSDK_OFFSET(0xCA1E510)
#define RPG_CLIENT_TEXTICONS__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1E480)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_TypeDefinitionIndex = 67902;

	class TextIcons : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Mesh** StaticGet_Field_5_0()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x516C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>** StaticGet_Field_5_1()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::VertexHelper*>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x516C8);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_2()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x516D0);
		}
		static ::UnityEngine::Texture** StaticGet_Field_5_3()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x516D8);
		}
		static ::Il2CppArray<::UnityEngine::UIVertex>** StaticGet_Field_5_4()
		{
			return (::Il2CppArray<::UnityEngine::UIVertex>**)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0x516E0);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TextIcons_TypeDefinitionIndex)->GetStaticField(0xFFA0);
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

		::System::Void Method_5_66CC9828DB1F478F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_66CC9828DB1F478F_OFFSET))(this);
		}

		::System::Void Method_5_5CD32D1F374D28BF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_5CD32D1F374D28BF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_9799E6C85CA57A57(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_9799E6C85CA57A57_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_33ACA6CB2ABC73F7_OFFSET))();
		}

		static ::System::Void Method_5_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_A1ADC999CFACEB89_OFFSET))();
		}

		static ::System::Void Method_5_1AD65660482C5A23(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_1AD65660482C5A23_OFFSET))(a1);
		}

		static ::System::Boolean Method_5_C1BDB0F7E3797524(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*& a1, ::Il2CppArray<::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::Client::TextIcons_Struct_2_126A1A9085C0C7D8>*&, ::Il2CppArray<::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_METHOD_5_C1BDB0F7E3797524_OFFSET))(a1, a2);
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
