#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_BatchState.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/TextGenerationSettings.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class SimpleText; }
namespace RPG::Client { class SimpleTextManagerMono_Class_1_7F572A2075EA0638; }
namespace RPG::Client { class SimpleTextManagerMono_Class_1_AEB38CCB65A662DA; }
namespace RPG::Client { class SimpleTextTextureConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0952B0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xE0909A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xE0920B0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET UNITYSDK_OFFSET(0xE08E4B0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_1968254790725541_OFFSET UNITYSDK_OFFSET(0xE099840)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_4C409DF5E54C7553_OFFSET UNITYSDK_OFFSET(0xE0923D0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_50A40B1E30978D4D_OFFSET UNITYSDK_OFFSET(0xE098F70)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xE0957F0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_52C9A41EF07B6497_OFFSET UNITYSDK_OFFSET(0xE09E580)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_59238DC2200E9C17_OFFSET UNITYSDK_OFFSET(0xE096060)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_61B136594A4551CD_OFFSET UNITYSDK_OFFSET(0xE0929A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_6EFD3243E63860C6_OFFSET UNITYSDK_OFFSET(0xE09EBD0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_76B481793BBB8B18_OFFSET UNITYSDK_OFFSET(0xE097E40)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_79E2D1959C17629D_OFFSET UNITYSDK_OFFSET(0xE09B010)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_7F2F2302B542D18A_OFFSET UNITYSDK_OFFSET(0xE097B20)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0xE097C70)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_84C4B29CED539C51_OFFSET UNITYSDK_OFFSET(0xE09ABE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_89343B500C41249D_OFFSET UNITYSDK_OFFSET(0xE09E8F0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_9E52EF4365554D75_OFFSET UNITYSDK_OFFSET(0xE096C40)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_A6F857A5871E9AC4_OFFSET UNITYSDK_OFFSET(0xE099E30)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_B11A8F18EBB41ACE_OFFSET UNITYSDK_OFFSET(0xE09EC40)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DB32A5537537503B_OFFSET UNITYSDK_OFFSET(0xE099BA0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DC7497A58B0677FC_OFFSET UNITYSDK_OFFSET(0xE09AE70)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_F9326FB93A1F02CB_OFFSET UNITYSDK_OFFSET(0xE09E600)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE095960)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE095340)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xE096010)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETBATCHORDERDIRTY_OFFSET UNITYSDK_OFFSET(0xE08F100)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKDIRTY_OFFSET UNITYSDK_OFFSET(0xE08E170)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKFONTDIRTY_OFFSET UNITYSDK_OFFSET(0xE08E2E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_UPDATEBATCH_OFFSET UNITYSDK_OFFSET(0xE092200)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_4_0_OFFSET UNITYSDK_OFFSET(0xE095310)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0xE09F0A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xE09EDC0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__UPDATETRACKEDTEXT_G__UPDATEIMPL_16_0_OFFSET UNITYSDK_OFFSET(0xE096F20)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_TypeDefinitionIndex = 72570;

	class SimpleTextManagerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>** StaticGet_DFIEIMEAIAP()
		{
			return (::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x25970);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_GPKFNIPPBHC()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB340);
		}
		static ::System::Int32* StaticGet_Layer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB348);
		}
		static ::System::Int32* StaticGet_JMCAODFDFNH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB34C);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EJBNEGFPJOH()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB350);
		}
		static ::System::Int32* StaticGet_PDBEDDNEHKH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB358);
		}
		static ::System::Int32* StaticGet_KDJLFBKOFIF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB35C);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_MFMPAAHOCGP()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB360);
		}
		static ::System::Int32* StaticGet_IMIHBONNNGA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB368);
		}
		static ::System::Int32* StaticGet_OFCOJGEKMML()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB36C);
		}
		static ::System::Int32* StaticGet_JNHEIPBJAJF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0xB370);
		}
		// static const ::System::Int32 DEJIGGDHACD = 0x60; // 0x0
		::UnityEngine::TextGenerator* MAJPAJNLKNM; // 0x18
		::UnityEngine::Material* DDONFNGMNOI; // 0x20
		::UnityEngine::Material* CGHKHJEBJNP; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::UnityEngine::Material*>* MMAIKIMKCJF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Font*, ::System::Int32>, ::RPG::Client::SimpleTextManagerMono_Class_1_7F572A2075EA0638*>* ENILFCNHPAN; // 0x38
		::RPG::Client::SimpleTextManagerMono_Class_1_AEB38CCB65A662DA* BCLKFHBHBEM; // 0x40
		::UnityEngine::Canvas* HEDBJGFDNBN; // 0x48
		::RPG::Client::SimpleTextTextureConfig* FMHLDDIPMHI; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* HCJLAGALICG; // 0x58
		::Il2CppArray<::UnityEngine::Color32>* CGHNCPBLNBL; // 0x60
		::Il2CppArray<::UnityEngine::Vector4>* EPBJOHGCDEM; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* JEKNOKFKNHK; // 0x70
		::Il2CppArray<::UnityEngine::Vector4>* GDNHIIPPKFJ; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* KEDFADOILHI; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* KMFDJOMMONG; // 0x88
		::Il2CppArray<::System::Int32>* MBJCFDJCLNM; // 0x90
		::System::Int32 KGKLENNICOL; // 0x98
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* ELFCMCHGFPG; // 0xA0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleText*>*>* MALFNOKKIGG; // 0xA8
		::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>* OPLAGNIIBEC; // 0xB0
		::System::Boolean HENBOOJOPFO; // 0xB8
		::System::Boolean PAAFBPDANIB; // 0xB9
		::System::Boolean DNKKPLDAACH; // 0xBA
		::System::Boolean OMJCHOFKBME; // 0xBB
		::RPG::Client::SimpleTextManagerMono_BatchState JIDAOBNPCDD; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__CCTOR_OFFSET))();
		}

		static ::System::Void SetTrackDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKDIRTY_OFFSET))();
		}

		static ::System::Void SetTrackFontDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKFONTDIRTY_OFFSET))();
		}

		::System::Void SetBatchOrderDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETBATCHORDERDIRTY_OFFSET))(this);
		}

		::System::Void UpdateBatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_UPDATEBATCH_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void GenerateTextMesh(::System::String* a1, ::UnityEngine::TextGenerationSettings a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3, ::System::Boolean& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GENERATETEXTMESH_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::SimpleTextManagerMono_Class_1_AEB38CCB65A662DA* get_SDFGenerator()
		{
			return ((::RPG::Client::SimpleTextManagerMono_Class_1_AEB38CCB65A662DA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET))(this);
		}

		static ::UnityEngine::TextGenerationSettings get_DefaultTextGenerationSettings()
		{
			return ((::UnityEngine::TextGenerationSettings(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET))();
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_4C409DF5E54C7553()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_4C409DF5E54C7553_OFFSET))(this);
		}

		::System::Void Method_5_61B136594A4551CD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_61B136594A4551CD_OFFSET))(this, a1);
		}

		::System::Void Method_5_76B481793BBB8B18(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector2 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_76B481793BBB8B18_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_50A40B1E30978D4D(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_50A40B1E30978D4D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_A6F857A5871E9AC4(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_A6F857A5871E9AC4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_1968254790725541(::UnityEngine::Font* a1, ::UnityEngine::Font* a2, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::UnityEngine::Font*, ::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_1968254790725541_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_7FBFC04DB341E38F(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_7FBFC04DB341E38F_OFFSET))(this, a1);
		}

		::System::Void Method_5_79E2D1959C17629D(::UnityEngine::Mesh* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_79E2D1959C17629D_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_59238DC2200E9C17(::System::String* a1, ::UnityEngine::TextGenerationSettings& a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings&, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_59238DC2200E9C17_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_9E52EF4365554D75(::System::String* a1, ::UnityEngine::TextGenerationSettings& a2, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::TextGenerationSettings&, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_9E52EF4365554D75_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_3 Method_5_DB32A5537537503B(::RPG::Client::SimpleText* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::RPG::Client::SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_3(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DB32A5537537503B_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* Method_5_52C9A41EF07B6497()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_52C9A41EF07B6497_OFFSET))(this);
		}

		::UnityEngine::Material* Method_5_84C4B29CED539C51(::UnityEngine::Font* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_84C4B29CED539C51_OFFSET))(this, a1);
		}

		::RPG::Client::SimpleTextManagerMono_Class_1_7F572A2075EA0638* Method_5_DC7497A58B0677FC(::UnityEngine::Font* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::SimpleTextManagerMono_Class_1_7F572A2075EA0638*(*)(::PVOID, ::UnityEngine::Font*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DC7497A58B0677FC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7F2F2302B542D18A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_7F2F2302B542D18A_OFFSET))(this);
		}

		::System::Void Method_5_89343B500C41249D(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_89343B500C41249D_OFFSET))(this, a1);
		}

		::System::Void Method_5_6EFD3243E63860C6(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_6EFD3243E63860C6_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_F9326FB93A1F02CB(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_F9326FB93A1F02CB_OFFSET))(a1);
		}

		static ::System::Int32 Method_5_B11A8F18EBB41ACE(::RPG::Client::SimpleText* a1, ::RPG::Client::SimpleText* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_B11A8F18EBB41ACE_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* _Awake_g__Setup_4_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_4_0_OFFSET))(this);
		}

		::System::Void _UpdateTrackedText_g__UpdateImpl_16_0(::UnityEngine::Pooled::PooledList_1<::RPG::Client::SimpleText*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::RPG::Client::SimpleText*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__UPDATETRACKEDTEXT_G__UPDATEIMPL_16_0_OFFSET))(this, a1);
		}
	};
}
