#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class ReflectionHSVVolumeMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x19865AE0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19866180)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x198660C0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x19866120)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x198661C0)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x19866060)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_672D56D99D734395_OFFSET UNITYSDK_OFFSET(0x19865B60)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x19866310)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x19865810)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x19865F40)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19865770)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19866780)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x19866220)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19866930)
#define RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x198668C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReflectionHSVVolumeBehavior_TypeDefinitionIndex = 67547;

	class ReflectionHSVVolumeBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::ReflectionHSVVolumeMonoPlugin*>** StaticGet_HSVVolumeList()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::ReflectionHSVVolumeMonoPlugin*>**)Il2CppClass::FromTypeDefinitionIndex(ReflectionHSVVolumeBehavior_TypeDefinitionIndex)->GetStaticField(0x1C000);
		}
		static ::System::Int32* StaticGet__ReflectionHSVVolumeCountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectionHSVVolumeBehavior_TypeDefinitionIndex)->GetStaticField(0x6540);
		}
		static ::System::Int32* StaticGet__ReflectionHSVVolumePosMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectionHSVVolumeBehavior_TypeDefinitionIndex)->GetStaticField(0x6544);
		}
		static ::System::Int32* StaticGet__ReflectionHSVVolumeSizeMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ReflectionHSVVolumeBehavior_TypeDefinitionIndex)->GetStaticField(0x6548);
		}
		static ::System::Boolean* StaticGet_isDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReflectionHSVVolumeBehavior_TypeDefinitionIndex)->GetStaticField(0x654C);
		}
		::UnityEngine::Matrix4x4 HSVVolumePosMatrix; // 0x38
		::UnityEngine::Matrix4x4 HSVVolumeSizeMatrix; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_3_672D56D99D734395()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_672D56D99D734395_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::RPG::Client::ReflectionHSVVolumeMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ReflectionHSVVolumeMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REFLECTIONHSVVOLUMEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
