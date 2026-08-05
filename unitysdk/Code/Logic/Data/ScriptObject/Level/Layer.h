#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_LAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1297EF30)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int Layer_TypeDefinitionIndex = 80201;

	class Layer : public ::System::Object
	{
	public:
		::System::Int32 layerOrder; // 0x10
		::System::String* spawnPointPrefix; // 0x18
		::System::Int32 rowCount; // 0x20
		::System::Int32 columnCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_LAYER__CTOR_OFFSET))(this);
		}
	};
}
