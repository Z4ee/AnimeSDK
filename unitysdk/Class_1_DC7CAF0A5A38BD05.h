#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_1_A59C2B52BC165D08;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DC7CAF0A5A38BD05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13719EE0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1371A1F0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_1D584921E9C31128_OFFSET UNITYSDK_OFFSET(0x1371A140)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_3559476C7C86165D_OFFSET UNITYSDK_OFFSET(0x1371A5C0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_44A662012B761330_OFFSET UNITYSDK_OFFSET(0x13719E90)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x13719F30)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_55D8E03B11FB1632_OFFSET UNITYSDK_OFFSET(0x13719E20)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_61C3054B640ECA49_OFFSET UNITYSDK_OFFSET(0x1371A320)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x1371A240)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_A60F491747DAC060_OFFSET UNITYSDK_OFFSET(0x13719D90)
#define CLASS_1_DC7CAF0A5A38BD05__CTOR_OFFSET UNITYSDK_OFFSET(0x13719D80)

inline static constexpr unsigned int Class_1_DC7CAF0A5A38BD05_TypeDefinitionIndex = 55800;

class Class_1_DC7CAF0A5A38BD05 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A59C2B52BC165D08*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::TimelineType Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05__CTOR_OFFSET))(this);
	}

	::Class_1_004034A1FAAF468A* Method_1_A60F491747DAC060(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_A60F491747DAC060_OFFSET))(this, a1);
	}

	::System::Void Method_1_44A662012B761330(::RPG::GameCore::TimelineType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_44A662012B761330_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_1D584921E9C31128()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_1D584921E9C31128_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::Class_1_A59C2B52BC165D08* Method_1_67C10584F4320583()
	{
		return ((::Class_1_A59C2B52BC165D08*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::Class_1_A59C2B52BC165D08* Method_1_61C3054B640ECA49(::RPG::Client::CutsceneCacheInitParams* a1)
	{
		return ((::Class_1_A59C2B52BC165D08*(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_61C3054B640ECA49_OFFSET))(this, a1);
	}

	::System::Void Method_1_3559476C7C86165D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_3559476C7C86165D_OFFSET))(this, a1);
	}

	::Class_1_004034A1FAAF468A* Method_1_55D8E03B11FB1632(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_55D8E03B11FB1632_OFFSET))(this, a1);
	}

	::System::Void Method_1_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_44AC3F3C85C7CAA3_OFFSET))(this);
	}
};
