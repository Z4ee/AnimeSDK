#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_A1A45D8655270887.h"
#include "unitysdk/System/Object.h"

class Class_1_0AEBFEBDADDA07AC;
class Class_2_0C0DB953EBA46390;
class Class_5_DCFF91E03A93C03C;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615_METHOD_1_51E538FD9AD4DBF8_OFFSET UNITYSDK_OFFSET(0x16588690)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615_METHOD_1_AED987E6A301E6D8_OFFSET UNITYSDK_OFFSET(0x16588C10)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615__CTOR_OFFSET UNITYSDK_OFFSET(0x16588680)

inline static constexpr unsigned int Class_5_DCFF91E03A93C03C_Class_1_27813A3E06879615_TypeDefinitionIndex = 83219;

class Class_5_DCFF91E03A93C03C_Class_1_27813A3E06879615 : public ::System::Object
{
public:
	::Class_5_DCFF91E03A93C03C* Field_1_3; // 0x10
	::Class_2_0C0DB953EBA46390* Field_1_0; // 0x18
	::System::Collections::Generic::IReadOnlyDictionary_2<::Struct_2_A1A45D8655270887, ::Class_1_0AEBFEBDADDA07AC*>* Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_51E538FD9AD4DBF8(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615_METHOD_1_51E538FD9AD4DBF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AED987E6A301E6D8(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_27813A3E06879615_METHOD_1_AED987E6A301E6D8_OFFSET))(this, a1);
	}
};
