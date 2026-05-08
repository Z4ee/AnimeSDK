#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_7788F07CA8C225A6_METHOD_1_DAFFA311E246A1BD_OFFSET UNITYSDK_OFFSET(0x15E5E440)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_7788F07CA8C225A6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E5E430)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_Class_1_7788F07CA8C225A6_TypeDefinitionIndex = 64895;

	class RuntimeMaterialInfo_Class_1_7788F07CA8C225A6 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_7788F07CA8C225A6__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_DAFFA311E246A1BD(::MoleMole::Timeline::Vector4RecorderUnit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CLASS_1_7788F07CA8C225A6_METHOD_1_DAFFA311E246A1BD_OFFSET))(this, a1);
		}
	};
}
