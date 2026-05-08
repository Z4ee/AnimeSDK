#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A85DD0CF7A2118D1.h"
#include "unitysdk/System/Object.h"

class Class_5_12295D592E32B8BA;
class Class_5_AF65C3A968E836D2;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23_METHOD_1_5E7949EA01CE32A1_OFFSET UNITYSDK_OFFSET(0x1419C200)
#define CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x1419C910)
#define CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23__CTOR_OFFSET UNITYSDK_OFFSET(0x1419C1F0)

inline static constexpr unsigned int Class_5_12295D592E32B8BA_Class_1_D813B73020DECC23_TypeDefinitionIndex = 37982;

class Class_5_12295D592E32B8BA_Class_1_D813B73020DECC23 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::Struct_2_A85DD0CF7A2118D1>* Field_1_1; // 0x10
	::Class_5_12295D592E32B8BA* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5E7949EA01CE32A1(::Class_5_AF65C3A968E836D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23_METHOD_1_5E7949EA01CE32A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_12295D592E32B8BA_CLASS_1_D813B73020DECC23_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}
};
