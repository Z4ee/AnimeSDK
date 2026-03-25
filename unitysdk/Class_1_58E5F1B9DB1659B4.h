#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrackPhotoEvent; }

#define CLASS_1_58E5F1B9DB1659B4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B761F0)
#define CLASS_1_58E5F1B9DB1659B4_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8B76070)
#define CLASS_1_58E5F1B9DB1659B4_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x8B75F90)
#define CLASS_1_58E5F1B9DB1659B4_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8B76170)
#define CLASS_1_58E5F1B9DB1659B4_METHOD_1_EC9C71CF50EEA7C5_OFFSET UNITYSDK_OFFSET(0x8B762B0)
#define CLASS_1_58E5F1B9DB1659B4__CTOR_OFFSET UNITYSDK_OFFSET(0x8B75F10)

inline static constexpr unsigned int Class_1_58E5F1B9DB1659B4_TypeDefinitionIndex = 49387;

class Class_1_58E5F1B9DB1659B4 : public ::System::Object
{
public:
	::Class_3_5775A4FEC79026BC* Field_1_2; // 0x10
	::RPG::GameCore::TrackPhotoEvent* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TrackPhotoEvent* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrackPhotoEvent*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_EC9C71CF50EEA7C5(::Class_1_58E5F1B9DB1659B4* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_58E5F1B9DB1659B4*))((::PBYTE)hIl2Cpp + CLASS_1_58E5F1B9DB1659B4_METHOD_1_EC9C71CF50EEA7C5_OFFSET))(this, a1);
	}
};
