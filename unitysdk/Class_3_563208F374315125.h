#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_563208F374315125_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x10AE4570)
#define CLASS_3_563208F374315125_METHOD_3_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x10AE43B0)
#define CLASS_3_563208F374315125_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10AE47A0)
#define CLASS_3_563208F374315125_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10AE4710)
#define CLASS_3_563208F374315125_METHOD_3_F515BE3458EF02E5_OFFSET UNITYSDK_OFFSET(0x10AE4830)
#define CLASS_3_563208F374315125__CTOR_OFFSET UNITYSDK_OFFSET(0x10AE4210)

inline static constexpr unsigned int Class_3_563208F374315125_TypeDefinitionIndex = 51967;

class Class_3_563208F374315125 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Single Field_3_0; // 0x38
	::MoleMole::Config::ValueCompareType Field_3_1; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125_METHOD_3_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_F515BE3458EF02E5(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_563208F374315125_METHOD_3_F515BE3458EF02E5_OFFSET))(this, a1);
	}
};
