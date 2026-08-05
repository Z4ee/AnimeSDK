#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class SceneMapStateRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13513A70)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13513520)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x13513AD0)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x135135A0)
#define MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13513E20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneMapAreaRuntimeData_TypeDefinitionIndex = 83807;

	class SceneMapAreaRuntimeData : public ::System::Object
	{
	public:
		::System::String* mapAreaName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* includedSceneAreaNameList; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapStateRuntimeData*>* stateList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEMAPAREARUNTIMEDATA_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
		}
	};
}
