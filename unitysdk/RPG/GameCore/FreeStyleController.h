#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/Struct_2_648594091F1A68D6.h"
#include "unitysdk/Struct_2_D3B84DD3734B83D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_C3183153408A386B;
class Class_1_D7003CCDED916330;
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }

#define RPG_GAMECORE_FREESTYLECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDFBAA0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_GET_INFO_OFFSET UNITYSDK_OFFSET(0xCDFB690)
#define RPG_GAMECORE_FREESTYLECONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xCDFB6A0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xCDFB760)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCDFB700)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xCDFBA10)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_4120FFA8338789EF_OFFSET UNITYSDK_OFFSET(0xCDFB8E0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_75259065C990E6D4_1_OFFSET UNITYSDK_OFFSET(0xCDFB850)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_75259065C990E6D4_OFFSET UNITYSDK_OFFSET(0xCDFB7C0)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_7EFDB9F1D6E62586_OFFSET UNITYSDK_OFFSET(0xCDFA060)
#define RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_EB1BA1DE308975DE_OFFSET UNITYSDK_OFFSET(0xCDFB9A0)
#define RPG_GAMECORE_FREESTYLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCDFB650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleController_TypeDefinitionIndex = 53493;

	class FreeStyleController : public ::System::Object
	{
	public:
		::RPG::GameCore::FreeStyleComponent* _Component; // 0x10
		::Class_1_C3183153408A386B* _Info_k__BackingField; // 0x18
		::Class_1_D7003CCDED916330* _Instance; // 0x20

		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER__CTOR_OFFSET))(this, a1);
		}

		::Class_1_C3183153408A386B* get_Info()
		{
			return ((::Class_1_C3183153408A386B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_GET_INFO_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void Method_1_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_75259065C990E6D4(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_75259065C990E6D4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_75259065C990E6D4_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_75259065C990E6D4_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_4120FFA8338789EF(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_4120FFA8338789EF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_7EFDB9F1D6E62586(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable_1<::Struct_2_648594091F1A68D6> a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable_1<::Struct_2_648594091F1A68D6>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_7EFDB9F1D6E62586_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_EB1BA1DE308975DE(::System::Boolean a1, ::Struct_2_D3B84DD3734B83D6 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Struct_2_D3B84DD3734B83D6))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_EB1BA1DE308975DE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_METHOD_1_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECONTROLLER_DISPOSE_OFFSET))(this);
		}
	};
}
