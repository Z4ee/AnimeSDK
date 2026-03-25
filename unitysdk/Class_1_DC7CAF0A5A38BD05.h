#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_1_068B5138C0F1D881;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DC7CAF0A5A38BD05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE62430)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xDE62760)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_1D1AAB3F3803CEED_OFFSET UNITYSDK_OFFSET(0xDE628A0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_1D584921E9C31128_OFFSET UNITYSDK_OFFSET(0xDE626B0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_44A662012B761330_OFFSET UNITYSDK_OFFSET(0xDE623E0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_55D8E03B11FB1632_OFFSET UNITYSDK_OFFSET(0xDE62370)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0xDE627B0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_96E3159279ADB646_OFFSET UNITYSDK_OFFSET(0xDE62AE0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_A60F491747DAC060_OFFSET UNITYSDK_OFFSET(0xDE622E0)
#define CLASS_1_DC7CAF0A5A38BD05_METHOD_1_E57456F36F09A25C_OFFSET UNITYSDK_OFFSET(0xDE62480)
#define CLASS_1_DC7CAF0A5A38BD05__CTOR_OFFSET UNITYSDK_OFFSET(0xDE622D0)

inline static constexpr unsigned int Class_1_DC7CAF0A5A38BD05_TypeDefinitionIndex = 48319;

class Class_1_DC7CAF0A5A38BD05 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_068B5138C0F1D881*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::GameCore::TimelineType Field_1_0; // 0x28

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

	::Class_1_068B5138C0F1D881* Method_1_67C10584F4320583()
	{
		return ((::Class_1_068B5138C0F1D881*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::Class_1_068B5138C0F1D881* Method_1_1D1AAB3F3803CEED(::RPG::Client::CutsceneCacheInitParams* a1)
	{
		return ((::Class_1_068B5138C0F1D881*(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_1D1AAB3F3803CEED_OFFSET))(this, a1);
	}

	::System::Void Method_1_96E3159279ADB646(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_96E3159279ADB646_OFFSET))(this, a1);
	}

	::Class_1_004034A1FAAF468A* Method_1_55D8E03B11FB1632(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_55D8E03B11FB1632_OFFSET))(this, a1);
	}

	::System::Void Method_1_E57456F36F09A25C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DC7CAF0A5A38BD05_METHOD_1_E57456F36F09A25C_OFFSET))(this);
	}
};
