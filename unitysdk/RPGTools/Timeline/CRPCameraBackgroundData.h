#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_7EE675974ADCBBF3_OFFSET UNITYSDK_OFFSET(0x3BC4D80)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_C446CE6A5E1982BC_OFFSET UNITYSDK_OFFSET(0x3BC4CA0)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3BC4D10)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_F42C65D64DDCFCC1_OFFSET UNITYSDK_OFFSET(0x1D131CD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBackgroundData_TypeDefinitionIndex = 48341;

	struct alignas(8) CRPCameraBackgroundData
	{
		::System::Boolean Enable; // 0x10
		::UnityEngine::Color Color; // 0x14
		::System::String* TexturePath; // 0x28
		::UnityEngine::Vector2 Offset; // 0x30
		::System::Single Rotation; // 0x38
		::System::Single Scale; // 0x3C
		::System::Collections::Generic::List_1<::System::String*>* AdditiveActorUniqueNames; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* AdditiveTimelineEffectUniqueNames; // 0x48

		static ::RPGTools::Timeline::CRPCameraBackgroundData Method_2_F42C65D64DDCFCC1()
		{
			return ((::RPGTools::Timeline::CRPCameraBackgroundData(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_F42C65D64DDCFCC1_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::String*>* Method_2_C446CE6A5E1982BC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_C446CE6A5E1982BC_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_7EE675974ADCBBF3(::RPGTools::Timeline::CRPCameraBackgroundData a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CRPCameraBackgroundData, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDDATA_METHOD_2_7EE675974ADCBBF3_OFFSET))(this, a1, a2);
		}
	};
}
