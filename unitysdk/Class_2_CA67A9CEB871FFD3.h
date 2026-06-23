#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A01CE0B13E11F09E.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_1_6C2E46293F2AE988;
class Class_2_A9A857AD270B9CE1;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CA67A9CEB871FFD3_CLEAN_OFFSET UNITYSDK_OFFSET(0x1020C970)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x1020D190)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1020D9E0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1020E220)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET UNITYSDK_OFFSET(0x1020E1D0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET UNITYSDK_OFFSET(0x1020E230)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1020CA70)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_36379395234B1A4B_OFFSET UNITYSDK_OFFSET(0x1020CE10)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1020D130)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4FCDDB306894EC3B_OFFSET UNITYSDK_OFFSET(0x1020E3D0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_57A58AD5613B17C3_OFFSET UNITYSDK_OFFSET(0x1020E030)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET UNITYSDK_OFFSET(0x1020E200)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1020E430)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET UNITYSDK_OFFSET(0x1020E310)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET UNITYSDK_OFFSET(0x1020CFF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1020E3C0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x1020CE70)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1020CC90)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF0383B32411EDFF_OFFSET UNITYSDK_OFFSET(0x1020C4B0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1020D4B0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_B1E3EF67E57221AF_OFFSET UNITYSDK_OFFSET(0x1020D800)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_C1E3C8B35D07C175_OFFSET UNITYSDK_OFFSET(0x1020DA40)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1020D770)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x1020D0A0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x1020E2E0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8D020FFA49681E6_OFFSET UNITYSDK_OFFSET(0x1020DEA0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET UNITYSDK_OFFSET(0x1020D250)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_EE9AECE5C1FEDF90_OFFSET UNITYSDK_OFFSET(0x1020D340)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1020D110)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F462E893BDFB7EFD_OFFSET UNITYSDK_OFFSET(0x1020E1E0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x1020D6D0)
#define CLASS_2_CA67A9CEB871FFD3_SETGREY_OFFSET UNITYSDK_OFFSET(0x1020C690)
#define CLASS_2_CA67A9CEB871FFD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1020CBE0)
#define CLASS_2_CA67A9CEB871FFD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1020CB80)

inline static constexpr unsigned int Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex = 45785;

class Class_2_CA67A9CEB871FFD3 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>** StaticGet_Field_2_8()
	{
		return (::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0x3BD80);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0xEB70);
	}
	::UnityEngine::CanvasGroup* Field_2_3; // 0x20
	::Foundation::AssetPath Field_2_4; // 0x28
	::UnityEngine::Material* Field_2_11; // 0x38
	::UnityEngine::Material* Field_2_9; // 0x40
	::UnityEngine::Material* Field_2_10; // 0x48
	::Class_2_A9A857AD270B9CE1* Field_2_1; // 0x50
	::UnityEngine::UI::RawImage* Field_2_2; // 0x58
	::Foundation::AssetRequestHandle Field_2_5; // 0x60
	::Class_1_6C2E46293F2AE988* Field_2_6; // 0x80
	::Foundation::Coroutine::CoroutineHandle Field_2_7; // 0x88
	::System::Boolean Field_2_13; // 0x8C
	::System::Boolean Field_2_12; // 0x8D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3__CCTOR_OFFSET))();
	}

	::System::Void Method_2_AF0383B32411EDFF(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF0383B32411EDFF_OFFSET))(this, a1, a2);
	}

	::System::Void SetGrey(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_SETGREY_OFFSET))(this, a1);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_CLEAN_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_2_36379395234B1A4B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_36379395234B1A4B_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_E92D3295A6133F2B(::Class_2_A9A857AD270B9CE1* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)(::Class_2_A9A857AD270B9CE1*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_B1E3EF67E57221AF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_B1E3EF67E57221AF_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C1E3C8B35D07C175(::Foundation::AssetPath a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_C1E3C8B35D07C175_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E8D020FFA49681E6(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8D020FFA49681E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_57A58AD5613B17C3(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_57A58AD5613B17C3_OFFSET))(this, a1);
	}

	::UnityEngine::UI::RawImage* Method_2_29233D60F5F7BAAB()
	{
		return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_F462E893BDFB7EFD()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F462E893BDFB7EFD_OFFSET))(this);
	}

	::System::Void Method_2_EE9AECE5C1FEDF90(::Class_2_A9A857AD270B9CE1* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_EE9AECE5C1FEDF90_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Texture* Method_2_63A873D8342FF3FC()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET))(this);
	}

	::Class_1_6C2E46293F2AE988* Method_2_24748FC20F375725()
	{
		return ((::Class_1_6C2E46293F2AE988*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_2B653550E05B1799(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color Method_2_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786_1(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_6C2E46293F2AE988* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C2E46293F2AE988*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FCDDB306894EC3B(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4FCDDB306894EC3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}
};
