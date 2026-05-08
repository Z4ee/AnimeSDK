#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_88AB53619877E5CB_METHOD_1_472E9805B297BD58_OFFSET UNITYSDK_OFFSET(0x1388E260)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_88AB53619877E5CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1388E250)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_88AB53619877E5CB_TypeDefinitionIndex = 64897;

	class RuntimeMaterialInfo_Class_1_88AB53619877E5CB : public ::System::Object
	{
	public:
		::MoleMole::Timeline::FloatRecorderUnit* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_88AB53619877E5CB__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_472E9805B297BD58(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_88AB53619877E5CB_METHOD_1_472E9805B297BD58_OFFSET))(this, a1);
		}
	};
}
