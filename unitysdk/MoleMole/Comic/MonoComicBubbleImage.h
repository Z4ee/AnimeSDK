#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Comic/ComicBubbleImgType.h"
#include "unitysdk/MoleMole/Comic/MonoComicBubbleImage_Struct_2_B97ADA5A37E1598F.h"
#include "unitysdk/MoleMole/Comic/MonoComicBubbleImage_Struct_2_D7E5D2F89431C32A.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Image.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ComicBubbleImgConfig;
namespace MoleMole::Comic { class ComicBubbleImgTypePicConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITGRAPHICPARAMS_OFFSET UNITYSDK_OFFSET(0x12A32E30)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITIMGCONFIG_OFFSET UNITYSDK_OFFSET(0x12A36EF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_02B35846205909DD_OFFSET UNITYSDK_OFFSET(0x12A391B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_0764E01E2137A098_OFFSET UNITYSDK_OFFSET(0x12A3AD30)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_16729685DFD0B031_OFFSET UNITYSDK_OFFSET(0x12A39280)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12A33500)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x12A34960)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x12A33550)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x12A33A00)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12A36E90)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4B52176A6D5FB435_OFFSET UNITYSDK_OFFSET(0x12A3A590)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_608FC9EA0D8581C7_OFFSET UNITYSDK_OFFSET(0x12A3A9B0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6992CF228C5826DD_OFFSET UNITYSDK_OFFSET(0x12A39E40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6BC2B110E5DD6BF2_OFFSET UNITYSDK_OFFSET(0x12A34530)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6DB41C3EEBB33D1B_OFFSET UNITYSDK_OFFSET(0x12A37140)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_7BC6179181D7B050_OFFSET UNITYSDK_OFFSET(0x12A3AC50)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_95A91FDC3076B1C3_OFFSET UNITYSDK_OFFSET(0x12A349E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_A7AAACFF88243D85_OFFSET UNITYSDK_OFFSET(0x12A39530)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_AFAF2B11DF1A6529_OFFSET UNITYSDK_OFFSET(0x12A3B1E0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_B563E475A74B1D4A_OFFSET UNITYSDK_OFFSET(0x12A36620)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_B997F699CFD83C02_OFFSET UNITYSDK_OFFSET(0x12A39890)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_BB1DC7D3BB43F59A_OFFSET UNITYSDK_OFFSET(0x12A396D0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x12A33030)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D5D82F7752891AF2_OFFSET UNITYSDK_OFFSET(0x12A3A760)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D70F0ABF7623198F_OFFSET UNITYSDK_OFFSET(0x12A33A70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D8E8A2AA5D1E44E6_OFFSET UNITYSDK_OFFSET(0x12A3B130)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_DE7CF4FAEAA6D373_OFFSET UNITYSDK_OFFSET(0x12A39570)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_F6FD2E653D0EF4CE_OFFSET UNITYSDK_OFFSET(0x12A39100)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x12A335C0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A37050)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A36F40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x12A37130)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubbleImage_TypeDefinitionIndex = 57239;

	class MonoComicBubbleImage : public ::UnityEngine::UI::Image
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_Field_9_10()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MonoComicBubbleImage_TypeDefinitionIndex)->GetStaticField(0x4A370);
		}
		::System::Single r; // 0x140
		::System::Int32 precision; // 0x144
		::System::Single bezierPrecision; // 0x148
		::System::Single bezierLenOnTriangle; // 0x14C
		::System::Single bezierLenOnBubble; // 0x150
		::System::Single w; // 0x154
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* targets; // 0x158
		::System::Int32 Field_9_9; // 0x160
		::System::Single Field_9_8; // 0x164
		::System::Single Field_9_15; // 0x168
		::System::Single Field_9_14; // 0x16C
		::System::Single Field_9_13; // 0x170
		::System::Single Field_9_12; // 0x174
		::System::Single Field_9_19; // 0x178
		::System::Single Field_9_18; // 0x17C
		::System::Single Field_9_17; // 0x180
		::System::Single Field_9_16; // 0x184
		::UnityEngine::Rect Field_9_23; // 0x188
		::UnityEngine::Vector2 Field_9_22; // 0x198
		::System::Boolean Field_9_21; // 0x1A0
		::MoleMole::Comic::ComicBubbleImgType Field_9_20; // 0x1A4
		::ComicBubbleImgConfig* Field_9_27; // 0x1A8
		::UnityEngine::RectTransform* Field_9_26; // 0x1B0
		::UnityEngine::UI::Image* Field_9_25; // 0x1B8
		::UnityEngine::CanvasGroup* Field_9_24; // 0x1C0
		::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* Field_9_31; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE__CCTOR_OFFSET))();
		}

		::System::Void InitGraphicParams(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2, ::MoleMole::Comic::ComicBubbleImgType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2, ::MoleMole::Comic::ComicBubbleImgType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITGRAPHICPARAMS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void InitImgConfig(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_INITIMGCONFIG_OFFSET))(this, a1);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE___BASE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void Method_9_6DB41C3EEBB33D1B(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::MoleMole::Comic::MonoComicBubbleImage_Struct_2_B97ADA5A37E1598F& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::MoleMole::Comic::MonoComicBubbleImage_Struct_2_B97ADA5A37E1598F&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6DB41C3EEBB33D1B_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Method_9_BB1DC7D3BB43F59A(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_BB1DC7D3BB43F59A_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 Method_9_02B35846205909DD(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_02B35846205909DD_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_9_B563E475A74B1D4A(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Rect a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_B563E475A74B1D4A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_9_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_9_6BC2B110E5DD6BF2(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Rect a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6BC2B110E5DD6BF2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::Vector2 Method_9_A7AAACFF88243D85(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_A7AAACFF88243D85_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_9_D70F0ABF7623198F(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Color32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D70F0ABF7623198F_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single Method_9_4B52176A6D5FB435(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4B52176A6D5FB435_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_9_D5D82F7752891AF2(::System::Single a1, ::System::Boolean a2, ::System::Single& a3, ::MoleMole::Comic::MonoComicBubbleImage_Struct_2_D7E5D2F89431C32A& a4)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single&, ::MoleMole::Comic::MonoComicBubbleImage_Struct_2_D7E5D2F89431C32A&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D5D82F7752891AF2_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Sprite* Method_9_608FC9EA0D8581C7(::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>* a1, ::MoleMole::Comic::ComicBubbleImgType a2, ::System::String* a3)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::Comic::ComicBubbleImgType, ::MoleMole::Comic::ComicBubbleImgTypePicConfig*>*, ::MoleMole::Comic::ComicBubbleImgType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_608FC9EA0D8581C7_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_9_6992CF228C5826DD(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Color32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_6992CF228C5826DD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void Method_9_DE7CF4FAEAA6D373(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_DE7CF4FAEAA6D373_OFFSET))(a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 Method_9_B997F699CFD83C02(::UnityEngine::Vector2 a1, ::UnityEngine::Vector4 a2, ::System::Single a3, ::System::Single& a4)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_B997F699CFD83C02_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_9_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Int32 Method_9_7BC6179181D7B050(::UnityEngine::Rect a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_7BC6179181D7B050_OFFSET))(this, a1);
		}

		::System::Void Method_9_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_1_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 Method_9_16729685DFD0B031(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Vector2 a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_16729685DFD0B031_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_9_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_9_CEA32FF190776922()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_CEA32FF190776922_OFFSET))(this);
		}

		::System::Void Method_9_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_4343F372F34C05BF_3_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 Method_9_F6FD2E653D0EF4CE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_F6FD2E653D0EF4CE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 Method_9_D8E8A2AA5D1E44E6(::UnityEngine::Rect a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_D8E8A2AA5D1E44E6_OFFSET))(this, a1);
		}

		::System::Void Method_9_AFAF2B11DF1A6529(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector4 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Rect a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_AFAF2B11DF1A6529_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_9_95A91FDC3076B1C3(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Color32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector4, ::UnityEngine::Vector2, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_95A91FDC3076B1C3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_9_0764E01E2137A098(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLEIMAGE_METHOD_9_0764E01E2137A098_OFFSET))(this, a1);
		}
	};
}
