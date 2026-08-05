#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SceneMapAreaRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1487C720)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1487C390)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1487C780)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_METHOD_1_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x1487C410)
#define MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1487CA30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapLayerRuntimeData_TypeDefinitionIndex = 49716;

	class SceneMapLayerRuntimeData : public ::System::Object
	{
	public:
		::System::Int32 number; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapAreaRuntimeData*>* mapAreaList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_8741A88D50268453(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_METHOD_1_8741A88D50268453_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPLAYERRUNTIMEDATA_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
		}
	};
}
