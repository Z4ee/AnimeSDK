#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_2_291F7DA21A504FC4;

#define CLASS_2_C179DB58C4955D46_CLEAR_OFFSET UNITYSDK_OFFSET(0x16060140)
#define CLASS_2_C179DB58C4955D46_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x160601E0)
#define CLASS_2_C179DB58C4955D46_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x16060190)
#define CLASS_2_C179DB58C4955D46_METHOD_2_7AF20265EB978579_OFFSET UNITYSDK_OFFSET(0x160600E0)
#define CLASS_2_C179DB58C4955D46__CTOR_OFFSET UNITYSDK_OFFSET(0x16060230)

inline static constexpr unsigned int Class_2_C179DB58C4955D46_TypeDefinitionIndex = 51608;

class Class_2_C179DB58C4955D46 : public ::Class_1_BF7A075734D15E98
{
public:
	::Class_2_291F7DA21A504FC4* Field_2_0; // 0x18
	::System::Int32 Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C179DB58C4955D46__CTOR_OFFSET))(this);
	}

	::Class_2_C179DB58C4955D46* Method_2_7AF20265EB978579(::Class_2_291F7DA21A504FC4* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C179DB58C4955D46*(*)(::PVOID, ::Class_2_291F7DA21A504FC4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C179DB58C4955D46_METHOD_2_7AF20265EB978579_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C179DB58C4955D46_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C179DB58C4955D46_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C179DB58C4955D46_GETEVENTTYPE_OFFSET))(this);
	}
};
