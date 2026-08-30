#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace RPG::Client { class FlowerRingScatterMonoPlugin; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xD0A8450)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xD0A7480)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD0A7240)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xD0A84D0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xD0A73C0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xD0A7420)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xD0A8510)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD0A7360)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET UNITYSDK_OFFSET(0xD0A6AD0)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD0A6A40)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0xD0A6B40)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0A8580)
#define RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A8570)

namespace RPG::Client
{
	inline static constexpr unsigned int FlowerRingScatterBehavior_TypeDefinitionIndex = 70569;

	class FlowerRingScatterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_ParticleSizeMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FB0);
		}
		static ::System::Int32* StaticGet_ParticleSizeMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FB4);
		}
		static ::System::Int32* StaticGet__ParticleRotationMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FB8);
		}
		static ::System::Int32* StaticGet__RingRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FBC);
		}
		static ::System::Int32* StaticGet__RingThickness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FC0);
		}
		static ::System::Int32* StaticGet__RandomSeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FC4);
		}
		static ::System::Int32* StaticGet__DissolveSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FC8);
		}
		static ::System::Int32* StaticGet__GrowProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FCC);
		}
		static ::System::Int32* StaticGet__DissolveTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FD0);
		}
		static ::System::Int32* StaticGet__DissolveProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FD4);
		}
		static ::System::Int32* StaticGet__RandomColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FD8);
		}
		static ::System::Int32* StaticGet__Center()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FDC);
		}
		static ::System::Int32* StaticGet__RandomColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FE0);
		}
		static ::System::Int32* StaticGet__ParticleRotationMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FE4);
		}
		static ::System::Int32* StaticGet__DissolveTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FE8);
		}
		static ::System::Int32* StaticGet__GrowRandomSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlowerRingScatterBehavior_TypeDefinitionIndex)->GetStaticField(0x7FEC);
		}
		::Il2CppArray<::System::UInt32>* IndirectDrawArgs; // 0x38
		::UnityEngine::ComputeBuffer* IndirectDrawArgsBuffer; // 0x40
		::UnityEngine::Bounds _Bounds; // 0x48
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_90A07D9BC1B409B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_90A07D9BC1B409B9_OFFSET))(this);
		}

		::System::Void Method_3_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_E2BCD1B56132A826()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_METHOD_3_E2BCD1B56132A826_OFFSET))(this);
		}

		::RPG::Client::FlowerRingScatterMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::FlowerRingScatterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLOWERRINGSCATTERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
