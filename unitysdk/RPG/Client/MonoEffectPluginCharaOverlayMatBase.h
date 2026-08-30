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

#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_0588FB338A0E8057_OFFSET UNITYSDK_OFFSET(0xD7905C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0xD790E00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_684C5B9AABA1063B_OFFSET UNITYSDK_OFFSET(0xD792A00)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xD791540)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6D231761C06CEE7A_OFFSET UNITYSDK_OFFSET(0xD792DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6EECE8924BBFC43C_OFFSET UNITYSDK_OFFSET(0xD790010)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_803856DB6C5D9DB5_OFFSET UNITYSDK_OFFSET(0xD790540)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_92A2C40C081B6728_OFFSET UNITYSDK_OFFSET(0xD7933C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD7914A0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xD7903C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_B074F66A040CA62D_OFFSET UNITYSDK_OFFSET(0xD792750)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_BC3AB2EA1B09C7DF_OFFSET UNITYSDK_OFFSET(0xD792C40)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_CFF186DABBCF1E70_OFFSET UNITYSDK_OFFSET(0xD791390)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xD781300)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0xD792420)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD793470)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD781430)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex = 69913;

	class MonoEffectPluginCharaOverlayMatBase : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DPOBOPKPMHI()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex)->GetStaticField(0xEE80);
		}
		static ::System::Int32* StaticGet_MBDPEFHNBMI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEffectPluginCharaOverlayMatBase_TypeDefinitionIndex)->GetStaticField(0x47C0);
		}
		::UnityEngine::Material* EffectMat; // 0x158
		::Il2CppArray<::RPG::Client::MonoEffectPluginCharaOverlayMatBase_CharaEffectRenderEffectMaterialItem>* RendererEffectMats; // 0x160
		::Il2CppArray<::System::Int32>* OverlayPasses; // 0x168
		::System::Boolean AfterTransparent; // 0x170
		::Il2CppArray<::System::Boolean>* AfterTransparentArray; // 0x178
		::System::Boolean IgnoreMPB; // 0x180
		::System::Boolean DrawMeshMode; // 0x181
		::System::Boolean DisableOverlayForwardEmission; // 0x182
		::System::Boolean UseGBufferEmission; // 0x183
		::System::Boolean DrawReflection; // 0x184
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder PassExecutionOrder; // 0x188
		::System::Boolean EnableOverlayPassesHalfRes; // 0x18C
		::Il2CppArray<::System::Int32>* OverlayPassesHalfRes; // 0x190
		::Il2CppArray<::System::String*>* HalfResRendererNamesExcluded; // 0x198
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* NGKENIHMJJO; // 0x1A0
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* LOKGFIDLBML; // 0x1A8
		::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* MMOOIKLJMFL; // 0x1B0
		::Il2CppArray<::System::Int32>* LGMLIOABMHA; // 0x1B8
		::UnityEngine::Bounds DGNHKKJMNON; // 0x1C0
		::UnityEngine::Matrix4x4 LKEHCIFAJNK; // 0x1D8
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginCharaReplaceMatBase*>* PDHIFDMAPML; // 0x218

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

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_7_6A0EBEECA245A27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_6A0EBEECA245A27C_OFFSET))(this);
		}

		::System::Void Method_7_FA58824BA12F6F62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_FA58824BA12F6F62_OFFSET))(this);
		}

		::UnityEngine::Material* Method_7_B074F66A040CA62D(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_B074F66A040CA62D_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Material* Method_7_684C5B9AABA1063B(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::UnityEngine::Renderer* a3)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARAOVERLAYMATBASE_METHOD_7_684C5B9AABA1063B_OFFSET))(this, a1, a2, a3);
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
