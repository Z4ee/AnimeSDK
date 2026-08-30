#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_DDE1D61870C38FA1.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_421;
class Class_0_16E4307DCC419505_441;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_3_30656B97AF27D696_METHOD_3_0916893CAD482967_OFFSET UNITYSDK_OFFSET(0x1629AF10)
#define CLASS_3_30656B97AF27D696_METHOD_3_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x16299D20)
#define CLASS_3_30656B97AF27D696_METHOD_3_5A81E8150F3CA56B_OFFSET UNITYSDK_OFFSET(0x16299A30)
#define CLASS_3_30656B97AF27D696_METHOD_3_9384D13D97C3F513_OFFSET UNITYSDK_OFFSET(0x1629A9A0)
#define CLASS_3_30656B97AF27D696_METHOD_3_A0C1024F4AAFB0BA_OFFSET UNITYSDK_OFFSET(0x16299A90)
#define CLASS_3_30656B97AF27D696_METHOD_3_B1D46CC9BCCCC367_OFFSET UNITYSDK_OFFSET(0x1629A8F0)
#define CLASS_3_30656B97AF27D696_METHOD_3_D53870D6C0CB6C5D_OFFSET UNITYSDK_OFFSET(0x16299C00)
#define CLASS_3_30656B97AF27D696_METHOD_3_F9BE5F1815F68941_OFFSET UNITYSDK_OFFSET(0x1629A3F0)
#define CLASS_3_30656B97AF27D696_METHOD_3_FAA945ED465745BC_OFFSET UNITYSDK_OFFSET(0x16299070)
#define CLASS_3_30656B97AF27D696__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x16299100)
#define CLASS_3_30656B97AF27D696__CTOR_OFFSET UNITYSDK_OFFSET(0x1629B000)
#define CLASS_3_30656B97AF27D696__REBUILD_OFFSET UNITYSDK_OFFSET(0x16299890)

inline static constexpr unsigned int Class_3_30656B97AF27D696_TypeDefinitionIndex = 62787;

class Class_3_30656B97AF27D696 : public ::Class_2_DDE1D61870C38FA1
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BMEJDDNOIDM; // 0x28
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_421*, ::System::UInt32>* PEELEAMPBPP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* LOPPLJEGLFO; // 0x38
	::Class_0_16E4307DCC419505_441* PEEAFBINELO; // 0x40
	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_FAA945ED465745BC(::Class_0_16E4307DCC419505_441* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_441*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_FAA945ED465745BC_OFFSET))(this, a1);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696__CHECKNEEDREBUILD_OFFSET))(this);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696__REBUILD_OFFSET))(this);
	}

	::System::Void Method_3_A0C1024F4AAFB0BA(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_A0C1024F4AAFB0BA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D53870D6C0CB6C5D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_D53870D6C0CB6C5D_OFFSET))(this);
	}

	::System::Void Method_3_5A81E8150F3CA56B(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_5A81E8150F3CA56B_OFFSET))(this, a1);
	}

	::System::Void Method_3_F9BE5F1815F68941(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_F9BE5F1815F68941_OFFSET))(this, a1);
	}

	::System::Void Method_3_9384D13D97C3F513(::Class_0_16E4307DCC419505_421* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_421*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_9384D13D97C3F513_OFFSET))(this, a1);
	}

	::System::Void Method_3_B1D46CC9BCCCC367(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_421*>*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_B1D46CC9BCCCC367_OFFSET))(this, a1);
	}

	::System::Void Method_3_0916893CAD482967(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_0916893CAD482967_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_30656B97AF27D696_METHOD_3_2CBE0B79DD36047E_OFFSET))(this);
	}
};
