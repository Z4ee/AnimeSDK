#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_OracleOutlineMonoPlugin; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDFC130)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCDFBE80)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xCDFC7E0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0xCDFC6F0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCDFBCF0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCDFBD50)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCDFBDC0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCDFBE20)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCDFBC90)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCDFBC00)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCDFC770)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0xCDFC1B0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDFC8F0)
#define RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCDFC8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_OracleOutlineBehavior_TypeDefinitionIndex = 70477;

	class Effect_OracleOutlineBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__Dither_On()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_OracleOutlineBehavior_TypeDefinitionIndex)->GetStaticField(0x14840);
		}
		static ::System::Int32* StaticGet__Dither_Alpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_OracleOutlineBehavior_TypeDefinitionIndex)->GetStaticField(0x14844);
		}
		::System::Boolean refresh; // 0x38
		::UnityEngine::LineRenderer* outlineRenderer; // 0x40
		::UnityEngine::MaterialPropertyBlock* _block; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_B76CD5CB3E297DF3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_B76CD5CB3E297DF3_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_2E47F09A457E7E05(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_2E47F09A457E7E05_OFFSET))(this, a1);
		}

		::System::Void Method_3_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_METHOD_3_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_OracleOutlineMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_OracleOutlineMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ORACLEOUTLINEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
