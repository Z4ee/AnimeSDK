#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_08354969BD933C92.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigPatrolPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigStreamGamePatrolReachedAction; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x177DF6F0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177E0AE0)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x177DFE10)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x177DFE90)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_METHOD_1_2D08867FA34F8CAE_OFFSET UNITYSDK_OFFSET(0x177E0B40)
#define MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x177E0FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPatrolPointSet_TypeDefinitionIndex = 51761;

	class ConfigPatrolPointSet : public ::System::Object
	{
	public:
		::System::String* SetId; // 0x10
		::Enum_3_08354969BD933C92 PatrolMode; // 0x18
		::System::Boolean UseNavMesh; // 0x1C
		::System::Single TurnSpeed; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPatrolPoint>* Points; // 0x28
		::MoleMole::Config::ConfigStreamGamePatrolReachedAction* DefaultOnPointReached; // 0x30
		::MoleMole::Config::ConfigStreamGamePatrolReachedAction* OnCycleEndReached; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET__CTOR_OFFSET))(this);
		}

		::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_EXPOSEMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_2D08867FA34F8CAE(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_METHOD_1_2D08867FA34F8CAE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPATROLPOINTSET_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
