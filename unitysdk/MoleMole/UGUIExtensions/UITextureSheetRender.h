#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_6C2E46293F2AE988;
class Class_1_927FD65E44A20102;
class Class_2_1A39E1B51756BF41;
class Class_2_CA67A9CEB871FFD3;
class Class_2_CE524E0BB2F7DB94;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ADDENDEVENT_OFFSET UNITYSDK_OFFSET(0x174119C0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_COLUMNS_OFFSET UNITYSDK_OFFSET(0x1740EE80)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1740EEF0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1740EEA0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1740EFC0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1740EE90)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INITRAWIMAGE_OFFSET UNITYSDK_OFFSET(0x174101F0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INIT_OFFSET UNITYSDK_OFFSET(0x1740F790)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174118D0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17411590)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYRAWIMAGESINGLEFRAME_OFFSET UNITYSDK_OFFSET(0x17411070)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYSINGLEFRAME_OFFSET UNITYSDK_OFFSET(0x17410870)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REFRESHRUNTIMEFREQUENCY_OFFSET UNITYSDK_OFFSET(0x17411920)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REMOVEENDEVENT_OFFSET UNITYSDK_OFFSET(0x17411A40)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1740F0A0)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17411B70)
#define MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x17411AC0)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int UITextureSheetRender_TypeDefinitionIndex = 70681;

	class UITextureSheetRender : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_6_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xED40);
		}
		static ::System::Int32* StaticGet_Field_6_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xED44);
		}
		static ::System::Int32* StaticGet_Field_6_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xED48);
		}
		static ::System::Int32* StaticGet_Field_6_19()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xED4C);
		}
		static ::System::Int32* StaticGet_Field_6_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextureSheetRender_TypeDefinitionIndex)->GetStaticField(0xED50);
		}
		::System::UInt32 m_Columns; // 0x18
		::System::UInt32 m_Rows; // 0x1C
		::System::UInt32 m_Frames; // 0x20
		::System::UInt32 m_CurrentFrame; // 0x24
		::UnityEngine::UI::Graphic* Field_6_4; // 0x28
		::System::String* Field_6_7; // 0x30
		::UnityEngine::Vector4 Field_6_8; // 0x38
		::UnityEngine::Texture2D* Field_6_9; // 0x48
		::System::String* Field_6_11; // 0x50
		::UnityEngine::Material* modifiMat; // 0x58
		::Class_2_CE524E0BB2F7DB94* LogicRunner; // 0x60
		::Class_1_6C2E46293F2AE988* proxy; // 0x68
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_6_15; // 0x70
		::System::Boolean Field_6_16; // 0x78
		::Class_1_927FD65E44A20102* Field_6_17; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER__CCTOR_OFFSET))();
		}

		::System::UInt32 get_columns()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_COLUMNS_OFFSET))(this);
		}

		::System::UInt32 get_rows()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_ROWS_OFFSET))(this);
		}

		::System::UInt32 get_frames()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_FRAMES_OFFSET))(this);
		}

		::System::UInt32 get_currentFrame()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_CURRENTFRAME_OFFSET))(this);
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::Material* Init(::Class_2_CE524E0BB2F7DB94* a1, ::Class_1_6C2E46293F2AE988* a2, ::Class_2_1A39E1B51756BF41* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::Class_2_CE524E0BB2F7DB94*, ::Class_1_6C2E46293F2AE988*, ::Class_2_1A39E1B51756BF41*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitRawImage(::Class_2_CE524E0BB2F7DB94* a1, ::Class_1_6C2E46293F2AE988* a2, ::Class_2_CA67A9CEB871FFD3* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CE524E0BB2F7DB94*, ::Class_1_6C2E46293F2AE988*, ::Class_2_CA67A9CEB871FFD3*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_INITRAWIMAGE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlaySingleFrame(::Class_1_6C2E46293F2AE988* a1, ::Class_2_1A39E1B51756BF41* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6C2E46293F2AE988*, ::Class_2_1A39E1B51756BF41*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYSINGLEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PlayRawImageSingleFrame(::Class_1_6C2E46293F2AE988* a1, ::Class_2_CA67A9CEB871FFD3* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6C2E46293F2AE988*, ::Class_2_CA67A9CEB871FFD3*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_PLAYRAWIMAGESINGLEFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ONDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRuntimeFrequency(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REFRESHRUNTIMEFREQUENCY_OFFSET))(this, a1);
		}

		::System::Void AddEndEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_ADDENDEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveEndEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_UITEXTURESHEETRENDER_REMOVEENDEVENT_OFFSET))(this, a1);
		}
	};
}
