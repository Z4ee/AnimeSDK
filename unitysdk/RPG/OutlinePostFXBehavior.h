#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG { class OutlinePostFXBehavior_Class_1_0E4BEE6B6EC41988; }
namespace RPG { class OutlinePostFXBehavior_Class_1_2995E90F8F8889E1; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace UnityEngine { class RenderTexture; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE7DD230)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_0113B1AE4747ADBD_OFFSET UNITYSDK_OFFSET(0xE7DD2B0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xE7DDD10)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xE7DDCB0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET UNITYSDK_OFFSET(0xE7DD7D0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xE7DCE50)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE7DDC20)
#define RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE7DDD70)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xE7DDE00)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xE7DDDE0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_TypeDefinitionIndex = 52011;

	class OutlinePostFXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::RPG::OutlinePostFXBehavior_Class_1_0E4BEE6B6EC41988** StaticGet__outlineFinalCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_0E4BEE6B6EC41988**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x21EB0);
		}
		static ::RPG::OutlinePostFXBehavior_Class_1_2995E90F8F8889E1** StaticGet__outlineCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_2995E90F8F8889E1**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x21EB8);
		}
		static ::System::Int32* StaticGet__ObjectIdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADA0);
		}
		static ::System::Int32* StaticGet__DepthRTID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADA4);
		}
		static ::System::Int32* StaticGet__BlurDirectionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADA8);
		}
		static ::System::Int32* StaticGet__OutlineColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADAC);
		}
		static ::System::Int32* StaticGet__ShowPartID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADB0);
		}
		static ::System::Int32* StaticGet__HideNPCPartsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0xADB4);
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

		::System::Void Method_3_AA7E3074254D484A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_AA7E3074254D484A_OFFSET))(this);
		}

		::System::Void Method_3_0113B1AE4747ADBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_0113B1AE4747ADBD_OFFSET))(this);
		}

		::System::Void Method_3_A002848F130F70CA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A002848F130F70CA_OFFSET))(this);
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
