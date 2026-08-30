#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CommonEffectMatBlockType.h"
#include "unitysdk/RPG/Client/MaterialAnimationBindingSyncBehavior_Struct_2_6E8A5C51216DEA17.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rendering/ShaderPropertyType.h"

namespace RPG::Client { class MaterialAnimationBindingSyncBehavior_SyncChannel; }
namespace RPG::Client { class MaterialAnimationBindingSyncMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialAnimationBinding; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD677360)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xD676C40)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xD677430)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_3014C04216B1299F_OFFSET UNITYSDK_OFFSET(0xD677760)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_30B7D4D85B5DED19_OFFSET UNITYSDK_OFFSET(0xD678220)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_32282915F88A6BB3_OFFSET UNITYSDK_OFFSET(0xD678080)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_492A229C2726426C_OFFSET UNITYSDK_OFFSET(0xD679130)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_58F0D8DA0C8AA122_OFFSET UNITYSDK_OFFSET(0xD6787B0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_6011BBCAB21C4BB7_OFFSET UNITYSDK_OFFSET(0xD677010)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_62FC2DCD2EF869D5_OFFSET UNITYSDK_OFFSET(0xD676C80)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_66434B78FF1C3165_OFFSET UNITYSDK_OFFSET(0xD677CC0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_68A37D9B80DCB4F0_OFFSET UNITYSDK_OFFSET(0xD677BB0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0xD6771C0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_78994A5EE3704627_OFFSET UNITYSDK_OFFSET(0xD6782D0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_8C719AFB2062A524_OFFSET UNITYSDK_OFFSET(0xD677520)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_A6DE682E74885BA0_OFFSET UNITYSDK_OFFSET(0xD6783A0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xD676B90)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B1837C576C2D826A_OFFSET UNITYSDK_OFFSET(0xD678EF0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B1BD56B5208A4A2A_OFFSET UNITYSDK_OFFSET(0xD678760)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B30347A4424CB127_OFFSET UNITYSDK_OFFSET(0xD677DB0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_BB8BD20DB70C0B61_OFFSET UNITYSDK_OFFSET(0xD6786E0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_CB17C9AEE04C4C92_OFFSET UNITYSDK_OFFSET(0xD676850)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_CF68DACD28D5806F_OFFSET UNITYSDK_OFFSET(0xD678C30)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_E369D4B0CD0BA3E6_OFFSET UNITYSDK_OFFSET(0xD678FC0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_E75F27F7948CB888_OFFSET UNITYSDK_OFFSET(0xD6791C0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0xD6768E0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0xD677210)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FD19206B65D9F788_OFFSET UNITYSDK_OFFSET(0xD6783F0)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FEE4C0C91A253EEB_OFFSET UNITYSDK_OFFSET(0xD678180)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FFB668B3FA17A7AB_OFFSET UNITYSDK_OFFSET(0xD679090)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD679300)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD679290)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncBehavior_TypeDefinitionIndex = 70255;

	class MaterialAnimationBindingSyncBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_AnimationCurveNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(MaterialAnimationBindingSyncBehavior_TypeDefinitionIndex)->GetStaticField(0x66830);
		}
		// static const ::System::Int32 k_AutoPrepareStableFrameCount = 0x2; // 0x0
		::System::Boolean _NeedAutoPrepareMaterialAnimationBinding; // 0x38
		::System::Int32 _ReadyFrameCountBeforePrepare; // 0x3C
		::System::Collections::Generic::List_1<::RPG::Client::MaterialAnimationBindingSyncBehavior_Struct_2_6E8A5C51216DEA17>* _BindingMaterialSlots; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_CB17C9AEE04C4C92()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_CB17C9AEE04C4C92_OFFSET))(this);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_6D71CC7A9DF62322()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_6D71CC7A9DF62322_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_62FC2DCD2EF869D5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_62FC2DCD2EF869D5_OFFSET))(this);
		}

		::System::Void Method_3_6011BBCAB21C4BB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_6011BBCAB21C4BB7_OFFSET))(this);
		}

		::System::Boolean Method_3_68A37D9B80DCB4F0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_68A37D9B80DCB4F0_OFFSET))(this);
		}

		::System::Void Method_3_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_08DCF72FBE01FF99_OFFSET))(this);
		}

		::System::Boolean Method_3_B30347A4424CB127()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B30347A4424CB127_OFFSET))(this);
		}

		::UnityEngine::Animator* Method_3_66434B78FF1C3165()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_66434B78FF1C3165_OFFSET))(this);
		}

		static ::RPG::Client::MaterialAnimationBindingSyncBehavior* Method_3_32282915F88A6BB3(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::RPG::Client::MaterialAnimationBindingSyncBehavior*(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_32282915F88A6BB3_OFFSET))(a1);
		}

		static ::System::Void Method_3_FEE4C0C91A253EEB(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FEE4C0C91A253EEB_OFFSET))(a1);
		}

		static ::System::Void Method_3_30B7D4D85B5DED19(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_30B7D4D85B5DED19_OFFSET))(a1);
		}

		::System::Void Method_3_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_EA0BA3E4AF50C583_OFFSET))(this);
		}

		::System::Void Method_3_EA7C9571288E1295()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_EA7C9571288E1295_OFFSET))(this);
		}

		::System::Void Method_3_3014C04216B1299F(::UnityEngine::MaterialAnimationBinding* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialAnimationBinding*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_3014C04216B1299F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_58F0D8DA0C8AA122(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::UnityEngine::MaterialAnimationBinding* a2, ::UnityEngine::Renderer* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::String* a6, ::RPG::Client::CommonEffectMatBlockType a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::UnityEngine::MaterialAnimationBinding*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Int32, ::System::String*, ::RPG::Client::CommonEffectMatBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_58F0D8DA0C8AA122_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Method_3_8C719AFB2062A524()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_8C719AFB2062A524_OFFSET))(this);
		}

		::System::Void Method_3_CF68DACD28D5806F(::UnityEngine::Material* a1, ::RPG::Client::MaterialAnimationBindingSyncBehavior_SyncChannel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::Client::MaterialAnimationBindingSyncBehavior_SyncChannel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_CF68DACD28D5806F_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Renderer* Method_3_78994A5EE3704627(::UnityEngine::MaterialAnimationBinding* a1)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::MaterialAnimationBinding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_78994A5EE3704627_OFFSET))(a1);
		}

		::System::Boolean Method_3_FD19206B65D9F788(::UnityEngine::MaterialAnimationBinding* a1, ::System::String* a2, ::System::Int32 a3, ::UnityEngine::Renderer*& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::MaterialAnimationBinding*, ::System::String*, ::System::Int32, ::UnityEngine::Renderer*&, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FD19206B65D9F788_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Material* Method_3_BB8BD20DB70C0B61(::UnityEngine::MaterialAnimationBinding* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::MaterialAnimationBinding*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_BB8BD20DB70C0B61_OFFSET))(a1, a2);
		}

		static ::System::Int32 Method_3_A6DE682E74885BA0(::UnityEngine::MaterialAnimationBinding* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::MaterialAnimationBinding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_A6DE682E74885BA0_OFFSET))(a1);
		}

		static ::System::Boolean Method_3_B1837C576C2D826A(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B1837C576C2D826A_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_FFB668B3FA17A7AB(::UnityEngine::Material* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_FFB668B3FA17A7AB_OFFSET))(a1, a2);
		}

		static ::System::Boolean Method_3_E369D4B0CD0BA3E6(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_E369D4B0CD0BA3E6_OFFSET))(a1, a2);
		}

		static ::System::String* Method_3_492A229C2726426C(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_492A229C2726426C_OFFSET))(a1);
		}

		static ::RPG::Client::CommonEffectMatBlockType Method_3_B1BD56B5208A4A2A(::UnityEngine::Rendering::ShaderPropertyType a1)
		{
			return ((::RPG::Client::CommonEffectMatBlockType(*)(::UnityEngine::Rendering::ShaderPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_B1BD56B5208A4A2A_OFFSET))(a1);
		}

		static ::RPG::Client::CommonEffectMatBlockType Method_3_E75F27F7948CB888(::System::String* a1)
		{
			return ((::RPG::Client::CommonEffectMatBlockType(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_METHOD_3_E75F27F7948CB888_OFFSET))(a1);
		}

		::RPG::Client::MaterialAnimationBindingSyncMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MaterialAnimationBindingSyncMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
