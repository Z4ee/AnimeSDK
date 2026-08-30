#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class TerrainDeformationReceiverMonoPlugin; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1AC9F820)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_187B835A9D811184_OFFSET UNITYSDK_OFFSET(0x1AC9F2C0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1AC9F6B0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AC9F510)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1AC9F580)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1AC9F5F0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x1AC9F650)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0x1AC9F6F0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_6_OFFSET UNITYSDK_OFFSET(0x1AC9F750)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1AC9F250)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_83EC8C142343479D_OFFSET UNITYSDK_OFFSET(0x1AC9F8A0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AC9F1C0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1AC9F7B0)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC9FE40)
#define RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9FE30)

namespace RPG::Client
{
	inline static constexpr unsigned int TerrainDeformationReceiverBehavior_TypeDefinitionIndex = 70999;

	class TerrainDeformationReceiverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_HeightScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainDeformationReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::System::Int32* StaticGet_RiseScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainDeformationReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x11584);
		}
		static ::System::Int32* StaticGet_NormalScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainDeformationReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x11588);
		}
		static ::System::Int32* StaticGet_MaskScaleId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainDeformationReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x1158C);
		}
		static ::System::Int32* StaticGet_EdgeOffsetId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TerrainDeformationReceiverBehavior_TypeDefinitionIndex)->GetStaticField(0x11590);
		}
		::System::Int32 _InstanceId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_4343F372F34C05BF_6_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_187B835A9D811184(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_187B835A9D811184_OFFSET))(this, a1);
		}

		::System::Void Method_3_83EC8C142343479D(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_METHOD_3_83EC8C142343479D_OFFSET))(this, a1);
		}

		::RPG::Client::TerrainDeformationReceiverMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::TerrainDeformationReceiverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TERRAINDEFORMATIONRECEIVERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
