#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_681685FAADA1782B_Struct_2_858CA0FA4E25FA3C.h"
#include "unitysdk/Class_1_CEF07D2949A09D64_AtlasResolutionMode.h"
#include "unitysdk/Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3.h"
#include "unitysdk/Class_1_CEF07D2949A09D64_TextureExportFormat.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_681685FAADA1782B;
class Class_1_681685FAADA1782B_Class_1_5C9211387FF6C018;
class Class_1_CEF07D2949A09D64_Class_1_3B76E13757985C28_2;
class Class_1_CEF07D2949A09D64_Class_1_66BD53981B36E251;
class Class_1_CEF07D2949A09D64_SurfaceCard;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CEF07D2949A09D64_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x1A84DE00)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1A8522F0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x1A853040)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1A84CA90)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_2EB6C6E68D1EB565_OFFSET UNITYSDK_OFFSET(0x1A84EE40)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_4318B85CDC185E01_OFFSET UNITYSDK_OFFSET(0x1A851E70)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x1A84E050)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x1A84CA00)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_5159619E3714A461_OFFSET UNITYSDK_OFFSET(0x1A852150)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_57736F068D6AC0F2_OFFSET UNITYSDK_OFFSET(0x1A851CA0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_5F854026AC38AB32_OFFSET UNITYSDK_OFFSET(0x1A852480)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x1A84CF00)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_69E157B31FCB3917_OFFSET UNITYSDK_OFFSET(0x1A84CA20)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x1A84D9B0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1A84CAA0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x1A84F3E0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_7C5CDF4426C5FDDE_OFFSET UNITYSDK_OFFSET(0x1A850290)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x1A84CBC0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_9103BB3581476C3B_OFFSET UNITYSDK_OFFSET(0x1A850340)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x1A84CA10)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1A84CFE0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_C1D29AE6C42224DB_OFFSET UNITYSDK_OFFSET(0x1A84EFF0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1A84CB40)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A84EFB0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x1A84D930)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x1A84FCE0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_F21FCD4EA37E5C36_OFFSET UNITYSDK_OFFSET(0x1A852030)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_F330CC829AB218C0_OFFSET UNITYSDK_OFFSET(0x1A850E80)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_FE97A8FE738D0B4E_OFFSET UNITYSDK_OFFSET(0x1A852ED0)
#define CLASS_1_CEF07D2949A09D64_METHOD_1_FF39515A10F03A56_OFFSET UNITYSDK_OFFSET(0x1A850C40)
#define CLASS_1_CEF07D2949A09D64__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8531A0)

inline static constexpr unsigned int Class_1_CEF07D2949A09D64_TypeDefinitionIndex = 52046;

class Class_1_CEF07D2949A09D64 : public ::System::Object
{
public:
	// static const ::System::Boolean IELINPCOOIN; // 0x0
	::UnityEngine::Transform* DLFBEADOODM; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_SurfaceCard*>* FLLAPBKDFEF; // 0x18
	::UnityEngine::GameObject* NGOPGBACPFM; // 0x20
	::UnityEngine::Texture2D* PEODEJAAPJG; // 0x28
	::UnityEngine::GameObject* JHABCIKOMBL; // 0x30
	::System::String* JPBMDECNKLJ; // 0x38
	::System::String* HBEOGNMCJOA; // 0x40
	::Class_1_681685FAADA1782B* ABDGGIAEHEA; // 0x48
	::UnityEngine::RenderTexture* NFCDGIPIKDA; // 0x50
	::UnityEngine::Camera* PEDDHLIKIMJ; // 0x58
	::System::Int32 EHLJHCCAAPK; // 0x60
	::Class_1_CEF07D2949A09D64_TextureExportFormat BPEKIKGINPB; // 0x64
	::System::Int32 FDNLBIPPNAA; // 0x68
	::System::Int32 HCCENPHPHOA; // 0x6C
	::System::Boolean POFNINLJODF; // 0x70
	::System::Boolean AHGKMEDLPMD; // 0x71
	::System::Boolean ABGNPBOGKMC; // 0x72
	::System::Int32 MFIAMKNIDMN; // 0x74
	::System::Single GHBCJMNHDNL; // 0x78
	::Class_1_CEF07D2949A09D64_AtlasResolutionMode LLKDKJEDKLO; // 0x7C
	::System::Single LLDAAGCJEIB; // 0x80
	::System::Single GPMJOGCNNHI; // 0x84
	::System::Int32 ANECCBFPLLA; // 0x88
	::Class_1_CEF07D2949A09D64_TextureExportFormat AJHKHBFAGBD; // 0x8C
	::System::Single BBPNJPHOKGC; // 0x90
	::System::Int32 OHLHHKJGNNF; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_69E157B31FCB3917(::UnityEngine::Transform* a1, ::Class_1_681685FAADA1782B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_681685FAADA1782B*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_69E157B31FCB3917_OFFSET))(this, a1, a2);
	}

	::Class_1_681685FAADA1782B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_681685FAADA1782B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Method_1_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_1_2EB6C6E68D1EB565()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_2EB6C6E68D1EB565_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_C1D29AE6C42224DB(::Class_1_681685FAADA1782B_Class_1_5C9211387FF6C018* a1, ::Class_1_681685FAADA1782B_Struct_2_858CA0FA4E25FA3C a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_1_681685FAADA1782B_Class_1_5C9211387FF6C018*, ::Class_1_681685FAADA1782B_Struct_2_858CA0FA4E25FA3C))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_C1D29AE6C42224DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_1_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_1_FF39515A10F03A56(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_66BD53981B36E251*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_66BD53981B36E251*>*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_FF39515A10F03A56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9103BB3581476C3B(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_3B76E13757985C28_2*>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_66BD53981B36E251*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_3B76E13757985C28_2*>*, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Class_1_66BD53981B36E251*>*&))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_9103BB3581476C3B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F330CC829AB218C0(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::RectInt>*& a3, ::System::Collections::Generic::List_1<::System::Boolean>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::RectInt>*&, ::System::Collections::Generic::List_1<::System::Boolean>*&))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_F330CC829AB218C0_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::RectInt Method_1_57736F068D6AC0F2(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32& a4)
	{
		return ((::UnityEngine::RectInt(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>*, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_57736F068D6AC0F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_F21FCD4EA37E5C36(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_F21FCD4EA37E5C36_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4318B85CDC185E01(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>* a1, ::UnityEngine::RectInt a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>*, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_4318B85CDC185E01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5159619E3714A461(::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CEF07D2949A09D64_Struct_2_BBD456EBC9087BC2_3>*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_5159619E3714A461_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_7C5CDF4426C5FDDE(::Class_1_CEF07D2949A09D64_SurfaceCard* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_CEF07D2949A09D64_SurfaceCard*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_7C5CDF4426C5FDDE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_5F854026AC38AB32(::Class_1_CEF07D2949A09D64_SurfaceCard* a1, ::UnityEngine::MeshRenderer* a2, ::UnityEngine::MeshFilter* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CEF07D2949A09D64_SurfaceCard*, ::UnityEngine::MeshRenderer*, ::UnityEngine::MeshFilter*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_5F854026AC38AB32_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_FE97A8FE738D0B4E(::Class_1_CEF07D2949A09D64_SurfaceCard* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_CEF07D2949A09D64_SurfaceCard*))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_FE97A8FE738D0B4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEF07D2949A09D64_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}
};
