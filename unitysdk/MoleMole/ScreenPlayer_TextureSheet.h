#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7679BF924C438A9.h"
#include "unitysdk/Enum_3_C2590AF4587ACE76.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_8A43CC995889687F;
class Class_2_AA9239F66AD90F88;
class Class_2_AA9239F66AD90F88_1;
class Class_2_AA9239F66AD90F88_2;
class Class_2_AA9239F66AD90F88_5;
class Class_2_AA9239F66AD90F88_6;
class Class_2_CE524E0BB2F7DB94;
class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FDF0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FDD0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1870FDA0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FDB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_026B7F681475D270_OFFSET UNITYSDK_OFFSET(0x18711B80)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x18714AB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_2E29690E1B092362_OFFSET UNITYSDK_OFFSET(0x18714000)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_383DEEFB6D71D0DE_OFFSET UNITYSDK_OFFSET(0x187111C0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x18712470)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18710C60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4D9A31748A276D0D_OFFSET UNITYSDK_OFFSET(0x18710EF0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_54065AC20831F9C7_OFFSET UNITYSDK_OFFSET(0x18711920)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x18710CB0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x187103B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6DD11CBFF7EBF414_OFFSET UNITYSDK_OFFSET(0x187121B0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_9005D98E6B48F698_OFFSET UNITYSDK_OFFSET(0x18711F80)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_9D1353263EAF48A2_OFFSET UNITYSDK_OFFSET(0x187110F0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0x18714CC0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_C28F738626666943_OFFSET UNITYSDK_OFFSET(0x187100E0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18714A60)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18710E50)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CD2D87CBEB0BE68B_OFFSET UNITYSDK_OFFSET(0x18710E90)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_D0EDFA57F5E97657_OFFSET UNITYSDK_OFFSET(0x187135F0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_DA031E28300472A6_OFFSET UNITYSDK_OFFSET(0x18713E30)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_E922D61320BAF84C_OFFSET UNITYSDK_OFFSET(0x18714300)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x18713250)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x18710430)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_F32F347211AEC9F9_OFFSET UNITYSDK_OFFSET(0x18712AE0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FABA8DBB025E1AC9_OFFSET UNITYSDK_OFFSET(0x18713400)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FF88AD7E425B49D4_OFFSET UNITYSDK_OFFSET(0x18713DD0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FE00)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FDE0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET UNITYSDK_OFFSET(0x1870FDC0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET UNITYSDK_OFFSET(0x187100D0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1870FE10)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_TypeDefinitionIndex = 67510;

	class ScreenPlayer_TextureSheet : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PoolCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScreenPlayer_TextureSheet_TypeDefinitionIndex)->GetStaticField(0x10AC0);
		}
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_5*>* floats; // 0x10
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_1*>* vectors; // 0x18
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88*>* matricies; // 0x20
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_2*>* textures; // 0x28
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_6*>* constantBuffers; // 0x30
		::System::Collections::Generic::List_1<::Class_2_AA9239F66AD90F88_6*>* computeBuffers; // 0x38
		::System::Boolean mpbFullCopy; // 0x40
		::Enum_3_C2590AF4587ACE76 _state; // 0x44
		::MoleMole::StaticSceneObjectListLoopType _staticSceneObjectListLoopType; // 0x48
		::UnityEngine::Vector4 defaultOffset; // 0x4C
		::System::Int32 LogicRenderIndex; // 0x5C
		::System::Int32 LogicMaterialIndex; // 0x60
		::System::Int32 Current_PropertyID_Offset; // 0x64
		::System::Single cacheForceWrapRepeat; // 0x68
		::System::Boolean _isAsyncInitSuccess; // 0x6C
		::System::Int32 _initToken; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _TextureRequestHandleDic_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* initSyncRequestHandleDic; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* _PreAsyncRequestHandleDic_k__BackingField; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _AsyncReadyRequestHandleDic_k__BackingField; // 0x90
		::Class_2_CE524E0BB2F7DB94* logic; // 0x98
		::ScreenPlayData* data; // 0xA0
		::UnityEngine::Texture2D* transparentTexture; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* _startTimeLoopFrames; // 0xB0
		::MoleMole::TextureSheetLoopFrame* _startTimeLoopFrame; // 0xB8
		::System::Action_1<::System::Boolean>* result; // 0xC0
		::System::Int32 runingFrameIndex; // 0xC8
		::Class_1_8A43CC995889687F* screenRenderModifyer; // 0xD0
		::UnityEngine::LODGroup* _lODGroup; // 0xD8
		::UnityEngine::MaterialPropertyBlock* renderBlock; // 0xE0
		::Enum_3_B7679BF924C438A9 lodType; // 0xE8
		::UnityEngine::Renderer* render; // 0xF0
		::UnityEngine::GameObject* ScreenObject; // 0xF8
		::UnityEngine::Texture2D* currentTexture; // 0x100
		::System::Boolean useInstanceMat; // 0x108
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* renderMaterials; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET__CCTOR_OFFSET))();
		}

		::Enum_3_C2590AF4587ACE76 get_State()
		{
			return ((::Enum_3_C2590AF4587ACE76(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_STATE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_TextureRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_TextureRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_TEXTUREREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* get_PreAsyncRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_PreAsyncRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_PREASYNCREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* get_AsyncReadyRequestHandleDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_GET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this);
		}

		::System::Void set_AsyncReadyRequestHandleDic(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_SET_ASYNCREADYREQUESTHANDLEDIC_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_C28F738626666943()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_C28F738626666943_OFFSET))(this);
		}

		static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
		}

		::System::Void Method_1_F07808AF19FA033A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_F07808AF19FA033A_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_CD2D87CBEB0BE68B(::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CD2D87CBEB0BE68B_OFFSET))(this, a1);
		}

		::System::Void Method_1_4D9A31748A276D0D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4D9A31748A276D0D_OFFSET))(this);
		}

		::System::Boolean Method_1_9D1353263EAF48A2(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_9D1353263EAF48A2_OFFSET))(this, a1);
		}

		::System::Void Method_1_383DEEFB6D71D0DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_383DEEFB6D71D0DE_OFFSET))(this);
		}

		::System::Int32 Method_1_54065AC20831F9C7(::UnityEngine::Shader* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_54065AC20831F9C7_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_026B7F681475D270()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_026B7F681475D270_OFFSET))(this);
		}

		::System::Void Method_1_9005D98E6B48F698(::UnityEngine::GameObject* a1, ::Enum_3_B7679BF924C438A9 a2, ::ScreenPlayData* a3, ::System::Action_1<::System::Boolean>* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_B7679BF924C438A9, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_9005D98E6B48F698_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_1_F32F347211AEC9F9(::Enum_3_B7679BF924C438A9 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_B7679BF924C438A9))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_F32F347211AEC9F9_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_FABA8DBB025E1AC9(::ScreenPlayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FABA8DBB025E1AC9_OFFSET))(this, a1);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_1_595E641DF1B4387D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_595E641DF1B4387D_OFFSET))(this);
		}

		::System::Void Method_1_FF88AD7E425B49D4(::MoleMole::ScreenPlayer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ScreenPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_FF88AD7E425B49D4_OFFSET))(this, a1);
		}

		::System::Void Method_1_6DD11CBFF7EBF414(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_6DD11CBFF7EBF414_OFFSET))(this, a1);
		}

		::System::Void Method_1_DA031E28300472A6(::UnityEngine::GameObject* a1, ::Enum_3_B7679BF924C438A9 a2, ::ScreenPlayData* a3, ::System::Action_1<::System::Boolean>* a4, ::System::Action_1<::System::Boolean>* a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_B7679BF924C438A9, ::ScreenPlayData*, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_DA031E28300472A6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_1_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Void Method_1_E922D61320BAF84C(::System::Object* a1, ::Foundation::AssetRequestHandle a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_E922D61320BAF84C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D0EDFA57F5E97657()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_D0EDFA57F5E97657_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_1_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_1_2E29690E1B092362(::System::String* a1, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_2E29690E1B092362_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
		}
	};
}
