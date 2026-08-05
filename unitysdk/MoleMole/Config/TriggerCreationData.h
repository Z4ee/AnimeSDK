#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19212BB0)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192122A0)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x19212320)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_METHOD_1_814709AC4932320E_OFFSET UNITYSDK_OFFSET(0x19212C10)
#define MOLEMOLE_CONFIG_TRIGGERCREATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19213040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TriggerCreationData_TypeDefinitionIndex = 51691;

	class TriggerCreationData : public ::System::Object
	{
	public:
		::System::Int32 Type; // 0x10
		::UnityEngine::Vector3 Center; // 0x14
		::UnityEngine::Vector3 Size; // 0x20
		::System::Single Radius; // 0x2C
		::System::Single Height; // 0x30
		::System::Int32 Direction; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_814709AC4932320E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERCREATIONDATA_METHOD_1_814709AC4932320E_OFFSET))(this, a1, a2);
		}
	};
}
