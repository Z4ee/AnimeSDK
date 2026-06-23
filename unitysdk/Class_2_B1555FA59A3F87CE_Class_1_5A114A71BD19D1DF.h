#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_2_B1555FA59A3F87CE;
namespace MoleMole { class UIOverlordFeastDishObjectControlWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_4B6DEDB9FF4B740B_OFFSET UNITYSDK_OFFSET(0x137A4CC0)
#define CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_54F265D749A0E274_OFFSET UNITYSDK_OFFSET(0x137A4D20)
#define CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_72B42B98C4B53CEB_OFFSET UNITYSDK_OFFSET(0x137A4C60)
#define CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_8306CA7DDFB00A52_OFFSET UNITYSDK_OFFSET(0x137A4B90)
#define CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF__CTOR_OFFSET UNITYSDK_OFFSET(0x137A4B80)

inline static constexpr unsigned int Class_2_B1555FA59A3F87CE_Class_1_5A114A71BD19D1DF_TypeDefinitionIndex = 41894;

class Class_2_B1555FA59A3F87CE_Class_1_5A114A71BD19D1DF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::Class_2_B1555FA59A3F87CE* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8306CA7DDFB00A52(::MoleMole::UIOverlordFeastDishObjectControlWidgetController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIOverlordFeastDishObjectControlWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_8306CA7DDFB00A52_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_72B42B98C4B53CEB(::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::MoleMole::Vector2Int, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_72B42B98C4B53CEB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4B6DEDB9FF4B740B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_4B6DEDB9FF4B740B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_54F265D749A0E274(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B1555FA59A3F87CE_CLASS_1_5A114A71BD19D1DF_METHOD_1_54F265D749A0E274_OFFSET))(this, a1);
	}
};
