#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTColor.h"
#include "unitysdk/RPG/CustomRP/MaterialIDLUTFloat.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GETBASECHARACTERFILTER_OFFSET UNITYSDK_OFFSET(0x9CA8A90)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_INIT_OFFSET UNITYSDK_OFFSET(0x9CA8650)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_ISNEEDLUTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9CA8610)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_133D4C22955A3FD4_OFFSET UNITYSDK_OFFSET(0x9CA84E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_245FCA46D1ACCF75_OFFSET UNITYSDK_OFFSET(0x9CA8E60)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_24C4877736C7ECC1_OFFSET UNITYSDK_OFFSET(0x9CA8040)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_266142690C1F4DA7_OFFSET UNITYSDK_OFFSET(0x9CA8790)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_29BBC6AFAA753571_OFFSET UNITYSDK_OFFSET(0x9CA78B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_2B99EB539996D3F8_OFFSET UNITYSDK_OFFSET(0x9CA8580)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_32DB126E17E74B6E_OFFSET UNITYSDK_OFFSET(0x9CA7AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_35B47B742E5C0C71_OFFSET UNITYSDK_OFFSET(0x9CA8250)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_36E72ACB3BD131F5_OFFSET UNITYSDK_OFFSET(0x9CA7960)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_442BAD5193320576_OFFSET UNITYSDK_OFFSET(0x9CA7D70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_4468B24F46F4BA49_OFFSET UNITYSDK_OFFSET(0x9CA7F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_5D7F184568E6FC20_OFFSET UNITYSDK_OFFSET(0x9CA7800)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_1_OFFSET UNITYSDK_OFFSET(0x9CA7E30)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_2_OFFSET UNITYSDK_OFFSET(0x9CA7ED0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_OFFSET UNITYSDK_OFFSET(0x9CA7CC0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_76D4F75C62ECEC1B_OFFSET UNITYSDK_OFFSET(0x9CA8C70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_8D61EA2A7BA560ED_OFFSET UNITYSDK_OFFSET(0x9CA8B00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_BAE07EF3370B3AFF_OFFSET UNITYSDK_OFFSET(0x9CA81B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_D9CB18AA1728E62F_OFFSET UNITYSDK_OFFSET(0x9CA7A20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E161C1A6F52E209B_OFFSET UNITYSDK_OFFSET(0x9CA8420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E66230091A8DE09B_OFFSET UNITYSDK_OFFSET(0x9CA8110)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E86AC366BE136CAF_OFFSET UNITYSDK_OFFSET(0x9CA7C20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_EE109D3F15DCF905_OFFSET UNITYSDK_OFFSET(0x9CA7B70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_F17509EC24F95022_OFFSET UNITYSDK_OFFSET(0x9CA82E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_F99794BF9B24DA62_OFFSET UNITYSDK_OFFSET(0x9CA8380)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_UNINIT_OFFSET UNITYSDK_OFFSET(0x9CA8A20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CA9480)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CA9470)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaPropBase_TypeDefinitionIndex = 57225;

	class MonoEffectPluginCharaPropBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_9()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_2()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_4()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_7()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_0()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_8()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_1()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_6()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x366F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_3()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x36700);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_10()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x36708);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Field_5_5()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaPropBase_TypeDefinitionIndex)->GetStaticField(0x36710);
		}
		::Il2CppArray<::System::Boolean>* Field_5_11; // 0x18
		::Il2CppArray<::System::Boolean>* Field_5_12; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_5_13; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* Field_5_14; // 0x30
		::UnityEngine::MaterialPropertyBlock* Field_5_15; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE__CCTOR_OFFSET))();
		}

		::System::Void Method_5_5D7F184568E6FC20(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Single& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_5D7F184568E6FC20_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_29BBC6AFAA753571(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_29BBC6AFAA753571_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_36E72ACB3BD131F5(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_36E72ACB3BD131F5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_D9CB18AA1728E62F(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Color& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Color&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_D9CB18AA1728E62F_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_32DB126E17E74B6E(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture2D*& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture2D*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_32DB126E17E74B6E_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_EE109D3F15DCF905(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture*& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture*&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_EE109D3F15DCF905_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_E86AC366BE136CAF(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector4& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector4&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E86AC366BE136CAF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_69B1D8DE9BA9AD35(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_442BAD5193320576(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector3& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_442BAD5193320576_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_69B1D8DE9BA9AD35_1(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_69B1D8DE9BA9AD35_2(::UnityEngine::Material* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_69B1D8DE9BA9AD35_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_5_4468B24F46F4BA49(::UnityEngine::Material* a1, ::System::Boolean a2, ::RPG::CustomRP::MaterialIDLUTColor a3, ::System::Int32 a4, ::UnityEngine::Color& a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::RPG::CustomRP::MaterialIDLUTColor, ::System::Int32, ::UnityEngine::Color&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_4468B24F46F4BA49_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_24C4877736C7ECC1(::UnityEngine::Material* a1, ::System::Boolean a2, ::RPG::CustomRP::MaterialIDLUTFloat a3, ::System::Int32 a4, ::System::Single& a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Boolean, ::RPG::CustomRP::MaterialIDLUTFloat, ::System::Int32, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_24C4877736C7ECC1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_5_E66230091A8DE09B(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E66230091A8DE09B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_BAE07EF3370B3AFF(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_BAE07EF3370B3AFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_35B47B742E5C0C71(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_35B47B742E5C0C71_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_F17509EC24F95022(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Color a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_F17509EC24F95022_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_F99794BF9B24DA62(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_F99794BF9B24DA62_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_E161C1A6F52E209B(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_E161C1A6F52E209B_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_133D4C22955A3FD4(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Vector4 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_133D4C22955A3FD4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_2B99EB539996D3F8(::UnityEngine::MaterialPropertyBlock* a1, ::System::Boolean a2, ::System::Int32 a3, ::UnityEngine::Texture2D* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Boolean, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_2B99EB539996D3F8_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsNeedLUTProperty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_ISNEEDLUTPROPERTY_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_UNINIT_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetBaseCharacterFilter()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_GETBASECHARACTERFILTER_OFFSET))(this);
		}

		::Il2CppArray<::System::Boolean>* Method_5_266142690C1F4DA7(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_266142690C1F4DA7_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_5_76D4F75C62ECEC1B(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_76D4F75C62ECEC1B_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>* Method_5_245FCA46D1ACCF75(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>* a1, ::Il2CppArray<::System::String*>* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::System::Int32>*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::RPG::Client::MonoEffectPluginCharaEffectBase_Class_1_0875A0359D7C8064*>*, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_245FCA46D1ACCF75_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_5_8D61EA2A7BA560ED(::UnityEngine::Material* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*& a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Shader*, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAPROPBASE_METHOD_5_8D61EA2A7BA560ED_OFFSET))(this, a1, a2);
		}
	};
}
