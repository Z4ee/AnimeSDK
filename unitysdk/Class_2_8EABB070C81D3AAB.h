#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_603;
class Class_1_53F0644B4D7513CF;
class Class_1_B407606E338E5818;
class Class_1_F3391C70DC37088D;
namespace RPG::Client { class TutorialGuideConfigWrapper; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_8EABB070C81D3AAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1858DA10)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0AB236E3B5B91774_OFFSET UNITYSDK_OFFSET(0x1858DF00)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_1_OFFSET UNITYSDK_OFFSET(0x1858F900)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_OFFSET UNITYSDK_OFFSET(0x1858FD40)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1858FF60)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_24CC767C63894B07_OFFSET UNITYSDK_OFFSET(0x1858FB20)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0x18590B40)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_5F562E77E2FF7144_OFFSET UNITYSDK_OFFSET(0x1858F4D0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x1858DB30)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_92305E9AE4A347EA_OFFSET UNITYSDK_OFFSET(0x18590670)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_94B4A610E9A9ECF3_OFFSET UNITYSDK_OFFSET(0x1858F740)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_AF17EFF0227C3930_OFFSET UNITYSDK_OFFSET(0x185908E0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_B85DEA4F5EB0F12F_OFFSET UNITYSDK_OFFSET(0x1858F340)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_E5FB76C2AFA3092D_OFFSET UNITYSDK_OFFSET(0x1858DE00)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_E727F9956B5BD78B_OFFSET UNITYSDK_OFFSET(0x1858EA50)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0x185903E0)
#define CLASS_2_8EABB070C81D3AAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1858DB80)
#define CLASS_2_8EABB070C81D3AAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1858E6A0)
#define CLASS_2_8EABB070C81D3AAB_TICK_OFFSET UNITYSDK_OFFSET(0x1858E740)
#define CLASS_2_8EABB070C81D3AAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1858DA00)

inline static constexpr unsigned int Class_2_8EABB070C81D3AAB_TypeDefinitionIndex = 56030;

class Class_2_8EABB070C81D3AAB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_1_53F0644B4D7513CF* Field_2_1; // 0x20
	::RPG::GameCore::ShowGuideHintWithText* Field_2_2; // 0x28
	::Class_1_B407606E338E5818* Field_2_3; // 0x30
	::Class_0_16E4307DCC419505_603* Field_2_4; // 0x38
	::System::Collections::Generic::IList_1<::System::String*>* Field_2_5; // 0x40
	::Class_1_F3391C70DC37088D* Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideHintWithText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideHintWithText*))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_E727F9956B5BD78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_E727F9956B5BD78B_OFFSET))(this);
	}

	::System::Void Method_2_B85DEA4F5EB0F12F(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_B85DEA4F5EB0F12F_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_61929A3103595552_OFFSET))(this);
	}

	::System::Void Method_2_94B4A610E9A9ECF3(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_94B4A610E9A9ECF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F6CD6FCE9685131(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0F6CD6FCE9685131_1(::UnityEngine::Rect a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5F562E77E2FF7144(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_5F562E77E2FF7144_OFFSET))(this, a1);
	}

	::System::Void Method_2_24CC767C63894B07(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_24CC767C63894B07_OFFSET))(this, a1);
	}

	::System::String* Method_2_FF7D42127627E96E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_FF7D42127627E96E_OFFSET))(this);
	}

	::System::String* Method_2_AF17EFF0227C3930()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_AF17EFF0227C3930_OFFSET))(this);
	}

	::System::Void Method_2_92305E9AE4A347EA(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_92305E9AE4A347EA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IList_1<::System::String*>* Method_2_0AB236E3B5B91774(::System::Collections::Generic::IList_1<::System::String*>* a1)
	{
		return ((::System::Collections::Generic::IList_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_0AB236E3B5B91774_OFFSET))(this, a1);
	}

	::RPG::Client::TutorialBlockType Method_2_E5FB76C2AFA3092D()
	{
		return ((::RPG::Client::TutorialBlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_E5FB76C2AFA3092D_OFFSET))(this);
	}

	::System::Void Method_2_3C37862761792B91()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_3C37862761792B91_OFFSET))(this);
	}
};
