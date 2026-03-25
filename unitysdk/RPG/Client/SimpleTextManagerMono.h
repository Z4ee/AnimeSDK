#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_BatchState.h"
#include "unitysdk/RPG/Client/SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_2.h"
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
namespace RPG::Client { class SimpleTextManagerMono_Class_1_051CC31C85A0A884; }
namespace RPG::Client { class SimpleTextManagerMono_Class_1_7F572A2075EA0638; }
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

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0xA48FA10)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0xA48AA00)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xA48C540)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET UNITYSDK_OFFSET(0xA491310)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_117D6E49E7E02C23_OFFSET UNITYSDK_OFFSET(0xA491320)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_1968254790725541_OFFSET UNITYSDK_OFFSET(0xA492500)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_236654F9BBB4920F_OFFSET UNITYSDK_OFFSET(0xA496D90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_2B5FB28692E10CF8_OFFSET UNITYSDK_OFFSET(0xA497080)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0xA48D820)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_4CCFA465686650A3_OFFSET UNITYSDK_OFFSET(0xA492000)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA48FFD0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_52C9A41EF07B6497_OFFSET UNITYSDK_OFFSET(0xA496A20)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_59238DC2200E9C17_OFFSET UNITYSDK_OFFSET(0xA490830)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_5EE25971C63BF127_OFFSET UNITYSDK_OFFSET(0xA492A40)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_63026F95F04E0755_OFFSET UNITYSDK_OFFSET(0xA48C860)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_79E2D1959C17629D_OFFSET UNITYSDK_OFFSET(0xA4938E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_7FBFC04DB341E38F_OFFSET UNITYSDK_OFFSET(0xA491450)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_84C4B29CED539C51_OFFSET UNITYSDK_OFFSET(0xA4934A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_9E52EF4365554D75_OFFSET UNITYSDK_OFFSET(0xA491060)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_A4F8F255E319AE95_OFFSET UNITYSDK_OFFSET(0xA492870)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DA3DBED770271634_OFFSET UNITYSDK_OFFSET(0xA4970F0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DC7497A58B0677FC_OFFSET UNITYSDK_OFFSET(0xA493740)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DD4E676A9BB0CD7C_OFFSET UNITYSDK_OFFSET(0xA491670)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_F9326FB93A1F02CB_OFFSET UNITYSDK_OFFSET(0xA496AA0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA490140)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA48FAE0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA4907E0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETBATCHORDERDIRTY_OFFSET UNITYSDK_OFFSET(0xA489100)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_SETTRACKDIRTY_OFFSET UNITYSDK_OFFSET(0xA488880)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_UPDATEBATCH_OFFSET UNITYSDK_OFFSET(0xA48C690)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_3_0_OFFSET UNITYSDK_OFFSET(0xA48FA90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__CCTOR_OFFSET UNITYSDK_OFFSET(0xA497450)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0xA497190)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_TypeDefinitionIndex = 59540;

	class SimpleTextManagerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>** StaticGet_Field_5_6()
		{
			return (::Collections::Pooled::PooledList_1<::RPG::Client::SimpleTextManagerMono*>**)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x24320);
		}
		static ::System::Int32* StaticGet_Field_5_29()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A00);
		}
		static ::System::Int32* StaticGet_Field_5_32()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A04);
		}
		static ::System::Int32* StaticGet_Field_5_31()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A08);
		}
		static ::System::Int32* StaticGet_Field_5_27()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A0C);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_5_35()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A10);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_5_33()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A18);
		}
		static ::System::Int32* StaticGet_Field_5_30()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A20);
		}
		static ::System::Int32* StaticGet_Layer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A24);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_5_34()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A28);
		}
		static ::System::Int32* StaticGet_Field_5_28()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SimpleTextManagerMono_TypeDefinitionIndex)->GetStaticField(0x9A30);
		}
		// static const ::System::Int32 Field_5_26 = 0x60; // 0x0
		::UnityEngine::TextGenerator* Field_5_1; // 0x18
		::UnityEngine::Material* Field_5_2; // 0x20
		::UnityEngine::Material* Field_5_3; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::UnityEngine::Material*>* Field_5_4; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Font*, ::System::Int32>, ::RPG::Client::SimpleTextManagerMono_Class_1_7F572A2075EA0638*>* Field_5_5; // 0x38
		::RPG::Client::SimpleTextManagerMono_Class_1_051CC31C85A0A884* Field_5_7; // 0x40
		::UnityEngine::Canvas* Field_5_8; // 0x48
		::RPG::Client::SimpleTextTextureConfig* Field_5_9; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_10; // 0x58
		::Il2CppArray<::UnityEngine::Color32>* Field_5_11; // 0x60
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_12; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_13; // 0x70
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_14; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_15; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_16; // 0x88
		::Il2CppArray<::System::Int32>* Field_5_17; // 0x90
		::System::Int32 Field_5_18; // 0x98
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_5_19; // 0xA0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Font*, ::Collections::Pooled::PooledList_1<::RPG::Client::SimpleText*>*>* Field_5_20; // 0xA8
		::System::Func_3<::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*, ::System::Int32>* Field_5_21; // 0xB0
		::System::Boolean Field_5_22; // 0xB8
		::System::Boolean Field_5_23; // 0xB9
		::System::Boolean Field_5_24; // 0xBA
		::RPG::Client::SimpleTextManagerMono_BatchState Field_5_25; // 0xBC

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

		::RPG::Client::SimpleTextManagerMono_Class_1_051CC31C85A0A884* get_SDFGenerator()
		{
			return ((::RPG::Client::SimpleTextManagerMono_Class_1_051CC31C85A0A884*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_SDFGENERATOR_OFFSET))(this);
		}

		static ::UnityEngine::TextGenerationSettings get_DefaultTextGenerationSettings()
		{
			return ((::UnityEngine::TextGenerationSettings(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_GET_DEFAULTTEXTGENERATIONSETTINGS_OFFSET))();
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_63026F95F04E0755()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_63026F95F04E0755_OFFSET))(this);
		}

		::System::Void Method_5_3060617FE14209CC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_3060617FE14209CC_OFFSET))(this, a1);
		}

		::System::Void Method_5_DD4E676A9BB0CD7C(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector2 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DD4E676A9BB0CD7C_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_4CCFA465686650A3(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_4CCFA465686650A3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_5EE25971C63BF127(::RPG::Client::SimpleText* a1, ::UnityEngine::Matrix4x4 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Matrix4x4, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_5EE25971C63BF127_OFFSET))(this, a1, a2, a3);
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

		::RPG::Client::SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_2 Method_5_A4F8F255E319AE95(::RPG::Client::SimpleText* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::RPG::Client::SimpleTextManagerMono_Struct_2_FD8E1D4014EE315F_2(*)(::PVOID, ::RPG::Client::SimpleText*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_A4F8F255E319AE95_OFFSET))(this, a1, a2);
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

		::System::Void Method_5_117D6E49E7E02C23()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_117D6E49E7E02C23_OFFSET))(this);
		}

		::System::Void Method_5_236654F9BBB4920F(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_236654F9BBB4920F_OFFSET))(this, a1);
		}

		::System::Void Method_5_2B5FB28692E10CF8(::UnityEngine::Font* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_2B5FB28692E10CF8_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_F9326FB93A1F02CB(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_F9326FB93A1F02CB_OFFSET))(a1);
		}

		static ::System::Int32 Method_5_DA3DBED770271634(::RPG::Client::SimpleText* a1, ::RPG::Client::SimpleText* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::SimpleText*, ::RPG::Client::SimpleText*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_METHOD_5_DA3DBED770271634_OFFSET))(a1, a2);
		}

		::System::Collections::IEnumerator* _Awake_g__Setup_3_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__AWAKE_G__SETUP_3_0_OFFSET))(this);
		}
	};
}
