#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_638;
class Class_1_B407606E338E5818;
class Class_1_BAD2D343EF0045A3;
class Class_1_F3391C70DC37088D;
namespace RPG::Client { class TutorialGuideConfigWrapper; }
namespace RPG::GameCore { class ShowGuideHintWithText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_8EABB070C81D3AAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4E3890)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0AB236E3B5B91774_OFFSET UNITYSDK_OFFSET(0xB4E3DB0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_1_OFFSET UNITYSDK_OFFSET(0xB4E5800)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_0F6CD6FCE9685131_OFFSET UNITYSDK_OFFSET(0xB4E5C40)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xB4E5E60)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_24CC767C63894B07_OFFSET UNITYSDK_OFFSET(0xB4E5A20)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_3C37862761792B91_OFFSET UNITYSDK_OFFSET(0xB4E69C0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xB4E4920)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_5F562E77E2FF7144_OFFSET UNITYSDK_OFFSET(0xB4E53D0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0xB4E39B0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_8C1368A1D9B7F039_OFFSET UNITYSDK_OFFSET(0xB4E6570)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_94B4A610E9A9ECF3_OFFSET UNITYSDK_OFFSET(0xB4E5640)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_AF17EFF0227C3930_OFFSET UNITYSDK_OFFSET(0xB4E6760)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_B85DEA4F5EB0F12F_OFFSET UNITYSDK_OFFSET(0xB4E5240)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_E5FB76C2AFA3092D_OFFSET UNITYSDK_OFFSET(0xB4E3CB0)
#define CLASS_2_8EABB070C81D3AAB_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0xB4E62E0)
#define CLASS_2_8EABB070C81D3AAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4E3A00)
#define CLASS_2_8EABB070C81D3AAB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4E4550)
#define CLASS_2_8EABB070C81D3AAB_TICK_OFFSET UNITYSDK_OFFSET(0xB4E45F0)
#define CLASS_2_8EABB070C81D3AAB__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E3880)

inline static constexpr unsigned int Class_2_8EABB070C81D3AAB_TypeDefinitionIndex = 58805;

class Class_2_8EABB070C81D3AAB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F3391C70DC37088D* NNFJKIPMAAI; // 0x18
	::System::Collections::Generic::IList_1<::System::String*>* EGINIHPMDGE; // 0x20
	::Class_1_B407606E338E5818* GNEFMGHCILF; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
	::Class_1_BAD2D343EF0045A3* EMCDEOIEFEA; // 0x38
	::Class_0_16E4307DCC419505_638* EIFGEIFAGNM; // 0x40
	::RPG::GameCore::ShowGuideHintWithText* OFKGLJOAMLD; // 0x48
	::System::Single IJAJOGNGEIK; // 0x50

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

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_B85DEA4F5EB0F12F(::RPG::GameCore::TaskState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_B85DEA4F5EB0F12F_OFFSET))(this, a1);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_7F4EBEC55EBE2D81_OFFSET))(this);
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

	::System::Void Method_2_8C1368A1D9B7F039(::RPG::Client::TutorialGuideConfigWrapper* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialGuideConfigWrapper*))((::PBYTE)hIl2Cpp + CLASS_2_8EABB070C81D3AAB_METHOD_2_8C1368A1D9B7F039_OFFSET))(this, a1);
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
