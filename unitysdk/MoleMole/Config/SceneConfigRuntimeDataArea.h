#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8EC276EFD52BFFE6.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x82C2D0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x82C240)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x82C330)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_674524A234498963_OFFSET UNITYSDK_OFFSET(0x82C3B0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_C05CC8429D406234_OFFSET UNITYSDK_OFFSET(0x82C3E0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_C1DAD850E2998E73_OFFSET UNITYSDK_OFFSET(0x82C390)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x82C3F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeDataArea_TypeDefinitionIndex = 81282;

	struct alignas(8) SceneConfigRuntimeDataArea
	{
		::System::Int32 priority; // 0x10
		::System::String* SceneNameId; // 0x18
		::Enum_3_8EC276EFD52BFFE6 AreaMode; // 0x20
		::System::String* AreaModeTag; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* AreaTagList; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* areas; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* areaExcluded; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* battleRegion; // 0x48

		/*
		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMFLX_OFFSET))(this, a1);
		}
		*/

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_1D4018D4200358D0_OFFSET))(this);
		}

		/*
		::UnityEngine::Bounds Method_2_C1DAD850E2998E73()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_C1DAD850E2998E73_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Method_2_674524A234498963(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_674524A234498963_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Method_2_C05CC8429D406234(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_C05CC8429D406234_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
		}
		*/
	};
}
