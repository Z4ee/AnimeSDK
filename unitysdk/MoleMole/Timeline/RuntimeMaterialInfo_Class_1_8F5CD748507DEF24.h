#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24_METHOD_1_AAA9246549343B1C_OFFSET UNITYSDK_OFFSET(0x187199C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24_METHOD_1_DE91860F51556307_OFFSET UNITYSDK_OFFSET(0x18719A40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24__CTOR_OFFSET UNITYSDK_OFFSET(0x187199B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_8F5CD748507DEF24_TypeDefinitionIndex = 58659;

	class RuntimeMaterialInfo_Class_1_8F5CD748507DEF24 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_AAA9246549343B1C(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24_METHOD_1_AAA9246549343B1C_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DE91860F51556307(::MoleMole::Timeline::ColorRecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_8F5CD748507DEF24_METHOD_1_DE91860F51556307_OFFSET))(this, a1);
		}
	};
}
