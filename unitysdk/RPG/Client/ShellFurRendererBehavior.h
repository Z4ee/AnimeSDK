#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class ShellFurRendererMonoPlugin; }
namespace System { class Random; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1AF82090)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1AF82050)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1AF81A10)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AF81BB0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x1AF81D70)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AF818D0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1AF81BF0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1AF81D10)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1AF81860)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_596FD8239C601ED8_OFFSET UNITYSDK_OFFSET(0x1AF82120)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1AF80E20)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1AF81AA0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x1AF81B30)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AF80D80)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0x1AF80EE0)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1AF81C50)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1AF81930)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF82690)
#define RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF82620)

namespace RPG::Client
{
	inline static constexpr unsigned int ShellFurRendererBehavior_TypeDefinitionIndex = 70918;

	class ShellFurRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__FurDitherID_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB30);
		}
		static ::System::Int32* StaticGet__QTangent_Off_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB34);
		}
		static ::System::Int32* StaticGet__RootColor_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB38);
		}
		static ::System::Int32* StaticGet__TopColor_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB3C);
		}
		static ::System::Int32* StaticGet__RootSmoothnessScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB40);
		}
		static ::System::Int32* StaticGet__SmoothnessScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB44);
		}
		static ::System::Int32* StaticGet__MainTex_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB48);
		}
		static ::System::Int32* StaticGet__FurDither_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB4C);
		}
		static ::System::Int32* StaticGet__WindDir_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB50);
		}
		static ::System::Int32* StaticGet__NoiseMap_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB54);
		}
		static ::System::Int32* StaticGet__FurLength_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB58);
		}
		static ::System::Int32* StaticGet__WindNoiseScale_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB5C);
		}
		static ::System::Int32* StaticGet__FurMaskTex_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShellFurRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xAB60);
		}
		::System::Boolean hasUpdateRenderMatrix; // 0x38
		::UnityEngine::Mesh* m_Mesh; // 0x40
		::System::Random* m_random; // 0x48
		::UnityEngine::Material* m_Material; // 0x50
		::UnityEngine::MeshRenderer* m_TargetRenderer; // 0x58
		::Il2CppArray<::UnityEngine::Matrix4x4>* renderMatrices; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_9681042564541CD6_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_39FD7185C859CEAD_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_596FD8239C601ED8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_596FD8239C601ED8_OFFSET))(this);
		}

		::System::Void Method_3_AFDC576A9606B859()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_AFDC576A9606B859_OFFSET))(this);
		}

		::System::Void Method_3_7DB49B5407C8FD68()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_7DB49B5407C8FD68_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::RPG::Client::ShellFurRendererMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ShellFurRendererMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHELLFURRENDERERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
