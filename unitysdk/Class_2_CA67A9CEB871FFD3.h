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
class Class_2_A4D62D05D5EA8464;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_CA67A9CEB871FFD3_CLEAN_OFFSET UNITYSDK_OFFSET(0x1A7C7920)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0x1A7C9180)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x1A7C7CF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A7C9620)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET UNITYSDK_OFFSET(0x1A7C8610)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET UNITYSDK_OFFSET(0x1A7C8A50)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1A7C7A20)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A7C83D0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_57A58AD5613B17C3_OFFSET UNITYSDK_OFFSET(0x1A7C9460)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_5B35E8A9140B6905_OFFSET UNITYSDK_OFFSET(0x1A7C9400)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET UNITYSDK_OFFSET(0x1A7C8690)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x1A7C8DC0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET UNITYSDK_OFFSET(0x1A7C90B0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET UNITYSDK_OFFSET(0x1A7C7D50)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1A7C90A0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_1_OFFSET UNITYSDK_OFFSET(0x1A7C88D0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1A7C7E00)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF0383B32411EDFF_OFFSET UNITYSDK_OFFSET(0x1A7C7450)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1A7C86B0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_B1E3EF67E57221AF_OFFSET UNITYSDK_OFFSET(0x1A7C8430)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_B407859AC55E76F0_OFFSET UNITYSDK_OFFSET(0x1A7C7F80)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_B7140EA69FDAD9CE_OFFSET UNITYSDK_OFFSET(0x1A7C8D60)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A7C9630)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET UNITYSDK_OFFSET(0x1A7C8620)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET UNITYSDK_OFFSET(0x1A7C9240)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8D020FFA49681E6_OFFSET UNITYSDK_OFFSET(0x1A7C9270)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET UNITYSDK_OFFSET(0x1A7C8B00)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_EE9AECE5C1FEDF90_OFFSET UNITYSDK_OFFSET(0x1A7C8BF0)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A7C9600)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F462E893BDFB7EFD_OFFSET UNITYSDK_OFFSET(0x1A7C9160)
#define CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x1A7C7C50)
#define CLASS_2_CA67A9CEB871FFD3_SETGREY_OFFSET UNITYSDK_OFFSET(0x1A7C7630)
#define CLASS_2_CA67A9CEB871FFD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7C7BA0)
#define CLASS_2_CA67A9CEB871FFD3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C7B40)

inline static constexpr unsigned int Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex = 47298;

class Class_2_CA67A9CEB871FFD3 : public ::Class_1_A01CE0B13E11F09E
{
public:
	static ::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>** StaticGet_Field_2_10()
	{
		return (::Foundation::ObjectPool_1<::Class_2_CA67A9CEB871FFD3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0x354B0);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA67A9CEB871FFD3_TypeDefinitionIndex)->GetStaticField(0xC640);
	}
	::Foundation::AssetPath Field_2_6; // 0x20
	::Foundation::AssetRequestHandle Field_2_5; // 0x30
	::UnityEngine::Material* Field_2_8; // 0x50
	::Class_1_6C2E46293F2AE988* Field_2_4; // 0x58
	::UnityEngine::Material* Field_2_15; // 0x60
	::UnityEngine::CanvasGroup* Field_2_7; // 0x68
	::Class_2_A4D62D05D5EA8464* Field_2_1; // 0x70
	::UnityEngine::UI::RawImage* Field_2_0; // 0x78
	::UnityEngine::Material* Field_2_9; // 0x80
	::Foundation::Coroutine::CoroutineHandle Field_2_11; // 0x88
	::System::Boolean Field_2_14; // 0x8C
	::System::Boolean Field_2_13; // 0x8D

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

	::System::Void Method_2_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_70EC476DADA4E786(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Boolean Method_2_B407859AC55E76F0(::Foundation::AssetPath a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_B407859AC55E76F0_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_B1E3EF67E57221AF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_B1E3EF67E57221AF_OFFSET))(this);
	}

	::UnityEngine::UI::RawImage* Method_2_29233D60F5F7BAAB()
	{
		return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_29233D60F5F7BAAB_OFFSET))(this);
	}

	::System::Void Method_2_DF1C0FC46B60C2C9(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_DF1C0FC46B60C2C9_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_2_63A873D8342FF3FC()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_63A873D8342FF3FC_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_97D83E4CB3B11935_1_OFFSET))(this);
	}

	::System::Boolean Method_2_2B653550E05B1799(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_2B653550E05B1799_OFFSET))(this, a1, a2);
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_E92D3295A6133F2B(::Class_2_A4D62D05D5EA8464* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)(::Class_2_A4D62D05D5EA8464*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E92D3295A6133F2B_OFFSET))(a1, a2);
	}

	::System::Void Method_2_B7140EA69FDAD9CE(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_B7140EA69FDAD9CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_6C2E46293F2AE988* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6C2E46293F2AE988*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_70EC476DADA4E786_1(::System::String* a1, ::MoleMole::TextureSheetType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_70EC476DADA4E786_1_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Material* Method_2_F462E893BDFB7EFD()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F462E893BDFB7EFD_OFFSET))(this);
	}

	static ::Class_2_CA67A9CEB871FFD3* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_CA67A9CEB871FFD3*(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	::UnityEngine::Color Method_2_E8024D1B75A10789()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8024D1B75A10789_OFFSET))(this);
	}

	::System::Void Method_2_E8D020FFA49681E6(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_E8D020FFA49681E6_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B35E8A9140B6905(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_5B35E8A9140B6905_OFFSET))(this, a1);
	}

	::System::Void Method_2_57A58AD5613B17C3(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_57A58AD5613B17C3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::Class_1_6C2E46293F2AE988* Method_2_24748FC20F375725()
	{
		return ((::Class_1_6C2E46293F2AE988*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_EE9AECE5C1FEDF90(::Class_2_A4D62D05D5EA8464* a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_2_CA67A9CEB871FFD3_METHOD_2_EE9AECE5C1FEDF90_OFFSET))(this, a1, a2);
	}
};
