#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase_CharaEffectRenderEffectMaterialItem.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class MonoEffectPluginCharaReplaceMatBase; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x9CA6850)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_0588FB338A0E8057_OFFSET UNITYSDK_OFFSET(0x9CA4960)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x9CA50D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_65F5F75854E9B212_OFFSET UNITYSDK_OFFSET(0x9CA6DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x9CA5860)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6D231761C06CEE7A_OFFSET UNITYSDK_OFFSET(0x9CA7100)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0x9CA43A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_803856DB6C5D9DB5_OFFSET UNITYSDK_OFFSET(0x9CA48E0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_92A2C40C081B6728_OFFSET UNITYSDK_OFFSET(0x9CA7710)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x9CA4760)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x9CA57B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_B074F66A040CA62D_OFFSET UNITYSDK_OFFSET(0x9CA6B00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_BC3AB2EA1B09C7DF_OFFSET UNITYSDK_OFFSET(0x9CA6F70)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_CFF186DABBCF1E70_OFFSET UNITYSDK_OFFSET(0x9CA56A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x9C956F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CA77C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C95820)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex = 57223;

	class MonoEffectPluginCharaOverlayMatBase : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Field_7_22()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex)->GetStaticField(0x36570);
		}
		static ::System::Int32* StaticGet_Field_7_21()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex)->GetStaticField(0x10E40);
		}
		::UnityEngine::Material* EffectMat; // 0x150
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaOverlayMatBase_CharaEffectRenderEffectMaterialItem>* RendererEffectMats; // 0x158
		::Il2CppArray<::System::Int32>* OverlayPasses; // 0x160
		::System::Boolean AfterTransparent; // 0x168
		::Il2CppArray<::System::Boolean>* AfterTransparentArray; // 0x170
		::System::Boolean IgnoreMPB; // 0x178
		::System::Boolean DrawMeshMode; // 0x179
		::System::Boolean DisableOverlayForwardEmission; // 0x17A
		::System::Boolean UseGBufferEmission; // 0x17B
		::System::Boolean DrawReflection; // 0x17C
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder PassExecutionOrder; // 0x180
		::System::Boolean EnableOverlayPassesHalfRes; // 0x184
		::Il2CppArray<::System::Int32>* OverlayPassesHalfRes; // 0x188
		::Il2CppArray<::System::String*>* HalfResRendererNamesExcluded; // 0x190
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_7_14; // 0x198
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_7_15; // 0x1A0
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* Field_7_16; // 0x1A8
		::Il2CppArray<::System::Int32>* Field_7_17; // 0x1B0
		::UnityEngine::Bounds Field_7_18; // 0x1B8
		::UnityEngine::Matrix4x4 Field_7_19; // 0x1D0
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaReplaceMatBase*>* Field_7_20; // 0x210

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CCTOR_OFFSET))();
		}

		::System::Void Method_7_6EECE8924BBFC43C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6EECE8924BBFC43C_OFFSET))(this);
		}

		::System::Boolean Method_7_0588FB338A0E8057(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_0588FB338A0E8057_OFFSET))(this, a1);
		}

		::System::Void Method_7_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_D78B51BFDA4B8B32_OFFSET))(this);
		}

		::System::Void Method_7_CFF186DABBCF1E70(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_CFF186DABBCF1E70_OFFSET))(this, a1);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_7_6A0EBEECA245A27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6A0EBEECA245A27C_OFFSET))(this);
		}

		::System::Void Method_7_03A81715BD2AFEF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_03A81715BD2AFEF3_OFFSET))(this);
		}

		::UnityEngine::Material* Method_7_B074F66A040CA62D(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_B074F66A040CA62D_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* Method_7_65F5F75854E9B212(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::UnityEngine::Renderer* a3)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_65F5F75854E9B212_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Material* Method_7_BC3AB2EA1B09C7DF(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_BC3AB2EA1B09C7DF_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* Method_7_803856DB6C5D9DB5()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_803856DB6C5D9DB5_OFFSET))(this);
		}

		::System::Void Method_7_6D231761C06CEE7A(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6D231761C06CEE7A_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_92A2C40C081B6728(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_92A2C40C081B6728_OFFSET))(this, a1);
		}

		::System::Void Method_7_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_33E2FA8E6403B93D_OFFSET))(this);
		}
	};
}
