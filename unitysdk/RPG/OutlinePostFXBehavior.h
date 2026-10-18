#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG { class OutlinePostFXBehavior_Class_1_54865782B1D807D9; }
namespace RPG { class OutlinePostFXBehavior_Class_1_C837684C957EE5CA; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace UnityEngine { class RenderTexture; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE8793E0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE879E30)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE879DD0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0xE879910)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A18DDE12E640F622_OFFSET UNITYSDK_OFFSET(0xE879420)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE879D40)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0xE8790F0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE879E90)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE879F20)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE879F00)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_TypeDefinitionIndex = 51716;

	class OutlinePostFXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::RPG::OutlinePostFXBehavior_Class_1_54865782B1D807D9** StaticGet__outlineCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_54865782B1D807D9**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x6F4F0);
		}
		static ::RPG::OutlinePostFXBehavior_Class_1_C837684C957EE5CA** StaticGet__outlineFinalCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_C837684C957EE5CA**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x6F4F8);
		}
		static ::System::Int32* StaticGet__HideNPCPartsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x15900);
		}
		static ::System::Int32* StaticGet__ObjectIdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x15904);
		}
		static ::System::Int32* StaticGet__DepthRTID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x15908);
		}
		static ::System::Int32* StaticGet__OutlineColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x1590C);
		}
		static ::System::Int32* StaticGet__BlurDirectionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x15910);
		}
		static ::System::Int32* StaticGet__ShowPartID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x15914);
		}
		::System::Int32 _RTWidth; // 0x38
		::System::Int32 _RTHeight; // 0x3C
		::UnityEngine::RenderTexture* _blurredRT; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_DC715239B8B98D9C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_DC715239B8B98D9C_OFFSET))(this);
		}

		::System::Void Method_3_A18DDE12E640F622()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A18DDE12E640F622_OFFSET))(this);
		}

		::System::Void Method_3_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::OutlinePostFXMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
